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

// Lista Vetor

#include <iostream>

using namespace std;

const int TAM = 20;
int lista[TAM];
int tamanho = 0;

bool vazia() {
    if(tamanho == 0) return true;
    else return false;
}

bool cheia() {
    if(tamanho == TAM) return true;
    else return false;
}

bool posicaoValida(int posicao) {
    if(posicao >= 0 && posicao < tamanho) return true;
    else return false;
}

bool valorExiste(int valor) {
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] == valor) {
            return true;
        }
    }

    return false;
}

void insereLista(int valor) {
    int i;

    if(cheia()) {
        cout << "Lista esta cheia";
        return;
    }

    if(valorExiste(valor)) {
        cout << "Elemento ja existe na lista!\n";
        return;
    }

    for(i = tamanho; i > 0 && valor < lista[i - 1]; i--) {
        lista[i] = lista[i - 1];
    }

    lista[i] = valor;
    tamanho++;
    cout << "Elemento inserido!\n";
}

void recuperaLista(int posicao) {
    if(!posicaoValida(posicao)) {
        cout << "Posicao nao é válida!\n";
        return;
    }

    cout << "Posicao: " << posicao << "/ Elemento: " << lista[posicao] << "\n";
}

void removeLista(int posicao) {
    if(vazia()) {
        cout << "Lista esta vazia!\n";
        return;
    }

    if(!posicaoValida(posicao)) {
        cout << "Posicao nao é válida!\n";
        return;
    }

    for(int i = posicao; i < tamanho - 1; i++) {
        lista[i] = lista[i + 1];
    }

    tamanho--;
    cout << "Elemento removido!\n";
}

void buscaLista(int valor) {
    if(vazia()) {
        cout << "Lista esta vazia!\n";
        return;
    }

    int encontrado = 0;
    int posicao = 0;

    // nao verifica pra caso exista mais de um mesmo elemento na lista. so ve o primeiro q acha
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] == valor) {
            encontrado++;
            posicao = i;
            break;
        }
    }

    if(encontrado) {
        cout << "Elemento " << valor << " encontrado na posicao " << posicao << " do vetor!\n";
    } else {
        cout << "Elemento nao encontrado!";
    }
}

void imprime() {
    if(vazia()) {
        cout << "Lista esta vazia!\n";
        return;
    }
    
    for(int i = 0; i < tamanho; i++) {
        cout << "Posicao: " << i << " / Elemento: " << lista[i] << "\n";
    }
}
