//
// Created by Maxwell Kozlov on 12/1/24.
//

#include "cube.h"

Cube::Cube(arma::vec3 left_top_back_corner, arma::vec3 right_bottom_front_corner) {
    this->left_top_back_corner = left_top_back_corner;
    this->right_bottom_front_corner = right_bottom_front_corner;
}

bool Cube::point_inside(arma::vec3 position) {
    return position[0] > this->left_top_back_corner[0] && position[0] < this->right_bottom_front_corner[0] &&
           position[1] > this->left_top_back_corner[1] && position[1] < this->right_bottom_front_corner[1] &&
           position[2] > this->left_top_back_corner[2] && position[2] < this->right_bottom_front_corner[2];
}
