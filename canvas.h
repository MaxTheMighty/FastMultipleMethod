//
// Created by Maxwell Kozlov on 11/25/24.
//

#ifndef CANVAS_H
#define CANVAS_H
#include <string>

#include "body.h"
#include "SDL2/SDL.h"

class Canvas{
    public:
        Canvas();
        void init_window(const char* title, int x, int y, int w, int h);
        void draw_square(int x, int y, int w, int h) const;
        void draw_body(const Body& body) const;
        void show() const;
        void clear() const;
        int poll_events();
        void set_color(int r, int g, int b) const;
        static void TestCanvasClass();
        static void TestDrawCanvas();
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;

};

#endif //CANVAS_H
