#include <iostream>
#include <SDL2/SDL.h>

int main() {

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("N-body simulation",100,100,100,100, SDL_WINDOW_SHOWN);
    std::cout << SDL_GetError() << std::endl;;
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);


    SDL_SetRenderDrawColor(renderer, 0,255,0,255);

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);

    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }


    return 0;
}

