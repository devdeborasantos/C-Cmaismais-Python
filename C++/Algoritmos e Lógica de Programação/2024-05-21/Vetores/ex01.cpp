// Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
// todos os números pares;
// a quantidade de números pares;
// todos os números ímpares;
// a quantidade de números ímpares.

#include <iostream>
#include <ctime>
#define N 20

using namespace std;

int main() {
    int vet[N], vetpares[N], vetimpares[N], np = 0, ni = 0;

    // (pseudo)leitura de dados
    srand(time(NULL));
    for(int i = 0; i < N; i ++) {
        vet[i] = rand() % 50; // o que vier vai ser menor que 50, pois pega o resto da divisao por 50
        cout << vet[i] << ", ";
   }
    cout << endl;

        // separacao do vetor em outros 2 vetores (pares e impares)
        // np é variavel que conta quantidade de pares
        // ni é a variavel que conta quantidade de impares
        // separar np e ni para que nao haja lacunas no preenchimento do vetor
    for(int i = 0; i < N; i ++) {
            // nao precisa colocar que o resto é diferente de zero ( != 0) pois ja esta subentendido, mas caso queira colocar
            // tambem poderia ser apenas ! antes de vet[i] ou seja !vet[i]
        if (vet[i] % 2) {
            vetimpares[ni++] = vet[i];
        } else {
            vetpares[np++] = vet[i];
        }
    }

    // mostrar os valores
    cout << "Existem " << ni << " impares, sao eles: ";
        for(int i = 0; i < ni; i ++) {
            cout << vetimpares[i] << ", ";
        }
    cout << endl;

    cout << "Existem " << np << " pares, sao eles: ";
        for(int i = 0; i < np; i ++) {
            cout << vetpares[i] << ", ";
        }
    cout << endl;

    return 0;

}