#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

// Node is the conjunction of memory adresses that
// indicate a value followed by a pointer that points
// to another node. The last node's pointer is NULL.

struct node {
    int data;
    struct node *next;
};

#endif