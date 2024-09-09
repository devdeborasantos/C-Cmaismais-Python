// Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
// Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
// Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
// alunos. Mostre o número das matrículas que aparecem nos dois vetores.

#include <iostream>
#include <ctime>
#define N 15
#define M 10

using namespace std;

int main() {
    int vet[N], vetlog[N], vetlip[M], nlog = 0, nlip = 0;
    
    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        vet[i] = rand() % 51;
    }

    for(int i = 0; i < N; i++) {
        if (nlog < N && vet[i] <=50) {
            vetlog[nlog++] = vet[i];
        }
    }

    for(int i = 0; i < M; i++) {
        if (nlip < M && vet[i] <=50) {
            vetlip[nlip++] = vet[i];
        }
    }

    cout << "A matricula dos alunos que fazem a disciplina Logica eh: ";
        for(int i = 0; i < nlog; i++) {
            cout << vetlog[i] << ", ";
        }
    cout << endl;

    cout << "A matricula dos alunos que fazem a disciplina Linguagem de Programacao eh: ";
        for(int i = 0; i < nlip; i++) {
            cout << vetlip[i] << ", ";
        }
    cout << endl;

    cout << "A matricula dos alunos que fazem ambas disciplinas eh: ";
        for (int i = 0; i < nlog; i++) {
            for (int j = 0; j < nlip; j++) {
                if (vetlog[i] == vetlip[j]) {
                    cout << vetlog[i] << ", ";
                    break;
                }
            }
        }
    cout << endl;

    return 0;

}