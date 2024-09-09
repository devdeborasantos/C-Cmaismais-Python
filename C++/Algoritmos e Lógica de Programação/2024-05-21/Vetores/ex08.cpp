// Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
// final desses alunos. Calcule e mostre:
// o nome do aluno com maior média (desconsiderar empates);
// para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
// na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.

#include <iostream>
#define N 3
using namespace std;

int main() {
    double mediafinal[N];
    string nomes[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "Digite a media final de " << nomes[i] << ": ";
        cin >> mediafinal[i];
    }

    double maiormedia = 0;
    int maior = 0;
    for (int i = 0; i < N; i++) {
        if (mediafinal[i] > maiormedia) {
            maiormedia = mediafinal[i];
            maior = i;
            cout << "O(A) aluno(a) " << nomes[maior] << " possui a maior media, sendo: " << maiormedia << endl;
        }
    }

    float tiraref;
    for (int i = 0; i < N; i++) {
        if (mediafinal[i] < 7) {
            tiraref = 5 + (7 - mediafinal[i]) / 2;
            cout << "O(A) aluno(a) " << nomes[i] << " precisa tirar: " << tiraref << " para ser aprovado." << endl;
        }
    }
  
  return 0;
}
