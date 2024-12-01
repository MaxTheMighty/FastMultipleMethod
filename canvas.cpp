//
// Created by Maxwell Kozlov on 11/25/24.
//

#include "canvas.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
Canvas::Canvas(){

}

void Canvas::init_window(const char* title, int x, int y, int w, int h) {
    SDL_Init(SDL_INIT_EVERYTHING);
    this->window = SDL_CreateWindow(title,x,y,w,h,SDL_WINDOW_OPENGL);
    this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
    this->clear();
}

void Canvas::set_color(int r, int g, int b) const {
    SDL_SetRenderDrawColor(this->renderer, r, g, b, SDL_ALPHA_OPAQUE);
}

void Canvas::draw_square(int x, int y, int w, int h) const {
    const SDL_Rect rect = {x, y, w, h};
    SDL_RenderDrawRect(this->renderer, &rect);
}

void Canvas::draw_body(const Body &body) const {
    SDL_RenderDrawPoint(this->renderer,static_cast<int>(body.position[0]),static_cast<int>(body.position[1]));
}


void Canvas::show() const {
    SDL_RenderPresent(this->renderer);
}

void Canvas::clear() const {
    this->set_color(0,0,0);
    SDL_RenderClear(this->renderer);
}

int Canvas::poll_events() {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            SDL_DestroyRenderer(this->renderer);
            SDL_DestroyWindow(this->window);
            SDL_Quit();
            return -1;
        }
    }
    return 1;
}





void Canvas::TestCanvasClass() {
    std::cout << "Hello from the canvas class!" << std::endl;
}

void Canvas::TestDrawCanvas() {
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
}


