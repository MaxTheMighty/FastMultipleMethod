//
// Created by Maxwell Kozlov on 11/30/24.
//
#pragma once
#include <armadillo>
#ifndef BODY_H
#define BODY_H



class Body {
    public:
        arma::vec3 position;
        arma::vec3 velocity;
        arma::vec3 acceleration;
        float mass;

        Body(const arma::vec3& position, const float mass);

};



#endif //BODY_H
