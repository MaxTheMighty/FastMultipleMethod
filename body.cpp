//
// Created by Maxwell Kozlov on 11/30/24.
//

#include "Body.h"

Body::Body(const arma::vec3& position, const float mass)  {
    this->position = position;
    this->velocity = {0,0,0};
    this->acceleration = {0,0,0};
    this->mass = mass;
}
