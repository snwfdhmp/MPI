// Project MPI [duck managed]
// Class Window (src/classes/Window/Window.class.cpp)
#ifndef WINDOW_CLASS_CPP
#define WINDOW_CLASS_CPP

//Window class methods implementation

#include <stdio.h>
#include "../../SDL2/SDL.h"
#include "Window.class.h"

//class constructor
Window::Window(const char* title, int x, int y, int w, int h, Uint32 flags) {
	window = NULL;
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER);
    window = SDL_CreateWindow("Avalam by Joly and Monga", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if(window == NULL)
    	printf("Erreur à la création de la fenêtre : %s\n", SDL_GetError());
}

int Window::show() {
    int status = SDL_WaitEvent(NULL);
    printf("Window::show : %d\n", status);
    return status;
}

#endif