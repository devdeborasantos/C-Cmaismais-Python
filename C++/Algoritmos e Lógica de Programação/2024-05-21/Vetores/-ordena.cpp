#include <iostream>
#define N 15

using namespace std;

int main() {
    int vetor[N];

    cout << "Informe 15 números:" << endl;
    for (int c = 0; c < N; c++) {
        cin >> vetor[c];
    }

    for (int c = 0; c < N - 1; c++) {
        for (int i = 0; i < N - c - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

    cout << endl;
    
    cout << "Vetor após a ordenação:" << endl;
    for (int c = 0; c < N; c++) {
        cout << vetor[c] << " ";
    }
    
   cout << endl;

    return 0;

}