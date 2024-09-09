// Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
// negativos e a soma dos números positivos desse vetor.

#include <iostream>
#include <ctime>
#define N 10

using namespace std;

int main() {
    float numneg[N], numpos[N], somapos = 0;
    int nn = 0, np = 0, vet[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        vet[i] = rand() % 20 - 10; // reduzi intervalo e inclui até -10
        cout << vet[i] << ", ";
    }
    cout << endl;

    for(int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            numneg[nn++] = vet[i];
        } else if (vet[i] > 0) {
            numpos[np++] = vet[i];
            somapos +=vet[i];
        }
    }

    cout << "A quantidade de numeros negativos eh: " << nn << " e sao eles: ";
    for(int i = 0; i < nn; i++) {
        cout << numneg[i] << ", ";
    }
    cout << endl;

    cout << "A soma dos numeros positivos eh: " << somapos << endl;
    
    return 0;

}