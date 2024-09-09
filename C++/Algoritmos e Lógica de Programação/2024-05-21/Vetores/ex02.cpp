// Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
// os números múltiplos de 2;
// os números múltiplos de 3;
// os números múltiplos de 2 e de 3.

#include <iostream>
#include <ctime>
#define N 7

using namespace std;

int main() {
    int vet[N], vetmt2[N],  vetmt3[N], vetmt2e3[N], nm2 = 0, nm3 = 0, nm6 = 0;

    srand(time(NULL));
    for(int i = 0; i < N; i ++) {
        vet[i] = rand() % 100; // o numero que vier vai ser menor que 100, pois pega o resto da divisao por 100
        cout << vet[i] << ", ";
    }
    cout << endl; // para pular linha

    for(int i = 0; i < N; i ++) {
        if (vet[i] % 2 == 0) {
            vetmt2[nm2++] = vet[i];
        } else if (vet[i] % 3 == 0) {
            vetmt3[nm3++] = vet[i];
        } else if (vet[i] % 6 == 0) {
            vetmt2e3[nm6++] = vet[i];
        }
    }

    cout << "Existem " << nm2 << " multiplos de 2, sao eles: ";
        for(int i = 0; i < nm2; i ++) {
            cout << vetmt2[i] << ", ";
        }
    cout << endl;

    cout << "Existem " << nm3 << " multiplos de 3, sao eles: ";
        for(int i = 0; i < nm3; i ++) {
            cout << vetmt3[i] << ", ";
        }
    cout << endl;

    cout << "Existem " << nm6 << " multiplos de 2 e de 3, sao eles: ";
        for(int i = 0; i < nm6; i ++) {
            cout << vetmt2e3[i] << ", ";
        }
    cout << endl;

    return 0;

}