#include <iostream>
#include "../utils/node.h";

using namespace std;

// The first node is firstly initiated as NULL.
// Its the node that indicates the start of the data structure.

struct node *pile = NULL;

bool empty () {
    // if (pile.next == NULL) or if (pile == NULL)
    if ((pile -> next) == NULL) return true;
    else return false;
}

void push (int value) {
    // Temporary node created especifically for
    // the new node creation.
    struct node *newNode;

    // "new" in C++ can be used to create a dynamic variable
    newNode = new (struct node);

    // "->" indicates the newNode memory address. With this
    // we can modify it's values.
    newNode -> data = value;

    // Makes the pointer of the newNode point to where pile was pointing
    // and "pile" struct's pointer point to the newNode memory address.
    newNode -> next = pile;
    pile = newNode;

    cout << "Element Inserted!";
}

void pop () {
    // Creates a node especifically for deletion.
    struct node *lessNode;

    // Empty check.
    if (empty()) {
        cout << "Pile is Empty!";
        return;
    }

    // lessNode points to pile node.
    lessNode = pile;

    // pile node points to the next node
    pile = pile -> next;

    // deletes the element pointed by lessNode
    delete(lessNode);

    cout << "Element Deleted!";
}

void top () {
    if (empty()) {
        cout << "Pile is Empty!";
        return;
    }

    cout << "In top is the element" << (pile -> data);
}

void print () {

}

int main () {

}