#include <iostream>
#include "../utils/node.h";

// this ordering algorithm will be executed especifically on
// the linear list data structure, both on vector and pointer based lists

using namespace std;

// vector definition
const int TAM = 10;
int list[TAM] = {5, 21, 4, 16, 10, 33, 9, 8, 98, 34};

// procedure that orders a vector based list using insertion-sort
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

// boolean function that tells if the value is already inserted
bool valueExists() {

}

// procedure that adds a value to the list
void insertValuePointerList(int value) {

}

// procedure that orders a pointer based list using insertion-sort
void insertionSortPointerList() {
    // 3 variables just like the vector version
    struct node *current, *previous, *element;
    
    // current starts at the second element
    current = pointerList -> next;

    // if the list is empty return;
    if(list == NULL) {
        cout << "List is empty...";
        return;
    }

    for(int i = 1; i <= listSize; i++) {
        
    }
}

// procedure that prints a pointer based list
void printPointerList() {

}

int main() {
    cout << "Vector List Disordered: \n";
    printVetList(list, TAM);

    cout << "\nVector List Ordered: \n";
    insertionSortVectorList(list, TAM);
    printVetList(list, TAM);
}