// Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
// iguais a 30, mostrando as posições em que apareceram.

#include <iostream>
#define N 15
//abaixo para o computador colocar numeros (ctime) e srand e rand limitando de 25 ate 35 (desloca 10 valores 25 % 11)
#include <ctime>

using namespace std;

int main() {
    int vet[N], i;
    
    srand(time(NULL));
    // leitura do vetor
    for (i = 0; i < N; i++) {
        vet[i] = 25 + rand() % 11;
        cout << "Informe o valor " << i+1 << ": " << vet[i] << endl;
    }

    // processar o vetor
    for(i = 0; i < N; i++) {
        if (vet[i] == 30){
        cout << "O valor 30 foi encontrado na posicao ou indice: " << i << endl; 
                            // se for indice usa i, se for posicao usa i+1
        }
    }

    // imprimindo vetor
    // espaçamento: \t
    // pular linha: \n
    // pode tirar essa parte debaixo:
    //   cout << "vet = [\t";
    //   for(i = 0; i< N;  i++) {
    //       cout << vet[i] << "\t";
    //       cout << "]\n";
    //   }

    return 0;
}