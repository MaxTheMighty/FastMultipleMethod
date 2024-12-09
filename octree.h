//
// Created by Maxwell Kozlov on 11/30/24.
//

#ifndef OCTREE_H
#define OCTREE_H
#include "body.h"
#include "cube.h"
#include "body.h"

class Octree {

    struct Node {
        Cube region;
        std::vector<Body> bodies; //see if we can use a fixed array
        std::vector<std::unique_ptr<Node>> children; //if we are using pointers, do we play with allocations?

        Node(const Cube &region) : region(region) {}
    };


  public:
    std::unique_ptr<Node> root;
    explicit Octree(Cube const& dimensions);
    static void Insert(Body body);
};



#endif //OCTREE_H
