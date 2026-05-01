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
     
    It is not necessary to include any menu.1
*/

// Vector List

#include <iostream>

using namespace std;

const int SIZE = 20;
int list[SIZE];
int listSize = 0;

bool isEmpty() {
    if(listSize == 0) return true;
    else return false;
}

bool isFull() {
    if(listSize == SIZE) return true;
    else return false;
}

bool isValidPosition(int position) {
    if(position >= 0 && position < listSize) return true;
    else return false;
}

bool valueExists(int value) {
    for(int i = 0; i < listSize; i++) {
        if(list[i] == value) {
            return true;
        }
    }

    return false;
}

void insertList(int value) {
    int i;

    if(isFull()) {
        cout << "List is full";
        return;
    }

    if(valueExists(value)) {
        cout << "Element already exists in the list!\n";
        return;
    }

    for(i = listSize; i > 0 && value < list[i - 1]; i--) {
        list[i] = list[i - 1];
    }

    list[i] = value;
    listSize++;
    cout << "Element inserted!\n";
}

void retrieveList(int position) {
    if(!isValidPosition(position)) {
        cout << "Position is not valid!\n";
        return;
    }

    cout << "Position: " << position << " / Element: " << list[position] << "\n";
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

    for(int i = position; i < listSize - 1; i++) {
        list[i] = list[i + 1];
    }

    listSize--;
    cout << "Element removed!\n";
}

void fetchList(int value) {
    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    int found = 0;
    int position = 0;

    // doesn't check if there's more than one same element in the list. only sees the first it finds
    for(int i = 0; i < listSize; i++) {
        if(list[i] == value) {
            found++;
            position = i;
            break;
        }
    }

    if(found) {
        cout << "Element " << value << " found at position " << position << " of the vector!\n";
    } else {
        cout << "Value not found!";
    }
}

void print() {
    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }
    
    for(int i = 0; i < listSize; i++) {
        cout << "Position: " << i << " / Element: " << list[i] << "\n";
    }
}
