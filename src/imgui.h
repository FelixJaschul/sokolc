#pragma once

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "../lib/cimgui/cimgui.h" /* IWYU pragma: export */
#define CIMGUI_INCLUDED

#include "ext/imgui/cimgui.h"

typedef union SDL_Event SDL_Event;
bool imgui_impl_process_sdl_event(const SDL_Event *event);
