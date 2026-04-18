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
void insertList(int value, int position) {
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


// main method for testing
int main() {
    insertList(5, 0);
    insertList(7, 1);
    insertList(52, 2);
    insertList(3, 3);
    insertList(4, 4);
    removeList(0);
    removeList(3);
    printList();
}