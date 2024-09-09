//Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine
//o valor da sequência S, descrita a seguir:
//S = 1 + 1/2 + 1/3...
// S tem N parcelas

#include <iostream>
#include <ctime>
#define N 5

using namespace std;

float valor_S(int div[N]) {
    float res_f = 0;
    for(int i = 1; i <= N; i++) {
            res_f += 1.0 / div[i];
    }
    return res_f;
}

int main() {
    int vet[N];
    float res;

    srand(time(NULL));
        for(int i = 0; i < N; i ++) {
            vet[i] = rand() % 10; 
            cout << vet[i] << ", ";
        }
    cout << endl;

    res = valor_S(vet);

    cout << "O valor da sequencia S eh " << res << endl;

    return 0;
}