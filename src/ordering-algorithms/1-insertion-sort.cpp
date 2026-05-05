#include <iostream>
#include "../utils/node.h"

// this ordering algorithm will be executed especifically on
// the linear list data structure, both on vector and pointer based lists

using namespace std;

// vector definition
const int TAM = 10;
int list[TAM] = {5, 21, 4, 16, 10, 33, 9, 8, 98, 34};

// procedure that orders a vector based list using insertion sort
void insertionSortVectorList(int vet[], int size) {
    // defines current vector location for current element to be sorted and stars the loop
    for(int current = 1; current < size; current++) {
        // defines previous vector location
        int element = vet[current];
        int previous = current - 1;
        // while the previous element is the first element or higher AND the previous element is higher than the current element
        while (previous >= 0 && vet[previous] > element) {
            // element after previous becomes the previous one
            vet[previous + 1] = vet[previous];
            // previous is now the element before
            previous--;
        }
        // element guards the current element that is being sorted and replaces the element after previous that changed after the last iteration
        vet[previous + 1] = element;
    }
}

// procedure that prints a vector based list
void printVetList(int vet[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << vet[i] << "\n";
    }
}

/* -------------------------------------------------------------------------------------------------------------------------------- */

// pointer list definition
struct node *pointerList = NULL;
int listSize = 0;

bool isEmpty() {
    if(pointerList == NULL) return true;
    else return false;
}

// boolean function that tells if the value is already inserted
bool valueExists(int value) {
    // defines the pointer that points to current node
    struct node *current;

    // defines current as the first node
    current = pointerList;

    // while current point to something
    while (current != NULL) {
        // and the element is not equal to the value specified
        if((current -> data) == value) {
            return true;
        } 

        // continue to the next
        current = current -> next;
    }

    return false;
}

// procedure that adds a value to the list
// not adding the value in order by purpose so we can try the algorithm
void insertValuePointerList(int value) {
    if(valueExists(value)) {
        cout << "Element already exists in the list!\n";
        return;
    }

    struct node *current = pointerList;
    struct node *previous = NULL;
    struct node *newNode = new struct node;

    newNode -> data = value;
    newNode -> next = NULL;

    while(current != NULL) {
        previous = current;
        current = current -> next;
    }

    if(previous == NULL) {
        newNode -> next = pointerList;
        pointerList = newNode;
    } else {
        newNode -> next = current;
        previous -> next = newNode;
    } 

    listSize++;
}

// procedure that orders a pointer based list using insertion sort
void insertionSortPointerList() {
    // if the list is empty return;
    if(isEmpty()) {
        cout << "List is empty...";
        return;
    }

    struct node *sorted = NULL;
    struct node *current = pointerList;

    while(current != NULL) {
        struct node *element = current;
        current = current -> next;

        if(sorted == NULL || element -> data < sorted -> data) {
            element -> next = sorted;
            sorted = element;
        } else {
            struct node *previous = sorted;

            while(previous -> next != NULL && previous -> next -> data < element -> data) {
                previous = previous -> next;
            }

            element -> next = previous -> next;
            previous -> next = element;
        }
    }

    pointerList = sorted;
}

// procedure that prints a pointer based list
void printPointerList() {
    struct node *current;

    if(isEmpty()) {
        cout << "List empty\n";
        return;
    }

    current = pointerList;
    
    while(current != NULL) {
        cout << "Element: " << current -> data << "\n";
        current = current -> next;
    }
}

int main() {
    cout << "Vector List Disordered: \n";
    printVetList(list, TAM);

    cout << "\nVector List Ordered: \n";
    insertionSortVectorList(list, TAM);
    printVetList(list, TAM);

    insertValuePointerList(1);
    insertValuePointerList(56);
    insertValuePointerList(12);
    insertValuePointerList(21);
    insertValuePointerList(26);
    insertValuePointerList(47);
    insertValuePointerList(11);
    insertValuePointerList(9);
    insertValuePointerList(8);

    cout << "\nPointer List Disordered: \n";
    printPointerList();

    cout << "\nPointer List Ordered: \n";
    insertionSortPointerList();
    printPointerList();
}
