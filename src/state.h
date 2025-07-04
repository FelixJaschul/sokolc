#pragma once
#include "sdl2.h"

typedef struct State {
	SDL_Window *window;
	SDL_Renderer *renderer;
	bool done;
}state_t;

state_t state;