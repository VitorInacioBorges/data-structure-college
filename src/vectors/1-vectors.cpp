#include <iostream> // #include <stdio.h>

using namespace std; // Conceito de espaço de nome. Sem ele C++ não funciona

const int NUM = 10;
int vet[NUM];

int main(){
    // Starter Step
    cout << "Escreva 10 numeros:";
    for(int i=0; i < NUM; i++){
        cin >> vet[i];
    }

    // Exercise A
    cout << "\n" << "Ordem Direta:";
    for(int i=0; i < NUM; i++){
        cout << vet[i] << " ";
    }

    // Exercise B
    cout << "\n" << "Ordem Inversa:";
    for(int i=NUM-1; i >= 0; i--){
        cout << vet[i] << " ";
    }

    // Exercise C
    cout << "\n" << "Maior Elemento do Vetor:";
    while(true){
        int i = 0;
        int temp = 0;
        if(temp < vet[i]){
            temp = vet[i];
        }
        if(i == NUM){
            cout << temp;
            break;
        }
        i++;
    }
}