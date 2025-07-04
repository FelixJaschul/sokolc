/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2023 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/*
  The PulseAudio target for SDL 1.3 is based on the 1.3 arts target, with
   the appropriate parts replaced with the 1.2 PulseAudio target code. This
   was the cleanest way to move it to 1.3. The 1.2 target was written by
   Stéphan Kochen: stephan .a.t. kochen.nl
*/
#include "../../SDL_internal.h"
#include "SDL_hints.h"

#if SDL_AUDIO_DRIVER_PULSEAUDIO

/* Allow access to a raw mixing buffer */

#ifdef HAVE_SIGNAL_H
#include <signal.h>
#endif
#include <unistd.h>
#include <sys/types.h>
#include <pulse/pulseaudio.h>

#include "SDL_timer.h"
#include "SDL_audio.h"
#include "../SDL_audio_c.h"
#include "SDL_pulseaudio.h"
#include "SDL_loadso.h"
#include "../../thread/SDL_systhread.h"

/* should we include monitors in the device list? Set at SDL_Init time */
static SDL_bool include_monitors = SDL_FALSE;

#if (PA_API_VERSION < 12)
/** Return non-zero if the passed state is one of the connected states */
static SDL_INLINE int PA_CONTEXT_IS_GOOD(pa_context_state_t x)
{
    return x == PA_CONTEXT_CONNECTING || x == PA_CONTEXT_AUTHORIZING || x == PA_CONTEXT_SETTING_NAME || x == PA_CONTEXT_READY;
}
/** Return non-zero if the passed state is one of the connected states */
static SDL_INLINE int PA_STREAM_IS_GOOD(pa_stream_state_t x)
{
    return x == PA_STREAM_CREATING || x == PA_STREAM_READY;
}
#endif /* pulseaudio <= 0.9.10 */

static const char *(*PULSEAUDIO_pa_get_library_version)(void);
static pa_channel_map *(*PULSEAUDIO_pa_channel_map_init_auto)(
    pa_channel_map *, unsigned, pa_channel_map_def_t);
static const char *(*PULSEAUDIO_pa_strerror)(int);
static pa_mainloop *(*PULSEAUDIO_pa_mainloop_new)(void);
static pa_mainloop_api *(*PULSEAUDIO_pa_mainloop_get_api)(pa_mainloop *);
static int (*PULSEAUDIO_pa_mainloop_iterate)(pa_mainloop *, int, int *);
static int (*PULSEAUDIO_pa_mainloop_run)(pa_mainloop *, int *);
static void (*PULSEAUDIO_pa_mainloop_quit)(pa_mainloop *, int);
static void (*PULSEAUDIO_pa_mainloop_free)(pa_mainloop *);

static pa_operation_state_t (*PULSEAUDIO_pa_operation_get_state)(
    const pa_operation *);
static void (*PULSEAUDIO_pa_operation_cancel)(pa_operation *);
static void (*PULSEAUDIO_pa_operation_unref)(pa_operation *);

static pa_context *(*PULSEAUDIO_pa_context_new)(pa_mainloop_api *,
                                                const char *);
static int (*PULSEAUDIO_pa_context_connect)(pa_context *, const char *,
                                            pa_context_flags_t, const pa_spawn_api *);
static pa_operation *(*PULSEAUDIO_pa_context_get_sink_info_list)(pa_context *, pa_sink_info_cb_t, void *);
static pa_operation *(*PULSEAUDIO_pa_context_get_source_info_list)(pa_context *, pa_source_info_cb_t, void *);
static pa_operation *(*PULSEAUDIO_pa_context_get_sink_info_by_index)(pa_context *, uint32_t, pa_sink_info_cb_t, void *);
static pa_operation *(*PULSEAUDIO_pa_context_get_source_info_by_index)(pa_context *, uint32_t, pa_source_info_cb_t, void *);
static pa_context_state_t (*PULSEAUDIO_pa_context_get_state)(const pa_context *);
static pa_operation *(*PULSEAUDIO_pa_context_subscribe)(pa_context *, pa_subscription_mask_t, pa_context_success_cb_t, void *);
static void (*PULSEAUDIO_pa_context_set_subscribe_callback)(pa_context *, pa_context_subscribe_cb_t, void *);
static void (*PULSEAUDIO_pa_context_disconnect)(pa_context *);
static void (*PULSEAUDIO_pa_context_unref)(pa_context *);

static pa_stream *(*PULSEAUDIO_pa_stream_new)(pa_context *, const char *,
                                              const pa_sample_spec *, const pa_channel_map *);
static int (*PULSEAUDIO_pa_stream_connect_playback)(pa_stream *, const char *,
                                                    const pa_buffer_attr *, pa_stream_flags_t, const pa_cvolume *, pa_stream *);
static int (*PULSEAUDIO_pa_stream_connect_record)(pa_stream *, const char *,
                                                  const pa_buffer_attr *, pa_stream_flags_t);
static pa_stream_state_t (*PULSEAUDIO_pa_stream_get_state)(const pa_stream *);
static size_t (*PULSEAUDIO_pa_stream_writable_size)(const pa_stream *);
static size_t (*PULSEAUDIO_pa_stream_readable_size)(const pa_stream *);
static int (*PULSEAUDIO_pa_stream_write)(pa_stream *, const void *, size_t,
                                         pa_free_cb_t, int64_t, pa_seek_mode_t);
static pa_operation *(*PULSEAUDIO_pa_stream_drain)(pa_stream *,
                                                   pa_stream_success_cb_t, void *);
static int (*PULSEAUDIO_pa_stream_peek)(pa_stream *, const void **, size_t *);
static int (*PULSEAUDIO_pa_stream_drop)(pa_stream *);
static pa_operation *(*PULSEAUDIO_pa_stream_flush)(pa_stream *,
                                                   pa_stream_success_cb_t, void *);
static int (*PULSEAUDIO_pa_stream_disconnect)(pa_stream *);
static void (*PULSEAUDIO_pa_stream_unref)(pa_stream *);
static void (*PULSEAUDIO_pa_stream_set_write_callback)(pa_stream *, pa_stream_request_cb_t, void *);
static pa_operation *(*PULSEAUDIO_pa_context_get_server_info)(pa_context *, pa_server_info_cb_t, void *);

static int load_pulseaudio_syms(void);

#ifdef SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC

static const char *pulseaudio_library = SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC;
static void *pulseaudio_handle = NULL;

static int load_pulseaudio_sym(const char *fn, void **addr)
{
    *addr = SDL_LoadFunction(pulseaudio_handle, fn);
    if (*addr == NULL) {
        /* Don't call SDL_SetError(): SDL_LoadFunction already did. */
        return 0;
    }

    return 1;
}

/* cast funcs to char* first, to please GCC's strict aliasing rules. */
#define SDL_PULSEAUDIO_SYM(x)                                       \
    if (!load_pulseaudio_sym(#x, (void **)(char *)&PULSEAUDIO_##x)) \
    return -1

static void UnloadPulseAudioLibrary(void)
{
    if (pulseaudio_handle != NULL) {
        SDL_UnloadObject(pulseaudio_handle);
        pulseaudio_handle = NULL;
    }
}

static int LoadPulseAudioLibrary(void)
{
    int retval = 0;
    if (pulseaudio_handle == NULL) {
        pulseaudio_handle = SDL_LoadObject(pulseaudio_library);
        if (pulseaudio_handle == NULL) {
            retval = -1;
            /* Don't call SDL_SetError(): SDL_LoadObject already did. */
        } else {
            retval = load_pulseaudio_syms();
            if (retval < 0) {
                UnloadPulseAudioLibrary();
            }
        }
    }
    return retval;
}

#else

#define SDL_PULSEAUDIO_SYM(x) PULSEAUDIO_##x = x

static void UnloadPulseAudioLibrary(void)
{
}

static int LoadPulseAudioLibrary(void)
{
    load_pulseaudio_syms();
    return 0;
}

#endif /* SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC */

static int load_pulseaudio_syms(void)
{
    SDL_PULSEAUDIO_SYM(pa_get_library_version);
    SDL_PULSEAUDIO_SYM(pa_mainloop_new);
    SDL_PULSEAUDIO_SYM(pa_mainloop_get_api);
    SDL_PULSEAUDIO_SYM(pa_mainloop_iterate);
    SDL_PULSEAUDIO_SYM(pa_mainloop_run);
    SDL_PULSEAUDIO_SYM(pa_mainloop_quit);
    SDL_PULSEAUDIO_SYM(pa_mainloop_free);
    SDL_PULSEAUDIO_SYM(pa_operation_get_state);
    SDL_PULSEAUDIO_SYM(pa_operation_cancel);
    SDL_PULSEAUDIO_SYM(pa_operation_unref);
    SDL_PULSEAUDIO_SYM(pa_context_new);
    SDL_PULSEAUDIO_SYM(pa_context_connect);
    SDL_PULSEAUDIO_SYM(pa_context_get_sink_info_list);
    SDL_PULSEAUDIO_SYM(pa_context_get_source_info_list);
    SDL_PULSEAUDIO_SYM(pa_context_get_sink_info_by_index);
    SDL_PULSEAUDIO_SYM(pa_context_get_source_info_by_index);
    SDL_PULSEAUDIO_SYM(pa_context_get_state);
    SDL_PULSEAUDIO_SYM(pa_context_subscribe);
    SDL_PULSEAUDIO_SYM(pa_context_set_subscribe_callback);
    SDL_PULSEAUDIO_SYM(pa_context_disconnect);
    SDL_PULSEAUDIO_SYM(pa_context_unref);
    SDL_PULSEAUDIO_SYM(pa_stream_new);
    SDL_PULSEAUDIO_SYM(pa_stream_connect_playback);
    SDL_PULSEAUDIO_SYM(pa_stream_connect_record);
    SDL_PULSEAUDIO_SYM(pa_stream_get_state);
    SDL_PULSEAUDIO_SYM(pa_stream_writable_size);
    SDL_PULSEAUDIO_SYM(pa_stream_readable_size);
    SDL_PULSEAUDIO_SYM(pa_stream_write);
    SDL_PULSEAUDIO_SYM(pa_stream_drain);
    SDL_PULSEAUDIO_SYM(pa_stream_disconnect);
    SDL_PULSEAUDIO_SYM(pa_stream_peek);
    SDL_PULSEAUDIO_SYM(pa_stream_drop);
    SDL_PULSEAUDIO_SYM(pa_stream_flush);
    SDL_PULSEAUDIO_SYM(pa_stream_unref);
    SDL_PULSEAUDIO_SYM(pa_channel_map_init_auto);
    SDL_PULSEAUDIO_SYM(pa_strerror);
    SDL_PULSEAUDIO_SYM(pa_stream_set_write_callback);
    SDL_PULSEAUDIO_SYM(pa_context_get_server_info);
    return 0;
}

static SDL_INLINE int squashVersion(const int major, const int minor, const int patch)
{
    return ((major & 0xFF) << 16) | ((minor & 0xFF) << 8) | (patch & 0xFF);
}

/* Workaround for older pulse: pa_context_new() must have non-NULL appname */
static const char *getAppName(void)
{
    const char *retval = SDL_GetHint(SDL_HINT_AUDIO_DEVICE_APP_NAME);
    if (retval && *retval) {
        return retval;
    }
    retval = SDL_GetHint(SDL_HINT_APP_NAME);
    if (retval && *retval) {
        return retval;
    } else {
        const char *verstr = PULSEAUDIO_pa_get_library_version();
        retval = "SDL Application"; /* the "oh well" default. */
        if (verstr != NULL) {
            int maj, min, patch;
            if (SDL_sscanf(verstr, "%d.%d.%d", &maj, &min, &patch) == 3) {
                if (squashVersion(maj, min, patch) >= squashVersion(0, 9, 15)) {
                    retval = NULL; /* 0.9.15+ handles NULL correctly. */
                }
            }
        }
    }
    return retval;
}

static void WaitForPulseOperation(pa_mainloop *mainloop, pa_operation *o)
{
    /* This checks for NO errors currently. Either fix that, check results elsewhere, or do things you don't care about. */
    if (mainloop && o) {
        SDL_bool okay = SDL_TRUE;
        while (okay && (PULSEAUDIO_pa_operation_get_state(o) == PA_OPERATION_RUNNING)) {
            okay = (PULSEAUDIO_pa_mainloop_iterate(mainloop, 1, NULL) >= 0);
        }
        PULSEAUDIO_pa_operation_unref(o);
    }
}

static void DisconnectFromPulseServer(pa_mainloop *mainloop, pa_context *context)
{
    if (context) {
        PULSEAUDIO_pa_context_disconnect(context);
        PULSEAUDIO_pa_context_unref(context);
    }
    if (mainloop != NULL) {
        PULSEAUDIO_pa_mainloop_free(mainloop);
    }
}

static int ConnectToPulseServer_Internal(pa_mainloop **_mainloop, pa_context **_context)
{
    pa_mainloop *mainloop = NULL;
    pa_context *context = NULL;
    pa_mainloop_api *mainloop_api = NULL;
    int state = 0;

    *_mainloop = NULL;
    *_context = NULL;

    /* Set up a new main loop */
    if (!(mainloop = PULSEAUDIO_pa_mainloop_new())) {
        return SDL_SetError("pa_mainloop_new() failed");
    }

    mainloop_api = PULSEAUDIO_pa_mainloop_get_api(mainloop);
    SDL_assert(mainloop_api); /* this never fails, right? */

    context = PULSEAUDIO_pa_context_new(mainloop_api, getAppName());
    if (context == NULL) {
        PULSEAUDIO_pa_mainloop_free(mainloop);
        return SDL_SetError("pa_context_new() failed");
    }

    /* Connect to the PulseAudio server */
    if (PULSEAUDIO_pa_context_connect(context, NULL, 0, NULL) < 0) {
        PULSEAUDIO_pa_context_unref(context);
        PULSEAUDIO_pa_mainloop_free(mainloop);
        return SDL_SetError("Could not setup connection to PulseAudio");
    }

    do {
        if (PULSEAUDIO_pa_mainloop_iterate(mainloop, 1, NULL) < 0) {
            PULSEAUDIO_pa_context_unref(context);
            PULSEAUDIO_pa_mainloop_free(mainloop);
            return SDL_SetError("pa_mainloop_iterate() failed");
        }
        state = PULSEAUDIO_pa_context_get_state(context);
        if (!PA_CONTEXT_IS_GOOD(state)) {
            PULSEAUDIO_pa_context_unref(context);
            PULSEAUDIO_pa_mainloop_free(mainloop);
            return SDL_SetError("Could not connect to PulseAudio");
        }
    } while (state != PA_CONTEXT_READY);

    *_context = context;
    *_mainloop = mainloop;

    return 0; /* connected and ready! */
}

static int ConnectToPulseServer(pa_mainloop **_mainloop, pa_context **_context)
{
    const int retval = ConnectToPulseServer_Internal(_mainloop, _context);
    if (retval < 0) {
        DisconnectFromPulseServer(*_mainloop, *_context);
    }
    return retval;
}

/* This function waits until it is possible to write a full sound buffer */
static void PULSEAUDIO_WaitDevice(_THIS)
{
    /* this is a no-op; we wait in PULSEAUDIO_PlayDevice now. */
}

static void WriteCallback(pa_stream *p, size_t nbytes, void *userdata)
{
    struct SDL_PrivateAudioData *h = (struct SDL_PrivateAudioData *)userdata;
    /*printf("PULSEAUDIO WRITE CALLBACK! nbytes=%u\n", (unsigned int) nbytes);*/
    h->bytes_requested += nbytes;
}

static void PULSEAUDIO_PlayDevice(_THIS)
{
    struct SDL_PrivateAudioData *h = this->hidden;
    int available = h->mixlen;
    int written = 0;
    int cpy;

    /*printf("PULSEAUDIO PLAYDEVICE START! mixlen=%d\n", available);*/

    while (SDL_AtomicGet(&this->enabled) && (available > 0)) {
        cpy = SDL_min(h->bytes_requested, available);
        if (cpy) {
            if (PULSEAUDIO_pa_stream_write(h->stream, h->mixbuf + written, cpy, NULL, 0LL, PA_SEEK_RELATIVE) < 0) {
                SDL_OpenedAudioDeviceDisconnected(this);
                return;
            }
            /*printf("PULSEAUDIO FEED! nbytes=%u\n", (unsigned int) cpy);*/
            h->bytes_requested -= cpy;
            written += cpy;
            available -= cpy;
        }

        /* let WriteCallback fire if necessary. */
        /*printf("PULSEAUDIO ITERATE!\n");*/
        if (PULSEAUDIO_pa_context_get_state(h->context) != PA_CONTEXT_READY ||
            PULSEAUDIO_pa_stream_get_state(h->stream) != PA_STREAM_READY ||
            PULSEAUDIO_pa_mainloop_iterate(h->mainloop, 1, NULL) < 0) {
            SDL_OpenedAudioDeviceDisconnected(this);
            return;
        }
    }

    /*printf("PULSEAUDIO PLAYDEVICE END! written=%d\n", written);*/
}

static Uint8 *PULSEAUDIO_GetDeviceBuf(_THIS)
{
    return this->hidden->mixbuf;
}

static int PULSEAUDIO_CaptureFromDevice(_THIS, void *buffer, int buflen)
{
    struct SDL_PrivateAudioData *h = this->hidden;
    const void *data = NULL;
    size_t nbytes = 0;

    while (SDL_AtomicGet(&this->enabled)) {
        if (h->capturebuf != NULL) {
            const int cpy = SDL_min(buflen, h->capturelen);
            SDL_memcpy(buffer, h->capturebuf, cpy);
            /*printf("PULSEAUDIO: fed %d captured bytes\n", cpy);*/
            h->capturebuf += cpy;
            h->capturelen -= cpy;
            if (h->capturelen == 0) {
                h->capturebuf = NULL;
                PULSEAUDIO_pa_stream_drop(h->stream); /* done with this fragment. */
            }
            return cpy; /* new data, return it. */
        }

        if (PULSEAUDIO_pa_context_get_state(h->context) != PA_CONTEXT_READY ||
            PULSEAUDIO_pa_stream_get_state(h->stream) != PA_STREAM_READY ||
            PULSEAUDIO_pa_mainloop_iterate(h->mainloop, 1, NULL) < 0) {
            SDL_OpenedAudioDeviceDisconnected(this);
            return -1; /* uhoh, pulse failed! */
        }

        if (PULSEAUDIO_pa_stream_readable_size(h->stream) == 0) {
            continue; /* no data available yet. */
        }

        /* a new fragment is available! */
        PULSEAUDIO_pa_stream_peek(h->stream, &data, &nbytes);
        SDL_assert(nbytes > 0);
        /* If data == NULL, then the buffer had a hole, ignore that */
        if (data == NULL) {
            PULSEAUDIO_pa_stream_drop(h->stream); /* drop this fragment. */
        } else {
            /* store this fragment's data, start feeding it to SDL. */
            /*printf("PULSEAUDIO: captured %d new bytes\n", (int) nbytes);*/
            h->capturebuf = (const Uint8 *)data;
            h->capturelen = nbytes;
        }
    }

    return -1; /* not enabled? */
}

static void PULSEAUDIO_FlushCapture(_THIS)
{
    struct SDL_PrivateAudioData *h = this->hidden;
    const void *data = NULL;
    size_t nbytes = 0;

    if (h->capturebuf != NULL) {
        PULSEAUDIO_pa_stream_drop(h->stream);
        h->capturebuf = NULL;
        h->capturelen = 0;
    }

    while (SDL_AtomicGet(&this->enabled)) {
        if (PULSEAUDIO_pa_context_get_state(h->context) != PA_CONTEXT_READY ||
            PULSEAUDIO_pa_stream_get_state(h->stream) != PA_STREAM_READY ||
            PULSEAUDIO_pa_mainloop_iterate(h->mainloop, 1, NULL) < 0) {
            SDL_OpenedAudioDeviceDisconnected(this);
            return; /* uhoh, pulse failed! */
        }

        if (PULSEAUDIO_pa_stream_readable_size(h->stream) == 0) {
            break; /* no data available, so we're done. */
        }

        /* a new fragment is available! Just dump it. */
        PULSEAUDIO_pa_stream_peek(h->stream, &data, &nbytes);
        PULSEAUDIO_pa_stream_drop(h->stream); /* drop this fragment. */
    }
}

static void PULSEAUDIO_CloseDevice(_THIS)
{
    if (this->hidden->stream) {
        if (this->hidden->capturebuf != NULL) {
            PULSEAUDIO_pa_stream_drop(this->hidden->stream);
        }
        PULSEAUDIO_pa_stream_disconnect(this->hidden->stream);
        PULSEAUDIO_pa_stream_unref(this->hidden->stream);
    }

    DisconnectFromPulseServer(this->hidden->mainloop, this->hidden->context);
    SDL_free(this->hidden->mixbuf);
    SDL_free(this->hidden->device_name);
    SDL_free(this->hidden);
}

static void SinkDeviceNameCallback(pa_context *c, const pa_sink_info *i, int is_last, void *data)
{
    if (i) {
        char **devname = (char **)data;
        *devname = SDL_strdup(i->name);
    }
}

static void SourceDeviceNameCallback(pa_context *c, const pa_source_info *i, int is_last, void *data)
{
    if (i) {
        char **devname = (char **)data;
        *devname = SDL_strdup(i->name);
    }
}

static SDL_bool FindDeviceName(struct SDL_PrivateAudioData *h, const SDL_bool iscapture, void *handle)
{
    const uint32_t idx = ((uint32_t)((intptr_t)handle)) - 1;

    if (handle == NULL) { /* NULL == default device. */
        return SDL_TRUE;
    }

    if (iscapture) {
        WaitForPulseOperation(h->mainloop,
                              PULSEAUDIO_pa_context_get_source_info_by_index(h->context, idx,
                                                                             SourceDeviceNameCallback, &h->device_name));
    } else {
        WaitForPulseOperation(h->mainloop,
                              PULSEAUDIO_pa_context_get_sink_info_by_index(h->context, idx,
                                                                           SinkDeviceNameCallback, &h->device_name));
    }

    return h->device_name != NULL;
}

static int PULSEAUDIO_OpenDevice(_THIS, const char *devname)
{
    struct SDL_PrivateAudioData *h = NULL;
    SDL_AudioFormat test_format;
    pa_sample_spec paspec;
    pa_buffer_attr paattr;
    pa_channel_map pacmap;
    pa_stream_flags_t flags = 0;
    const char *name = NULL;
    SDL_bool iscapture = this->iscapture;
    int state = 0, format = PA_SAMPLE_INVALID;
    int rc = 0;

    /* Initialize all variables that we clean on shutdown */
    h = this->hidden = (struct SDL_PrivateAudioData *)
        SDL_malloc((sizeof *this->hidden));
    if (this->hidden == NULL) {
        return SDL_OutOfMemory();
    }
    SDL_zerop(this->hidden);

    /* Try for a closest match on audio format */
    for (test_format = SDL_FirstAudioFormat(this->spec.format); test_format; test_format = SDL_NextAudioFormat()) {
#ifdef DEBUG_AUDIO
        fprintf(stderr, "Trying format 0x%4.4x\n", test_format);
#endif
        switch (test_format) {
        case AUDIO_U8:
            format = PA_SAMPLE_U8;
            break;
        case AUDIO_S16LSB:
            format = PA_SAMPLE_S16LE;
            break;
        case AUDIO_S16MSB:
            format = PA_SAMPLE_S16BE;
            break;
        case AUDIO_S32LSB:
            format = PA_SAMPLE_S32LE;
            break;
        case AUDIO_S32MSB:
            format = PA_SAMPLE_S32BE;
            break;
        case AUDIO_F32LSB:
            format = PA_SAMPLE_FLOAT32LE;
            break;
        case AUDIO_F32MSB:
            format = PA_SAMPLE_FLOAT32BE;
            break;
        default:
            continue;
        }
        break;
    }
    if (!test_format) {
        return SDL_SetError("%s: Unsupported audio format", "pulseaudio");
    }
    this->spec.format = test_format;
    paspec.format = format;

    /* Calculate the final parameters for this audio specification */
    SDL_CalculateAudioSpec(&this->spec);

    /* Allocate mixing buffer */
    if (!iscapture) {
        h->mixlen = this->spec.size;
        h->mixbuf = (Uint8 *)SDL_malloc(h->mixlen);
        if (h->mixbuf == NULL) {
            return SDL_OutOfMemory();
        }
        SDL_memset(h->mixbuf, this->spec.silence, this->spec.size);
    }

    paspec.channels = this->spec.channels;
    paspec.rate = this->spec.freq;

    /* Reduced prebuffering compared to the defaults. */
    paattr.fragsize = this->spec.size;
    paattr.tlength = h->mixlen;
    paattr.prebuf = -1;
    paattr.maxlength = -1;
    paattr.minreq = -1;
    flags |= PA_STREAM_ADJUST_LATENCY;

    if (ConnectToPulseServer(&h->mainloop, &h->context) < 0) {
        return SDL_SetError("Could not connect to PulseAudio server");
    }

    if (!FindDeviceName(h, iscapture, this->handle)) {
        return SDL_SetError("Requested PulseAudio sink/source missing?");
    }

    /* The SDL ALSA output hints us that we use Windows' channel mapping */
    /* http://bugzilla.libsdl.org/show_bug.cgi?id=110 */
    PULSEAUDIO_pa_channel_map_init_auto(&pacmap, this->spec.channels,
                                        PA_CHANNEL_MAP_WAVEEX);

    name = SDL_GetHint(SDL_HINT_AUDIO_DEVICE_STREAM_NAME);

    h->stream = PULSEAUDIO_pa_stream_new(
        h->context,
        (name && *name) ? name : "Audio Stream", /* stream description */
        &paspec,                                 /* sample format spec */
        &pacmap                                  /* channel map */
    );

    if (h->stream == NULL) {
        return SDL_SetError("Could not set up PulseAudio stream");
    }

    /* now that we have multi-device support, don't move a stream from
        a device that was unplugged to something else, unless we're default. */
    if (h->device_name != NULL) {
        flags |= PA_STREAM_DONT_MOVE;
    }

    if (iscapture) {
        rc = PULSEAUDIO_pa_stream_connect_record(h->stream, h->device_name, &paattr, flags);
    } else {
        PULSEAUDIO_pa_stream_set_write_callback(h->stream, WriteCallback, h);
        rc = PULSEAUDIO_pa_stream_connect_playback(h->stream, h->device_name, &paattr, flags, NULL, NULL);
    }

    if (rc < 0) {
        return SDL_SetError("Could not connect PulseAudio stream");
    }

    do {
        if (PULSEAUDIO_pa_mainloop_iterate(h->mainloop, 1, NULL) < 0) {
            return SDL_SetError("pa_mainloop_iterate() failed");
        }
        state = PULSEAUDIO_pa_stream_get_state(h->stream);
        if (!PA_STREAM_IS_GOOD(state)) {
            return SDL_SetError("Could not connect PulseAudio stream");
        }
    } while (state != PA_STREAM_READY);

    /* We're ready to rock and roll. :-) */
    return 0;
}

static pa_mainloop *hotplug_mainloop = NULL;
static pa_context *hotplug_context = NULL;
static SDL_Thread *hotplug_thread = NULL;

/* These are the OS identifiers (i.e. ALSA strings)... */
static char *default_sink_path = NULL;
static char *default_source_path = NULL;
/* ... and these are the descriptions we use in GetDefaultAudioInfo. */
static char *default_sink_name = NULL;
static char *default_source_name = NULL;

/* device handles are device index + 1, cast to void*, so we never pass a NULL. */

static SDL_AudioFormat PulseFormatToSDLFormat(pa_sample_format_t format)
{
    switch (format) {
    case PA_SAMPLE_U8:
        return AUDIO_U8;
    case PA_SAMPLE_S16LE:
        return AUDIO_S16LSB;
    case PA_SAMPLE_S16BE:
        return AUDIO_S16MSB;
    case PA_SAMPLE_S32LE:
        return AUDIO_S32LSB;
    case PA_SAMPLE_S32BE:
        return AUDIO_S32MSB;
    case PA_SAMPLE_FLOAT32LE:
        return AUDIO_F32LSB;
    case PA_SAMPLE_FLOAT32BE:
        return AUDIO_F32MSB;
    default:
        return 0;
    }
}

/* This is called when PulseAudio adds an output ("sink") device. */
static void SinkInfoCallback(pa_context *c, const pa_sink_info *i, int is_last, void *data)
{
    SDL_AudioSpec spec;
    SDL_bool add = (SDL_bool)((intptr_t)data);
    if (i) {
        spec.freq = i->sample_spec.rate;
        spec.channels = i->sample_spec.channels;
        spec.format = PulseFormatToSDLFormat(i->sample_spec.format);
        spec.silence = 0;
        spec.samples = 0;
        spec.size = 0;
        spec.callback = NULL;
        spec.userdata = NULL;

        if (add) {
            SDL_AddAudioDevice(SDL_FALSE, i->description, &spec, (void *)((intptr_t)i->index + 1));
        }

        if (default_sink_path != NULL && SDL_strcmp(i->name, default_sink_path) == 0) {
            if (default_sink_name != NULL) {
                SDL_free(default_sink_name);
            }
            default_sink_name = SDL_strdup(i->description);
        }
    }
}

/* This is called when PulseAudio adds a capture ("source") device. */
static void SourceInfoCallback(pa_context *c, const pa_source_info *i, int is_last, void *data)
{
    SDL_AudioSpec spec;
    SDL_bool add = (SDL_bool)((intptr_t)data);
    if (i) {
        /* Maybe skip "monitor" sources. These are just output from other sinks. */
        if (include_monitors || (i->monitor_of_sink == PA_INVALID_INDEX)) {
            spec.freq = i->sample_spec.rate;
            spec.channels = i->sample_spec.channels;
            spec.format = PulseFormatToSDLFormat(i->sample_spec.format);
            spec.silence = 0;
            spec.samples = 0;
            spec.size = 0;
            spec.callback = NULL;
            spec.userdata = NULL;

            if (add) {
                SDL_AddAudioDevice(SDL_TRUE, i->description, &spec, (void *)((intptr_t)i->index + 1));
            }

            if (default_source_path != NULL && SDL_strcmp(i->name, default_source_path) == 0) {
                if (default_source_name != NULL) {
                    SDL_free(default_source_name);
                }
                default_source_name = SDL_strdup(i->description);
            }
        }
    }
}

static void ServerInfoCallback(pa_context *c, const pa_server_info *i, void *data)
{
    if (default_sink_path != NULL) {
        SDL_free(default_sink_path);
    }
    if (default_source_path != NULL) {
        SDL_free(default_source_path);
    }
    default_sink_path = SDL_strdup(i->default_sink_name);
    default_source_path = SDL_strdup(i->default_source_name);
}

/* This is called when PulseAudio has a device connected/removed/changed. */
static void HotplugCallback(pa_context *c, pa_subscription_event_type_t t, uint32_t idx, void *data)
{
    const SDL_bool added = ((t & PA_SUBSCRIPTION_EVENT_TYPE_MASK) == PA_SUBSCRIPTION_EVENT_NEW);
    const SDL_bool removed = ((t & PA_SUBSCRIPTION_EVENT_TYPE_MASK) == PA_SUBSCRIPTION_EVENT_REMOVE);
    const SDL_bool changed = ((t & PA_SUBSCRIPTION_EVENT_TYPE_MASK) == PA_SUBSCRIPTION_EVENT_CHANGE);

    if (added || removed || changed) { /* we only care about add/remove events. */
        const SDL_bool sink = ((t & PA_SUBSCRIPTION_EVENT_FACILITY_MASK) == PA_SUBSCRIPTION_EVENT_SINK);
        const SDL_bool source = ((t & PA_SUBSCRIPTION_EVENT_FACILITY_MASK) == PA_SUBSCRIPTION_EVENT_SOURCE);

        /* adds need sink details from the PulseAudio server. Another callback... */
        if ((added || changed) && sink) {
            if (changed) {
                PULSEAUDIO_pa_context_get_server_info(hotplug_context, ServerInfoCallback, NULL);
            }
            PULSEAUDIO_pa_context_get_sink_info_by_index(hotplug_context, idx, SinkInfoCallback, (void *)((intptr_t)added));
        } else if ((added || changed) && source) {
            if (changed) {
                PULSEAUDIO_pa_context_get_server_info(hotplug_context, ServerInfoCallback, NULL);
            }
            PULSEAUDIO_pa_context_get_source_info_by_index(hotplug_context, idx, SourceInfoCallback, (void *)((intptr_t)added));
        } else if (removed && (sink || source)) {
            /* removes we can handle just with the device index. */
            SDL_RemoveAudioDevice(source != 0, (void *)((intptr_t)idx + 1));
        }
    }
}

/* this runs as a thread while the Pulse target is initialized to catch hotplug events. */
static int SDLCALL HotplugThread(void *data)
{
    pa_operation *o;
    SDL_SetThreadPriority(SDL_THREAD_PRIORITY_LOW);
    PULSEAUDIO_pa_context_set_subscribe_callback(hotplug_context, HotplugCallback, NULL);
    o = PULSEAUDIO_pa_context_subscribe(hotplug_context, PA_SUBSCRIPTION_MASK_SINK | PA_SUBSCRIPTION_MASK_SOURCE, NULL, NULL);
    PULSEAUDIO_pa_operation_unref(o); /* don't wait for it, just do our thing. */
    PULSEAUDIO_pa_mainloop_run(hotplug_mainloop, NULL);
    return 0;
}

static void PULSEAUDIO_DetectDevices()
{
    WaitForPulseOperation(hotplug_mainloop, PULSEAUDIO_pa_context_get_server_info(hotplug_context, ServerInfoCallback, NULL));
    WaitForPulseOperation(hotplug_mainloop, PULSEAUDIO_pa_context_get_sink_info_list(hotplug_context, SinkInfoCallback, (void *)((intptr_t)SDL_TRUE)));
    WaitForPulseOperation(hotplug_mainloop, PULSEAUDIO_pa_context_get_source_info_list(hotplug_context, SourceInfoCallback, (void *)((intptr_t)SDL_TRUE)));

    /* ok, we have a sane list, let's set up hotplug notifications now... */
    hotplug_thread = SDL_CreateThreadInternal(HotplugThread, "PulseHotplug", 256 * 1024, NULL);
}

static int PULSEAUDIO_GetDefaultAudioInfo(char **name, SDL_AudioSpec *spec, int iscapture)
{
    int i;
    int numdevices;

    char *target;
    if (iscapture) {
        if (default_source_name == NULL) {
            return SDL_SetError("PulseAudio could not find a default source");
        }
        target = default_source_name;
    } else {
        if (default_sink_name == NULL) {
            return SDL_SetError("PulseAudio could not find a default sink");
        }
        target = default_sink_name;
    }

    numdevices = SDL_GetNumAudioDevices(iscapture);
    for (i = 0; i < numdevices; i += 1) {
        if (SDL_strcmp(SDL_GetAudioDeviceName(i, iscapture), target) == 0) {
            if (name != NULL) {
                *name = SDL_strdup(target);
            }
            SDL_GetAudioDeviceSpec(i, iscapture, spec);
            return 0;
        }
    }
    return SDL_SetError("Could not find default PulseAudio device");
}

static void PULSEAUDIO_Deinitialize(void)
{
    if (hotplug_thread) {
        PULSEAUDIO_pa_mainloop_quit(hotplug_mainloop, 0);
        SDL_WaitThread(hotplug_thread, NULL);
        hotplug_thread = NULL;
    }

    DisconnectFromPulseServer(hotplug_mainloop, hotplug_context);
    hotplug_mainloop = NULL;
    hotplug_context = NULL;

    if (default_sink_path != NULL) {
        SDL_free(default_sink_path);
        default_sink_path = NULL;
    }
    if (default_source_path != NULL) {
        SDL_free(default_source_path);
        default_source_path = NULL;
    }
    if (default_sink_name != NULL) {
        SDL_free(default_sink_name);
        default_sink_name = NULL;
    }
    if (default_source_name != NULL) {
        SDL_free(default_source_name);
        default_source_name = NULL;
    }

    UnloadPulseAudioLibrary();
}

static SDL_bool PULSEAUDIO_Init(SDL_AudioDriverImpl *impl)
{
    if (LoadPulseAudioLibrary() < 0) {
        return SDL_FALSE;
    }

    if (ConnectToPulseServer(&hotplug_mainloop, &hotplug_context) < 0) {
        UnloadPulseAudioLibrary();
        return SDL_FALSE;
    }

    include_monitors = SDL_GetHintBoolean(SDL_HINT_AUDIO_INCLUDE_MONITORS, SDL_FALSE);

    /* Set the function pointers */
    impl->DetectDevices = PULSEAUDIO_DetectDevices;
    impl->OpenDevice = PULSEAUDIO_OpenDevice;
    impl->PlayDevice = PULSEAUDIO_PlayDevice;
    impl->WaitDevice = PULSEAUDIO_WaitDevice;
    impl->GetDeviceBuf = PULSEAUDIO_GetDeviceBuf;
    impl->CloseDevice = PULSEAUDIO_CloseDevice;
    impl->Deinitialize = PULSEAUDIO_Deinitialize;
    impl->CaptureFromDevice = PULSEAUDIO_CaptureFromDevice;
    impl->FlushCapture = PULSEAUDIO_FlushCapture;
    impl->GetDefaultAudioInfo = PULSEAUDIO_GetDefaultAudioInfo;

    impl->HasCaptureSupport = SDL_TRUE;
    impl->SupportsNonPow2Samples = SDL_TRUE;

    return SDL_TRUE; /* this audio target is available. */
}

AudioBootStrap PULSEAUDIO_bootstrap = {
    "pulseaudio", "PulseAudio", PULSEAUDIO_Init, SDL_FALSE
};

#endif /* SDL_AUDIO_DRIVER_PULSEAUDIO */

/* vi: set ts=4 sw=4 expandtab: */
