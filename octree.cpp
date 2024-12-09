//
// Created by Maxwell Kozlov on 11/30/24.
//

#include "octree.h"
#include "cube.h"
Octree::Octree(Cube const& dimensions) {
    root = std::make_unique<Node>(dimensions);
}


void Octree::Insert(Body body) {

}
