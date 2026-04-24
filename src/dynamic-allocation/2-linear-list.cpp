#include <iostream>
#include "../utils/node.h";

using namespace std;

// creates the primary pointer of the list
struct node *list = NULL;
/// creates listSize variable to keep track of the list size
int listSize = 0;


// checks if the list is empty
bool empty() {
    if(list == NULL) return true;
    else return false;
}


// inserts a new element to the list
void insertListPosition(int value, int position) {
    // creates pointers to current node and the newNode to be added
    struct node *current, *newNode;

    // position can't be invalid
    if(position < 0 || position > listSize) {
        cout << "Invalid Position";
        return;
    }

    // assigns newNode pointer a struct node
    newNode = new(struct node);
    // assigns the new struct a value to its data property
    newNode -> data = value;

    if(position == 0) {
        // assigns the pointer of newNode the memory adress of list (which is a pointer)
        newNode -> next = list;
        // updates the pointer list the newNode pointer
        list = newNode;
    } else {
        // assings current to where list is pointing
        current = list;
        // gives current pointer a step forward but does not inserts any elements in the middle of the list
        for(int i = 0; i < position - 1; i++) {
            current = current -> next;
        }
        // assings newNode pointer to where current points
        newNode -> next = current -> next;
        // assigns current pointer to newNode
        current -> next = newNode;
    }

    // increases list size
    listSize++;
}

void insertListValue(int value) {
    struct node *current, *previous, *newNode;

    // creates a new node and assigns It to 'newNode'
    newNode = new(struct node);
    newNode -> data = value;

    // current points to the beggining of the list and goes through the entire list until it finds a value that is over the value parameter
    current = list;

    // while it is not the end of the list AND the value parameter is bigger than the current value
    while(current != NULL && value > current -> data) {
        // previous points to current
        previous = current;

        // current gives a step forward
        current = current -> next;
    }

    if(current == list){
        // newNode points to where list is pointing
        newNode -> next = list;

        // list points to where newNode is pointing
        list -> next = newNode;
    } else {
        // newNode points to current
        newNode -> next = current;

        // previous points to newNode
        previous -> next = newNode;

        // newNode is inserted in the middle of both values
    }

    // increases list size
    listSize++;
}


// removes an element of the list
void removeList(int position) {
    // creates pointers to current node and the lessNode to be removed
    struct node *current, *lessNode;

    // position can't be invalid
    if(position < 0 || position > listSize) {
        cout << "Invalid Position";
        return;
    }

    // two possibilities: delete the first position node or another one
    if(position == 0) {
        // lessNode points to where list points
        lessNode = list;
        // list now points to where itself points
        list = list -> next;
    } else {
        // assings current to where list is pointing
        current = list;
        // gives current pointer a step forward but does not inserts any elements in the middle of the list
        for(int i = 0; i < position - 1; i++) {
            current = current -> next;
        }
        // lessNode points to where current points
        lessNode = current -> next;
        // current points to where lessNode points
        current -> next = lessNode -> next;
    }

    // decreases list size
    listSize--;
    // deletes from the memory address pointed
    delete(lessNode);
}


// prints the list
void printList() {
    // creates a current pointer to point to the current node
    struct node *current;

    // checks if the list is empty
    if(empty()) {
        cout << "List is Empty";
        return;
    }

    // current points to the begining of the list
    current = list;

    cout << "List:\n";

    // while current points to something keep printing
    while(current != NULL) {
        // prints the node element current points to
        cout << current -> data << " ";
        // current makes a step forward
        current = current -> next;
    }

    cout << "\n";
}


// main method for testing and compilation
int main() {
    insertListPosition(5, 0);
    insertListPosition(7, 1);
    insertListPosition(52, 2);
    insertListPosition(3, 3);
    insertListPosition(4, 4);
    removeList(0);
    removeList(3);
    printList();
}