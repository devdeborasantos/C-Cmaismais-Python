//Faça uma sub-rotina que receba uma matriz 10X10 e determine o maior elemento acima da diagonal
//principal. Esse valor deverá ser mostrado no programa principal.

#include <iostream>
#include <ctime>
#define N 10

using namespace std;

void maior_elem(int matriz[N][N]) {
    int maior = matriz[0][1]; // Inicializa o maior com o primeiro elemento acima da diagonal principal

    // Percorre a matriz acima da diagonal principal
    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    cout << "O maior elemento acima da diagonal principal: " << maior << endl;
}

int main() {
    int matriz[N][N];

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << "      "; 
        }
        cout << endl;
    }

    maior_elem(matriz);

    return 0;
}