//Criar um programa que:
//■ utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
//■ utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
//dessa matriz;
//Os resultados deverão ser mostrados no programa principal.

#include <iostream>
#include <ctime>
#define N 10
#define M 5

using namespace std;

void soma(int matriz[N][M]) {
    int res = 0;
    for (int i = 9; i > 5; --i) {
        for (int j = 0; j < 5; ++j) {
                res += matriz[i][j];
        }
    }
    cout << "A soma dos elementos abaixo da linha 6 eh " << res << endl;
}

int main() {
    int matriz[N][M];

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << "      "; 
        }
        cout << endl;
    }

    soma(matriz);

    return 0;
}
