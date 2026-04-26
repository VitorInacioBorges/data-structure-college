#include <iostream>

using namespace std;

const int NUM = 10;
int pile[NUM];
int top = -1;

bool vazia() {
    return top == -1;
}

void push(int valor) {
    if (top == NUM - 1) {
        cout << "Pilha sem espaço :(\n";
        return;
    }

    pile[++top] = valor;
    cout << "Valor " << valor << " inserido na pilha!\n";
}

void pop() {
    if (vazia()) {
        cout << "Pilha vazia... não tem como retirar.\n";
        return;
    }

    cout << "Valor " << pile[top] << " retirado da pilha!\n";
    top--;
}

void topo() {
    if (vazia()) {
        cout << "Pilha vazia...\n";
    } else {
        cout << "O valor do topo é: " << pile[top] << "\n";
    }
}

void imprime() {
    if (vazia()) {
        cout << "Pilha vazia...\n";
        return;
    }

    cout << "\nConteúdo da pilha:\n";
    for (int i = top; i >= 0; i--) {
        cout << pile[i] << "\n";
    }
    cout << "\n";
}

int main() {
    push(10);
    pop();
    push(15);
    imprime();
    topo();
    pop();
    topo();

    return 0;
}