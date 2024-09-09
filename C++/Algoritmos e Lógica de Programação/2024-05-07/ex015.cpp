#include <iostream>
#include <ctime>
#define N 15

using namespace std;

int conta_num_pares(int x[N]) {
    int n = 0;
    for(int i = 0; i < N; i++) {
        if(x[i] % 2 == 0) {
            n++;
        }
    }
    return n;
}

int main() {
    int vet[N], np;
    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        vet[i] = rand() % 50;
        cout << "Informe um numero: " << vet[i] << endl;
    }

    np = conta_num_pares(vet);

    cout << "A quantidade de numeros pares no vetor eh: " << np << endl;

    return 0;
}