/*
    ---- Linear Lists ----

    Implement two linear lists: one implemented with vector and the other using dynamic allocation. Consider that lists do not have repeated numbers. The two lists must have the following functions: 

    void insertList(int value): inserts a value into a linear list keeping it ordered.

    void retrieveList(int position): prints the value inserted at a given position.
    The program must check whether the position is valid.

    void removeList(int position): removes an element from a position in the list. THE
    program must check if the position is valid.

    void fetchList(int value): informs at what position in the
    list is given value. If the value is not in the list, the program must
    inform that the value was not found.

    void print(): prints the contents of the list.
    If the list is empty, print the message “List empty”.

    All functions must have exactly the same name as the functions above, i.e. the
    job insertion function must be called insertLista, it must receive as a parameter ]
    an integer variable and must not return any value (void).
    
    All operations performed must generate a
    message confirming whether the operation was carried out or whether a problem occurred.
     
    It is not necessary to include any menu.
*/

// Pointer List

#include <iostream>
#include "../utils/node.h"
using namespace std;

struct node *list = NULL;
int listSize = 0;

bool isEmpty() {
    if(list == NULL) return true;
    else return false;
}

bool isValidPosition(int position) {
    if(position >= 0 && position < listSize) return true;
    else return false;
}

bool valueExists(int value) {
    struct node *current;

    current = list;

    while (current != NULL) {
        if((current -> data) == value) {
            return true;
        } 

        current = current -> next;
    }

    return false;
}

void insertList(int value) {
    if(valueExists(value)) {
        cout << "Element already exists in the list!\n";
        return;
    }

    struct node *current = list;
    struct node *previous = NULL;
    struct node *newNode = new struct node;

    newNode -> data = value;
    newNode -> next = NULL;

    while(current != NULL && value > current -> data) {
        previous = current;
        current = current -> next;
    }

    if(previous == NULL) {
        newNode -> next = list;
        list = newNode;
    } else {
        newNode -> next = current;
        previous -> next = newNode;
    }

    listSize++;
    cout << "Element inserted!\n";
}

void retrieveList(int position) {
    struct node *current;

    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    if(!isValidPosition(position)) {
        cout << "Position is not valid!\n";
        return;
    }

    current = list;

    for(int i = 0; i < position; i++) {
        current = current -> next;
    }

    cout << "Position: " << position << " / Element: " << current -> data << "\n";
}

void removeList(int position) {
    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    if(!isValidPosition(position)) {
        cout << "Position is not valid!\n";
        return;
    }

    struct node *deletedNode;

    if(position == 0) {
        deletedNode = list;
        list = list -> next;
    } else {
        struct node *current = list;

        for(int i = 0; i < position - 1; i++) {
            current = current -> next;
        }

        deletedNode = current -> next;
        current -> next = deletedNode -> next;
    }

    delete deletedNode;
    listSize--;

    cout << "Element removed!\n";
}

void fetchList(int value) {
    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    struct node *current = list;
    int position = 0;

    while(current != NULL) {
        if(current -> data == value) {
            cout << "Element " << value << " found at position " << position << " of the list!\n";
            return;
        }

        position++;
        current = current -> next;
    }

    cout << "Value not found!\n";
}

void print() {
    struct node *current;

    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    current = list;
    
    while(current != NULL) {
        cout << "Element: " << current -> data << "\n";
        current = current -> next;
    }
}
