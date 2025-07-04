#pragma once
/* IWYU pragma: always_keep */

#ifndef CIMGUI_INCLUDED
#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "../lib/cimgui/cimgui.h" /* IWYU pragma: export */
#endif // ifndef CIMGUI_INCLUDED

#ifndef CIMGUI_API
#define CIMGUI_API __attribute__((__visibility__("default")))
#endif

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;
typedef struct ImDrawData ImDrawData;

CIMGUI_API bool ImguiBackendSDL_Init(SDL_Window*,SDL_Renderer*);
CIMGUI_API void ImguiBackendSDL_Shutdown(void);
CIMGUI_API void ImguiBackendSDL_NewFrame(void);
CIMGUI_API bool ImguiBackendSDL_ProcessEvent(const SDL_Event*);
CIMGUI_API void ImguiBackendSDL_RenderDrawData(struct ImDrawData *draw_data);
