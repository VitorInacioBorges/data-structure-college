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

// Lista Ponteiro

#include <iostream>

using namespace std;

struct node {
    int elemento;
    struct node *prox;
};

struct node *lista = NULL;
int tamanho = 0;

bool vazia() {
    if(lista == NULL) return true;
    else return false;
}

bool posicaoValida(int posicao) {
    if(posicao >= 0 && posicao < tamanho) return true;
    else return false;
}

bool valorExiste(int valor) {
    struct node *atual;

    atual = lista;

    while (atual != NULL) {
        if((atual -> elemento) == valor) {
            return true;
        } 

        atual = atual -> prox;
    }

    return false;
}

void insereLista(int valor) {
    struct node *atual, *anterior, *novo;

    novo = new(struct node);
    novo -> elemento = valor;

    atual = lista;

    while(atual != NULL && valor > atual -> elemento) {
        anterior = atual;
        atual = atual -> prox;
    }

    if(atual == lista) {
        novo -> prox = lista;
        lista -> prox = novo;
        return;
    }

    novo -> prox = atual;
    anterior -> prox = novo;

    tamanho++;
}

void recuperaLista(int posicao) {
    struct node *atual;

    if(!posicaoValida(posicao)) {
        cout << "Posicao não é válida!\n";
        return;
    }

    atual = lista;
    int i = 0;

    while (atual != NULL && i < posicao) {
        atual = atual -> prox;
        i++;
    }

    cout << "Posicao: " << posicao << "/ Elemento: " << atual -> elemento << "\n";
}

void removeLista(int posicao) {
    struct node *atual, *apagado;

    if(!posicaoValida(posicao)) {
        cout << "Posicao não é válida!\n";
        return;
    }

    if(posicao == 0) {
        apagado = lista;
        lista = lista -> prox;
        return;
    }

    atual = lista;

    for(int i = 0; i < posicao - 1; i++) {
        atual = atual -> prox;
    }

    apagado = atual -> prox;
    atual -> prox = apagado -> prox;

    tamanho--;
    delete(apagado);
}

void buscaLista(int valor) {
    struct node *atual;

    atual = lista;

    int encontrado = 0;
    int posicao = 0;

    while (atual != NULL) {
        if((atual -> elemento) == valor) {
            encontrado++;
            break; 
        }

        posicao++;
        atual = atual -> prox;
    }

    if(encontrado) {
        cout << "Elemento " << valor << " encontrado na posicao " << posicao << " do vetor!\n";
    } else {
        cout << "Elemento nao encontrado!";
    }
}

void imprime() {
    struct node *atual;

    if(vazia()) {
        cout << "Lista esta vazia!\n";
        return;
    }

    atual = lista;
    
    while(atual != NULL) {
        cout << "Elemento: " << atual -> elemento << "\n";
        atual = atual -> prox;
    }
}
