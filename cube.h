//
// Created by Maxwell Kozlov on 12/1/24.
//

#ifndef CUBE_H
#define CUBE_H
#include <armadillo>

enum SUBCUBE {
    A, B, C, D, E, F, G, H
  };

class Cube {
    public:
        arma::vec3 left_top_back_corner;
        arma::vec3 right_bottom_front_corner;

        Cube(arma::vec3 left_top_back_corner, arma::vec3 right_bottom_front_corner);
        bool point_inside(arma::vec3 position);
};






#endif //CUBE_H
