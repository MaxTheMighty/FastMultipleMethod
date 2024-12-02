//
// Created by Maxwell Kozlov on 11/30/24.
//

#ifndef OCTREE_H
#define OCTREE_H
#include "body.h"
//
// Their idea for a base Node class is clever so I am taking it
// https://github.com/mwarning/SimpleOctree/blob/master/src/Octree.hpp
//



class Node
{};

class Branch : Node{

  Node *children[8];
  Branch();
};

class Leaf : Node{
  public:
    std::vector<Body> bodies;
    Leaf(){}
    void insert(Body body);
};


class Octree {
  public:
    Octree();

    Node *children[8];

};



#endif //OCTREE_H
