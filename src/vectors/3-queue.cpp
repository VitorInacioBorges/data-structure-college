#include <iostream>

using namespace std;

const int TAM=10;
int queue[TAM];
int queueEnd = 0;
int queueStart = 0;
int cont = 0;

bool empty() {
    if(cont == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueue(int valor) {
    if(cont == TAM){
        cout << "Queue is full!";
        return;
    } else {
        cont++;
        queue[queueEnd] = valor;
        if(queueEnd == TAM){
            queueEnd = 0;
        } else {
            queueEnd++;
        }
        cout << "Element inserted in the queue!";
    }
}

void dequeue() {
    if(empty()){
        cout << "Queue is empty. No elements to dequeue!";
        return;
    } else {
        cont--;
        if(queueStart == TAM){
            queueStart = 0;
        } else {
            queueStart++;
        }
        cout << "Dequeued the first element of the queue!";
    }
}

void start() {
    if(empty()){
        cout << "Queue is empty!";
    } else {
        cout << "The first element of the queue is: " << queue[queueStart];
    }
}

void printQueue() {
    int i;
    int j;

    if(empty()){
        cout << "Empty queue!";
        return;
    }
    for(j = 0; j < cont; j++){
        cout << queue[i] << " ";
        if(i == TAM - 1){
            i = 0;
        } else {
            i++;
        }
    }
}

int main() {
    enqueue(10);

    dequeue();
    
    enqueue(12);
    enqueue(49);
    enqueue(18);
    enqueue(109);
    enqueue(14);

    dequeue();
    dequeue();
    
    start();

    printQueue();

}