//Crie um programa que receba o número dos 10 alunos de uma sala, armazenando-os em um vetor, junto
//com as notas obtidas ao longo do semestre (foram realizadas quatro avaliações). Elabore sub-rotinas para:
//■ determinar e mostrar a média aritmética de todos os alunos;
//■ indicar os números dos alunos que deverão fazer recuperação, ou seja, aqueles com média inferior a 6.
//Observação
//Todas as mensagens deverão ser mostradas no programa principal.

#include <iostream>
#define N 3

using namespace std;

//Sub-rotina para ler os dados dos habitantes e armazená-los em vetores:
void ler_dados(string nomes[], float nota1[], float nota2[], float nota3[], float nota4[]) {
    for (int i = 0; i < N; ++i) {
        cout << "Informe o nome do(a) aluno(a) " << i + 1 << ": ";
        cin >> nomes[i];

        cout << "A nota 1 do(a) aluno(a) " << i + 1 << ": ";
        cin >> nota1[i];

        cout << "A nota 2 do(a) aluno(a) " << i + 1 << ": ";
        cin >> nota2[i];

        cout << "A nota 3 do(a) aluno(a) " << i + 1 << ": ";
        cin >> nota3[i];
        
        cout << "A nota 4 do(a) aluno(a) " << i + 1 << ": ";
        cin >> nota4[i];
    }
}

float media_arit(float nota1[], float nota2[], float nota3[], float nota4[]) {
    float media_notas = 0;
    for (int i = 0; i < N; ++i) {
        media_notas += nota1[i] + nota2[i] + nota3[i] + nota4[i];
    }
    return media_notas / (N * 4);
}

    float media_final(string nomes[], float nota1[], float nota2[], float nota3[], float nota4[]) {
        for (int i = 0; i < N; ++i) {
        float media_aluno = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;
        if (media_aluno < 6) {
            cout << "O aluno " << nomes[i] << " devera fazer recuperacao.";
            }
        }
    }

int main() {
    string nomes[N];
    float nota1[N], nota2[N], nota3[N], nota4[N];

    ler_dados(nomes, nota1, nota2, nota3, nota4);

    cout << "A media aritmetica de todas as notas dos alunos e: " << media_arit(nota1, nota2, nota3, nota4) << endl;

    media_final(nomes, nota1, nota2, nota3, nota4);

    return 0;
}

