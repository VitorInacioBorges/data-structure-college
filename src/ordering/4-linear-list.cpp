#include <iostream>

using namespace std;

const int SPACE = 10;
int list[SPACE];
int cont = 0;

/*
 * 0 1 2 3 4 5 6 7 8 9 -> Array[SPACE]
 * List is ordered. Have no way to choose where
 * the element will be inserted. 
 */

bool empty() {
    if(cont == 0) return true;
    else return false;
}

bool full() {
    if(cont == SPACE) return true;
    else return false;
}

void insertElement(int value) {
    int i;
    if(full()) {
        cout << "List is full";
        return;
    } else {
        for(i = cont; i > 0 && value < list[i - 1]; i--) {
            list[i] = list[i - 1];
        }

        list[i] = value;
        cont++;
        cout << "Inserted element!\n";
    }
}

void searchElement() {

}

void deleteElement() {
    if(empty()) {
        cout << "List is empty!";
        return;
    } else {
        
    }
}

void printList() {
    for(int i = 0; i <= cont; i++) {
        cout << "Position: " << i << " / Element: " << list[i] << "\n";
    }
}

int main(){
    insertElement(2);
    insertElement(10);
    insertElement(5);
    printList();
}