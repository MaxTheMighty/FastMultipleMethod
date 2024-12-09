//
// Created by Maxwell Kozlov on 12/8/24.
//


#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../octree.h"
#include "../cube.h"
#include <armadillo>



BOOST_AUTO_TEST_CASE(octree_constructor) {
    Cube space(arma::vec3({100.0, 100.0, 100.0}));
    Octree octree(space);
    BOOST_CHECK(octree.root->bodies.size() == 0);
    BOOST_CHECK(octree.root->children.size() == 0);
}


