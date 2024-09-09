//Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
//de parcelas de uma soma S, calculada pela fórmula:
//S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2 + 1)/(n + 3)

#include <iostream>
#include <cmath>
#include <ctime>
#define N 5

using namespace std;

float valor_S(int div[N]) {
    float res_f = 0;
    for(int i = 1; i < N; i++) {
            res_f += (pow(div[i], 2) + 1.0) / (div[i] + 3.0);
    }
    return res_f;
}

int main() {
    int vet[N];
    float res;

    srand(time(NULL));
    for(int i = 0; i < N; i ++) {
        vet[i] = rand() % 50; 
        cout << vet[i] << ", ";

    }
    cout << endl;

    res = valor_S(vet);

    cout << "S contem " << N << " parcelas e a soma destas parcelas eh " << res << endl;

    return 0;
}