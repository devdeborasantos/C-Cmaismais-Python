//Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
//vetores A e B. O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os elementos
//menores ou iguais a zero.

#include <iostream>
#include <ctime>
#define N 30

using namespace std;

int elementos(int x[], int a[], int b[], int& na, int& nb) { // colocar & para na e nb poder ser usado fora da função
    na = 0, nb = 0;
    for(int i = 0; i < N; i++) {
        if (x[i] > 0) {
            a[na++] = x[i];
        } else {
            b[nb++] = x[i];
        }
    }
}

int main() {
    int x[N], a[N], b[N], na = 0, nb = 0;

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        x[i] = rand() % 25 - 15;
        cout << x[i] << ", ";
    }
    cout << endl;

    elementos(x, a, b, na, nb);

    cout << "O vetor A possui " << na << " elementos, sao eles: ";
        for(int i = 0; i < na; i++) {
            cout << a[i] << ", ";
        }
    cout << endl;

    cout << "o vetor B possui " << nb << " elementos, sao eles: ";
        for(int i = 0; i < nb; i ++) {
            cout << b[i] << ", ";
        }
    cout << endl;
    
    return 0;
}