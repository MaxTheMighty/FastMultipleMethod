#include "canvas.h"
#include "body.h"
#include <armadillo>

int main() {
    int poll_status = 1;
    int r = 0;
    Body body1 = Body(arma::vec3({100.0,100.0,100.0}),100.0);
    Canvas canvas;
    canvas.init_window("N-body simulation",100,100,500,500);
    canvas.set_color(255,0,0);
    canvas.draw_body(body1);

    canvas.show();
    // main loop
    while (poll_status != -1) {
        poll_status = canvas.poll_events();
    }

    return 0;
}

