//Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética
//desses valores. Terminar a entrada de dados com o valor zero.

// ao inves de "não determinado" coloquei 15 valores

#include <iostream>
#include <ctime>
#define N 15

using namespace std;

float media_arit(int num[N]) {
    int soma = 0;
    float media_f;
    for(int i = 0; i < N; i++) {
       soma += num[i];
    }
    media_f = soma / N;
    return media_f;
}

int main() {
    int vet[N];
    float media;

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        vet[i] = rand() % 50;
        //cout << "Informe um numero: " << vet[i] << endl;
        cout << vet[i] << ", ";
    }
    cout << endl;

    media = media_arit(vet);

    cout << "A media aritmetica desses numeros eh " << media << endl;

    return 0;
}