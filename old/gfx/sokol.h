#pragma once

#ifndef SOKOL_GFX_INCLUDED

#ifdef EMSCRIPTEN
#   define SOKOL_GLES3
#else
#   define SOKOL_GLCORE33
#endif // ifdef EMSCRIPTEN

#include <sokol_gfx.h>
#include <sokol_gp.h>
#include <util/sokol_gl.h>
#include <util/sokol_gfx_imgui.h>
#include "gfx/sokol_gfx_ext.h"

#endif // ifdef SOKOL_GFX_INCLUDED

#define GL_SILENCE_DEPRECATION
#ifdef __APPLE__
	#include <OpenGL/gl3.h>
#else
	#include <GL/gl.h> 
	#include <GL/glcorearb.h>
#endif

#define SOKOL_IMGUI_NO_SOKOL_APP
#include <util/sokol_imgui.h>

void sgp_draw_thick_line(
    float ax,
    float ay,
    float bx,
    float by,
    float thickness);

typedef struct aabbf aabbf_t;
void sgp_draw_filled_aabbf(aabbf_t aabb);
void sgp_draw_aabbf(aabbf_t aabb, float thickness);
