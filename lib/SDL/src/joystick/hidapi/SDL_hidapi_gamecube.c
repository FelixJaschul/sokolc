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
#include "../../SDL_internal.h"

#ifdef SDL_JOYSTICK_HIDAPI

#include "SDL_events.h"
#include "SDL_timer.h"
#include "SDL_haptic.h"
#include "SDL_joystick.h"
#include "SDL_gamecontroller.h"
#include "../../SDL_hints_c.h"
#include "../SDL_sysjoystick.h"
#include "SDL_hidapijoystick_c.h"
#include "SDL_hidapi_rumble.h"
#include "../../hidapi/SDL_hidapi_c.h"

#ifdef SDL_JOYSTICK_HIDAPI_GAMECUBE

/* Define this if you want to log all packets from the controller */
/*#define DEBUG_GAMECUBE_PROTOCOL*/

#define MAX_CONTROLLERS 4

typedef struct
{
    SDL_bool pc_mode;
    SDL_JoystickID joysticks[MAX_CONTROLLERS];
    Uint8 wireless[MAX_CONTROLLERS];
    Uint8 min_axis[MAX_CONTROLLERS * SDL_CONTROLLER_AXIS_MAX];
    Uint8 max_axis[MAX_CONTROLLERS * SDL_CONTROLLER_AXIS_MAX];
    Uint8 rumbleAllowed[MAX_CONTROLLERS];
    Uint8 rumble[1 + MAX_CONTROLLERS];
    /* Without this variable, hid_write starts to lag a TON */
    SDL_bool rumbleUpdate;
    SDL_bool m_bUseButtonLabels;
    SDL_bool useRumbleBrake;
} SDL_DriverGameCube_Context;

static void HIDAPI_DriverGameCube_RegisterHints(SDL_HintCallback callback, void *userdata)
{
    SDL_AddHintCallback(SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE, callback, userdata);
}

static void HIDAPI_DriverGameCube_UnregisterHints(SDL_HintCallback callback, void *userdata)
{
    SDL_DelHintCallback(SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE, callback, userdata);
}

static SDL_bool HIDAPI_DriverGameCube_IsEnabled(void)
{
    return SDL_GetHintBoolean(SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE,
                              SDL_GetHintBoolean(SDL_HINT_JOYSTICK_HIDAPI,
                                                 SDL_HIDAPI_DEFAULT));
}

static SDL_bool HIDAPI_DriverGameCube_IsSupportedDevice(SDL_HIDAPI_Device *device, const char *name, SDL_GameControllerType type, Uint16 vendor_id, Uint16 product_id, Uint16 version, int interface_number, int interface_class, int interface_subclass, int interface_protocol)
{
    if (vendor_id == USB_VENDOR_NINTENDO && product_id == USB_PRODUCT_NINTENDO_GAMECUBE_ADAPTER) {
        /* Nintendo Co., Ltd.  Wii U GameCube Controller Adapter */
        return SDL_TRUE;
    }
    if (vendor_id == USB_VENDOR_DRAGONRISE && product_id == USB_PRODUCT_EVORETRO_GAMECUBE_ADAPTER) {
        /* EVORETRO GameCube Controller Adapter */
        return SDL_TRUE;
    }
    return SDL_FALSE;
}

static void ResetAxisRange(SDL_DriverGameCube_Context *ctx, int joystick_index)
{
    SDL_memset(&ctx->min_axis[joystick_index * SDL_CONTROLLER_AXIS_MAX], 128 - 88, SDL_CONTROLLER_AXIS_MAX);
    SDL_memset(&ctx->max_axis[joystick_index * SDL_CONTROLLER_AXIS_MAX], 128 + 88, SDL_CONTROLLER_AXIS_MAX);

    /* Trigger axes may have a higher resting value */
    ctx->min_axis[joystick_index * SDL_CONTROLLER_AXIS_MAX + SDL_CONTROLLER_AXIS_TRIGGERLEFT] = 40;
    ctx->min_axis[joystick_index * SDL_CONTROLLER_AXIS_MAX + SDL_CONTROLLER_AXIS_TRIGGERRIGHT] = 40;
}

static void SDLCALL SDL_GameControllerButtonReportingHintChanged(void *userdata, const char *name, const char *oldValue, const char *hint)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)userdata;
    ctx->m_bUseButtonLabels = SDL_GetStringBoolean(hint, SDL_TRUE);
}

static void SDLCALL SDL_JoystickGameCubeRumbleBrakeHintChanged(void *userdata, const char *name, const char *oldValue, const char *hint)
{
    if (hint) {
        SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)userdata;
        ctx->useRumbleBrake = SDL_GetStringBoolean(hint, SDL_FALSE);
    }
}

static Uint8 RemapButton(SDL_DriverGameCube_Context *ctx, Uint8 button)
{
    if (!ctx->m_bUseButtonLabels) {
        /* Use button positions */
        switch (button) {
        case SDL_CONTROLLER_BUTTON_B:
            return SDL_CONTROLLER_BUTTON_X;
        case SDL_CONTROLLER_BUTTON_X:
            return SDL_CONTROLLER_BUTTON_B;
        default:
            break;
        }
    }
    return button;
}

static SDL_bool HIDAPI_DriverGameCube_InitDevice(SDL_HIDAPI_Device *device)
{
    SDL_DriverGameCube_Context *ctx;
    Uint8 packet[37];
    Uint8 *curSlot;
    Uint8 i;
    int size;
    Uint8 initMagic = 0x13;
    Uint8 rumbleMagic = 0x11;

#ifdef HAVE_ENABLE_GAMECUBE_ADAPTORS
    SDL_EnableGameCubeAdaptors();
#endif

    ctx = (SDL_DriverGameCube_Context *)SDL_calloc(1, sizeof(*ctx));
    if (ctx == NULL) {
        SDL_OutOfMemory();
        return SDL_FALSE;
    }
    device->context = ctx;

    ctx->joysticks[0] = -1;
    ctx->joysticks[1] = -1;
    ctx->joysticks[2] = -1;
    ctx->joysticks[3] = -1;
    ctx->rumble[0] = rumbleMagic;
    ctx->useRumbleBrake = SDL_FALSE;

    if (device->vendor_id != USB_VENDOR_NINTENDO) {
        ctx->pc_mode = SDL_TRUE;
    }

    if (ctx->pc_mode) {
        for (i = 0; i < MAX_CONTROLLERS; ++i) {
            ResetAxisRange(ctx, i);
            HIDAPI_JoystickConnected(device, &ctx->joysticks[i]);
        }
    } else {
        /* This is all that's needed to initialize the device. Really! */
        if (SDL_hid_write(device->dev, &initMagic, sizeof(initMagic)) != sizeof(initMagic)) {
            SDL_LogDebug(SDL_LOG_CATEGORY_INPUT,
                         "HIDAPI_DriverGameCube_InitDevice(): Couldn't initialize WUP-028");
            return SDL_FALSE;
        }

        /* Wait for the adapter to initialize */
        SDL_Delay(10);

        /* Add all the applicable joysticks */
        while ((size = SDL_hid_read_timeout(device->dev, packet, sizeof(packet), 0)) > 0) {
#ifdef DEBUG_GAMECUBE_PROTOCOL
            HIDAPI_DumpPacket("Nintendo GameCube packet: size = %d", packet, size);
#endif
            if (size < 37 || packet[0] != 0x21) {
                continue; /* Nothing to do yet...? */
            }

            /* Go through all 4 slots */
            curSlot = packet + 1;
            for (i = 0; i < MAX_CONTROLLERS; i += 1, curSlot += 9) {
                ctx->wireless[i] = (curSlot[0] & 0x20) != 0;

                /* Only allow rumble if the adapter's second USB cable is connected */
                ctx->rumbleAllowed[i] = (curSlot[0] & 0x04) != 0 && !ctx->wireless[i];

                if (curSlot[0] & 0x30) { /* 0x10 - Wired, 0x20 - Wireless */
                    if (ctx->joysticks[i] == -1) {
                        ResetAxisRange(ctx, i);
                        HIDAPI_JoystickConnected(device, &ctx->joysticks[i]);
                    }
                } else {
                    if (ctx->joysticks[i] != -1) {
                        HIDAPI_JoystickDisconnected(device, ctx->joysticks[i]);
                        ctx->joysticks[i] = -1;
                    }
                    continue;
                }
            }
        }
    }

    SDL_AddHintCallback(SDL_HINT_JOYSTICK_GAMECUBE_RUMBLE_BRAKE,
                        SDL_JoystickGameCubeRumbleBrakeHintChanged, ctx);
    SDL_AddHintCallback(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS,
                        SDL_GameControllerButtonReportingHintChanged, ctx);

    HIDAPI_SetDeviceName(device, "Nintendo GameCube Controller");

    return SDL_TRUE;
}

static int HIDAPI_DriverGameCube_GetDevicePlayerIndex(SDL_HIDAPI_Device *device, SDL_JoystickID instance_id)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;
    Uint8 i;

    for (i = 0; i < 4; ++i) {
        if (instance_id == ctx->joysticks[i]) {
            return i;
        }
    }
    return -1;
}

static void HIDAPI_DriverGameCube_SetDevicePlayerIndex(SDL_HIDAPI_Device *device, SDL_JoystickID instance_id, int player_index)
{
}

static void HIDAPI_DriverGameCube_HandleJoystickPacket(SDL_HIDAPI_Device *device, SDL_DriverGameCube_Context *ctx, const Uint8 *packet, int size)
{
    SDL_Joystick *joystick;
    Uint8 i, v;
    Sint16 axis_value;

    if (size != 10) {
        return; /* How do we handle this packet? */
    }

    i = packet[0] - 1;
    if (i >= MAX_CONTROLLERS) {
        return; /* How do we handle this packet? */
    }

    joystick = SDL_JoystickFromInstanceID(ctx->joysticks[i]);
    if (joystick == NULL) {
        /* Hasn't been opened yet, skip */
        return;
    }

#define READ_BUTTON(off, flag, button) \
    SDL_PrivateJoystickButton(         \
        joystick,                      \
        RemapButton(ctx, button),      \
        (packet[off] & flag) ? SDL_PRESSED : SDL_RELEASED);
    READ_BUTTON(1, 0x02, 0) /* A */
    READ_BUTTON(1, 0x04, 1) /* B */
    READ_BUTTON(1, 0x01, 2) /* X */
    READ_BUTTON(1, 0x08, 3) /* Y */
    READ_BUTTON(2, 0x80, 4) /* DPAD_LEFT */
    READ_BUTTON(2, 0x20, 5) /* DPAD_RIGHT */
    READ_BUTTON(2, 0x40, 6) /* DPAD_DOWN */
    READ_BUTTON(2, 0x10, 7) /* DPAD_UP */
    READ_BUTTON(2, 0x02, 8) /* START */
    READ_BUTTON(1, 0x80, 9) /* RIGHTSHOULDER */
    /* These two buttons are for the bottoms of the analog triggers.
     * More than likely, you're going to want to read the axes instead!
     * -flibit
     */
    READ_BUTTON(1, 0x20, 10) /* TRIGGERRIGHT */
    READ_BUTTON(1, 0x10, 11) /* TRIGGERLEFT */
#undef READ_BUTTON

#define READ_AXIS(off, axis, invert)                                                                                                                                               \
    v = invert ? (0xff - packet[off]) : packet[off];                                                                                                                               \
    if (v < ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis])                                                                                                                     \
        ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis] = v;                                                                                                                     \
    if (v > ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis])                                                                                                                     \
        ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis] = v;                                                                                                                     \
    axis_value = (Sint16)HIDAPI_RemapVal(v, ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis], ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis], SDL_MIN_SINT16, SDL_MAX_SINT16); \
    SDL_PrivateJoystickAxis(                                                                                                                                                       \
        joystick,                                                                                                                                                                  \
        axis, axis_value);
    READ_AXIS(3, SDL_CONTROLLER_AXIS_LEFTX, 0)
    READ_AXIS(4, SDL_CONTROLLER_AXIS_LEFTY, 0)
    READ_AXIS(6, SDL_CONTROLLER_AXIS_RIGHTX, 1)
    READ_AXIS(5, SDL_CONTROLLER_AXIS_RIGHTY, 1)
    READ_AXIS(7, SDL_CONTROLLER_AXIS_TRIGGERLEFT, 0)
    READ_AXIS(8, SDL_CONTROLLER_AXIS_TRIGGERRIGHT, 0)
#undef READ_AXIS
}

static void HIDAPI_DriverGameCube_HandleNintendoPacket(SDL_HIDAPI_Device *device, SDL_DriverGameCube_Context *ctx, Uint8 *packet, int size)
{
    SDL_Joystick *joystick;
    Uint8 *curSlot;
    Uint8 i;
    Sint16 axis_value;

    if (size < 37 || packet[0] != 0x21) {
        return; /* Nothing to do right now...? */
    }

    /* Go through all 4 slots */
    curSlot = packet + 1;
    for (i = 0; i < MAX_CONTROLLERS; i += 1, curSlot += 9) {
        ctx->wireless[i] = (curSlot[0] & 0x20) != 0;

        /* Only allow rumble if the adapter's second USB cable is connected */
        ctx->rumbleAllowed[i] = (curSlot[0] & 0x04) != 0 && !ctx->wireless[i];

        if (curSlot[0] & 0x30) { /* 0x10 - Wired, 0x20 - Wireless */
            if (ctx->joysticks[i] == -1) {
                ResetAxisRange(ctx, i);
                HIDAPI_JoystickConnected(device, &ctx->joysticks[i]);
            }
            joystick = SDL_JoystickFromInstanceID(ctx->joysticks[i]);

            /* Hasn't been opened yet, skip */
            if (joystick == NULL) {
                continue;
            }
        } else {
            if (ctx->joysticks[i] != -1) {
                HIDAPI_JoystickDisconnected(device, ctx->joysticks[i]);
                ctx->joysticks[i] = -1;
            }
            continue;
        }

#define READ_BUTTON(off, flag, button) \
    SDL_PrivateJoystickButton(         \
        joystick,                      \
        RemapButton(ctx, button),      \
        (curSlot[off] & flag) ? SDL_PRESSED : SDL_RELEASED);
        READ_BUTTON(1, 0x01, 0) /* A */
        READ_BUTTON(1, 0x04, 1) /* B */
        READ_BUTTON(1, 0x02, 2) /* X */
        READ_BUTTON(1, 0x08, 3) /* Y */
        READ_BUTTON(1, 0x10, 4) /* DPAD_LEFT */
        READ_BUTTON(1, 0x20, 5) /* DPAD_RIGHT */
        READ_BUTTON(1, 0x40, 6) /* DPAD_DOWN */
        READ_BUTTON(1, 0x80, 7) /* DPAD_UP */
        READ_BUTTON(2, 0x01, 8) /* START */
        READ_BUTTON(2, 0x02, 9) /* RIGHTSHOULDER */
        /* These two buttons are for the bottoms of the analog triggers.
         * More than likely, you're going to want to read the axes instead!
         * -flibit
         */
        READ_BUTTON(2, 0x04, 10) /* TRIGGERRIGHT */
        READ_BUTTON(2, 0x08, 11) /* TRIGGERLEFT */
#undef READ_BUTTON

#define READ_AXIS(off, axis)                                                                                                                                                                  \
    if (curSlot[off] < ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis])                                                                                                                     \
        ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis] = curSlot[off];                                                                                                                     \
    if (curSlot[off] > ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis])                                                                                                                     \
        ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis] = curSlot[off];                                                                                                                     \
    axis_value = (Sint16)HIDAPI_RemapVal(curSlot[off], ctx->min_axis[i * SDL_CONTROLLER_AXIS_MAX + axis], ctx->max_axis[i * SDL_CONTROLLER_AXIS_MAX + axis], SDL_MIN_SINT16, SDL_MAX_SINT16); \
    SDL_PrivateJoystickAxis(                                                                                                                                                                  \
        joystick,                                                                                                                                                                             \
        axis, axis_value);
        READ_AXIS(3, SDL_CONTROLLER_AXIS_LEFTX)
        READ_AXIS(4, SDL_CONTROLLER_AXIS_LEFTY)
        READ_AXIS(5, SDL_CONTROLLER_AXIS_RIGHTX)
        READ_AXIS(6, SDL_CONTROLLER_AXIS_RIGHTY)
        READ_AXIS(7, SDL_CONTROLLER_AXIS_TRIGGERLEFT)
        READ_AXIS(8, SDL_CONTROLLER_AXIS_TRIGGERRIGHT)
#undef READ_AXIS
    }
}

static SDL_bool HIDAPI_DriverGameCube_UpdateDevice(SDL_HIDAPI_Device *device)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;
    Uint8 packet[USB_PACKET_LENGTH];
    int size;

    /* Read input packet */
    while ((size = SDL_hid_read_timeout(device->dev, packet, sizeof(packet), 0)) > 0) {
#ifdef DEBUG_GAMECUBE_PROTOCOL
        // HIDAPI_DumpPacket("Nintendo GameCube packet: size = %d", packet, size);
#endif
        if (ctx->pc_mode) {
            HIDAPI_DriverGameCube_HandleJoystickPacket(device, ctx, packet, size);
        } else {
            HIDAPI_DriverGameCube_HandleNintendoPacket(device, ctx, packet, size);
        }
    }

    /* Write rumble packet */
    if (ctx->rumbleUpdate) {
        SDL_HIDAPI_SendRumble(device, ctx->rumble, sizeof(ctx->rumble));
        ctx->rumbleUpdate = SDL_FALSE;
    }

    /* If we got here, nothing bad happened! */
    return SDL_TRUE;
}

static SDL_bool HIDAPI_DriverGameCube_OpenJoystick(SDL_HIDAPI_Device *device, SDL_Joystick *joystick)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;
    Uint8 i;

    SDL_AssertJoysticksLocked();

    for (i = 0; i < MAX_CONTROLLERS; i += 1) {
        if (joystick->instance_id == ctx->joysticks[i]) {
            joystick->nbuttons = 12;
            joystick->naxes = SDL_CONTROLLER_AXIS_MAX;
            joystick->epowerlevel = ctx->wireless[i] ? SDL_JOYSTICK_POWER_UNKNOWN : SDL_JOYSTICK_POWER_WIRED;
            return SDL_TRUE;
        }
    }
    return SDL_FALSE; /* Should never get here! */
}

static int HIDAPI_DriverGameCube_RumbleJoystick(SDL_HIDAPI_Device *device, SDL_Joystick *joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;
    Uint8 i, val;

    SDL_AssertJoysticksLocked();

    if (ctx->pc_mode) {
        return SDL_Unsupported();
    }

    for (i = 0; i < MAX_CONTROLLERS; i += 1) {
        if (joystick->instance_id == ctx->joysticks[i]) {
            if (ctx->wireless[i]) {
                return SDL_SetError("Nintendo GameCube WaveBird controllers do not support rumble");
            }
            if (!ctx->rumbleAllowed[i]) {
                return SDL_SetError("Second USB cable for WUP-028 not connected");
            }
            if (ctx->useRumbleBrake) {
                if (low_frequency_rumble == 0 && high_frequency_rumble > 0) {
                    val = 0; /* if only low is 0 we want to do a regular stop*/
                } else if (low_frequency_rumble == 0 && high_frequency_rumble == 0) {
                    val = 2; /* if both frequencies are 0 we want to do a hard stop */
                } else {
                    val = 1; /* normal rumble */
                }
            } else {
                val = (low_frequency_rumble > 0 || high_frequency_rumble > 0);
            }
            if (val != ctx->rumble[i + 1]) {
                ctx->rumble[i + 1] = val;
                ctx->rumbleUpdate = SDL_TRUE;
            }
            return 0;
        }
    }

    /* Should never get here! */
    return SDL_SetError("Couldn't find joystick");
}

static int HIDAPI_DriverGameCube_RumbleJoystickTriggers(SDL_HIDAPI_Device *device, SDL_Joystick *joystick, Uint16 left_rumble, Uint16 right_rumble)
{
    return SDL_Unsupported();
}

static Uint32 HIDAPI_DriverGameCube_GetJoystickCapabilities(SDL_HIDAPI_Device *device, SDL_Joystick *joystick)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;
    Uint32 result = 0;

    SDL_AssertJoysticksLocked();

    if (!ctx->pc_mode) {
        Uint8 i;

        for (i = 0; i < MAX_CONTROLLERS; i += 1) {
            if (joystick->instance_id == ctx->joysticks[i]) {
                if (!ctx->wireless[i] && ctx->rumbleAllowed[i]) {
                    result |= SDL_JOYCAP_RUMBLE;
                    break;
                }
            }
        }
    }

    return result;
}

static int HIDAPI_DriverGameCube_SetJoystickLED(SDL_HIDAPI_Device *device, SDL_Joystick *joystick, Uint8 red, Uint8 green, Uint8 blue)
{
    return SDL_Unsupported();
}

static int HIDAPI_DriverGameCube_SendJoystickEffect(SDL_HIDAPI_Device *device, SDL_Joystick *joystick, const void *data, int size)
{
    return SDL_Unsupported();
}

static int HIDAPI_DriverGameCube_SetJoystickSensorsEnabled(SDL_HIDAPI_Device *device, SDL_Joystick *joystick, SDL_bool enabled)
{
    return SDL_Unsupported();
}

static void HIDAPI_DriverGameCube_CloseJoystick(SDL_HIDAPI_Device *device, SDL_Joystick *joystick)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;

    /* Stop rumble activity */
    if (ctx->rumbleUpdate) {
        SDL_HIDAPI_SendRumble(device, ctx->rumble, sizeof(ctx->rumble));
        ctx->rumbleUpdate = SDL_FALSE;
    }
}

static void HIDAPI_DriverGameCube_FreeDevice(SDL_HIDAPI_Device *device)
{
    SDL_DriverGameCube_Context *ctx = (SDL_DriverGameCube_Context *)device->context;

    SDL_DelHintCallback(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS,
                        SDL_GameControllerButtonReportingHintChanged, ctx);
    SDL_DelHintCallback(SDL_HINT_JOYSTICK_GAMECUBE_RUMBLE_BRAKE,
                        SDL_JoystickGameCubeRumbleBrakeHintChanged, ctx);
}

SDL_HIDAPI_DeviceDriver SDL_HIDAPI_DriverGameCube = {
    SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE,
    SDL_TRUE,
    HIDAPI_DriverGameCube_RegisterHints,
    HIDAPI_DriverGameCube_UnregisterHints,
    HIDAPI_DriverGameCube_IsEnabled,
    HIDAPI_DriverGameCube_IsSupportedDevice,
    HIDAPI_DriverGameCube_InitDevice,
    HIDAPI_DriverGameCube_GetDevicePlayerIndex,
    HIDAPI_DriverGameCube_SetDevicePlayerIndex,
    HIDAPI_DriverGameCube_UpdateDevice,
    HIDAPI_DriverGameCube_OpenJoystick,
    HIDAPI_DriverGameCube_RumbleJoystick,
    HIDAPI_DriverGameCube_RumbleJoystickTriggers,
    HIDAPI_DriverGameCube_GetJoystickCapabilities,
    HIDAPI_DriverGameCube_SetJoystickLED,
    HIDAPI_DriverGameCube_SendJoystickEffect,
    HIDAPI_DriverGameCube_SetJoystickSensorsEnabled,
    HIDAPI_DriverGameCube_CloseJoystick,
    HIDAPI_DriverGameCube_FreeDevice,
};

#endif /* SDL_JOYSTICK_HIDAPI_GAMECUBE */

#endif /* SDL_JOYSTICK_HIDAPI */

/* vi: set ts=4 sw=4 expandtab: */
