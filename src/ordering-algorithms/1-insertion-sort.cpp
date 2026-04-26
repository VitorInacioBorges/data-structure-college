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

// pointer list definition
struct node *lista = NULL;
int listSize = 0;

// procedure that orders a pointer based list using insertion-sort
void insertionSortPointerList() {

}

// procedure that prints a pointer based list
void printPointerList() {

}

int main() {
    insertionSortVectorList(list, TAM);
    printVetList(list, TAM);
}