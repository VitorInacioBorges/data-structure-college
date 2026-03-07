#include <iostream>

using namespace std;

const int TAM=10;
int queue[TAM];
int queueEnd = 0;
int queueStart = 0;
int cont = 0;

void enqueue(int valor) {
    if(cont == TAM){
        cout << "Queue is full!";
        return;
    } else {
        cont++;
        queue[queueEnd] = valor;
        queueEnd++;
    }
}

int main() {

}