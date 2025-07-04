#include "imgui.h"
#include "sdl2.h"
#include "state.h"

void init() {
    state.done = false;
    SDL_Init(SDL_INIT_VIDEO);

    state.window = SDL_CreateWindow(
        "DEMO",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        1280,
        720,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE
    );

    state.renderer = SDL_CreateRenderer(state.window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    igCreateContext(NULL);

    ImguiBackendSDL_Init(state.window, state.renderer);
}

void deinit() {
    ImguiBackendSDL_Shutdown();
    igDestroyContext(NULL);
    SDL_DestroyRenderer(state.renderer);
    SDL_DestroyWindow(state.window);
    SDL_Quit();
}

void events() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ImguiBackendSDL_ProcessEvent(&event);
        if (event.type == SDL_QUIT) state.done = true;
    }
}

void frame() {
    ImguiBackendSDL_NewFrame();
    igNewFrame();
    igShowDemoWindow(NULL);
    igRender();

    SDL_SetRenderDrawColor(state.renderer, 114, 144, 154, 255);
    SDL_RenderClear(state.renderer);
    ImguiBackendSDL_RenderDrawData(igGetDrawData());
    SDL_RenderPresent(state.renderer);
}

int main() {
    init();
    while (!state.done) {
        events();
        frame();
    }
    deinit();

    return 0;
}
