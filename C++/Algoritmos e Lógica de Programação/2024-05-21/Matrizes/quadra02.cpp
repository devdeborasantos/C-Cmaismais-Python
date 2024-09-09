#include <iostream>
#include <ctime>
#define m 50
#define n 25

using namespace std;

void verif_exp(int atomos[m]) {
    for (int i = 0; i < n; i++) {
        int at0125 = atomos[i];
        int at2650 = atomos[i + n];
        if ((at0125 - at2650) > 1) {
            cout << "O experimento foi inconclusivo." << endl;
            return;
        } else {
            cout << "O experimento foi conclusivo." << endl;
            return;
        }
    }
}

int main() {
    int atomos[m];

    srand(time(0));
    cout << "Valores dos átomos gerados automaticamente:" << endl;
    for (int i = 0; i < m; i++) {
        atomos[i] = rand() % 2; //para testar se é conclusivo usei 2 no lugar desse 25, pq ai gera números 0 (zero) e 1 (um) e portanto dentro do intervalo +/- 1
        cout << atomos[i] << " ";
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }

    verif_exp(atomos);

    return 0;

}