#include <iostream>
using namespace std;

int main() {
    int X[10];
    int i, j, aux;

    // Leitura do vetor X
    for (i = 0; i < 10; i++) {
        cout << "Digite o valor para X[" << i + 1 << "]: ";
        cin >> X[i];
    }

    // Algoritmo de ordenação - Bubble Sort
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (X[j] > X[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = X[j];
                X[j] = X[j + 1];
                X[j + 1] = aux;
            }
        }
    }

    // Imprimir o vetor ordenado
    cout << "Vetor ordenado: ";
    for (i = 0; i < 10; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;
}