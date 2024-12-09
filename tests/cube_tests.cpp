//
// Created by Maxwell Kozlov on 12/1/24.
//

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../cube.h"
#include <armadillo>
#pragma once


BOOST_AUTO_TEST_CASE(test_cube_constructor) {
    Cube cube = Cube(arma::vec3({0,0,0}), arma::vec3({100,100,100}));

    BOOST_CHECK_EQUAL(cube.point_inside(arma::vec3({50,50,50})), true);
    BOOST_CHECK_EQUAL(cube.point_inside(arma::vec3({150,50,50})), false);
    BOOST_CHECK_EQUAL(cube.point_inside(arma::vec3({101,50,50})), false);

}

BOOST_AUTO_TEST_CASE(test_cube_single_corner_constructor) {
    Cube cube2 = Cube(arma::vec3({500.0,500.0,500.0}));
    BOOST_CHECK_EQUAL(cube2.left_top_back_corner[0], 0.0);
    BOOST_CHECK_EQUAL(cube2.left_top_back_corner[1], 0.0);
    BOOST_CHECK_EQUAL(cube2.left_top_back_corner[2], 0.0);

    // BOOST_CHECK_EQUAL(0,1);
}


