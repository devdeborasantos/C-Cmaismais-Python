// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
//número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
//e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
//de pessoas com salário inferior a R$ 380,00.

#include <iostream>
#define N 5

using namespace std;

void ler_dados(float salarios[], int num_filhos[]) {
    for (int i = 0; i < N; ++i) {

        cout << "Informe o salario do habitante " << i + 1 << " em R$ ";
        cin >> salarios[i];

        cout << "Informe o numero de filhos do habitante " << i + 1 << ": ";
        cin >> num_filhos[i];
    }
}

float media_sal(float salarios[]) {
    float soma_salarios = 0;
    for (int i = 0; i < N; ++i) {
        soma_salarios += salarios[i];
    }
    return soma_salarios / N;
}

int media_filhos(int num_filhos[]) {
    int soma_num_filhos = 0;
    for (int i = 0; i < N; ++i) {
        soma_num_filhos += num_filhos[i];
    }
    return soma_num_filhos / N;
}

float maior_sal(float salarios[]) {
    float maior_sal = salarios[0];
    for (int i = 1; i < N; ++i) {
        if (salarios[i] > maior_sal) {
            maior_sal = salarios[i];
        }
    }
    return maior_sal;
}

float per_sal_maior_380(float salarios[]) {
    float total = 0, perc = 0;
    for (int i = 0; i < N; ++i) {
        if (salarios[i] <= 380.0) {
            total++;
            perc = (total / N) * 100;
        }
    }
    return perc;
}

int main() {
    float salarios[N];
    int num_filhos[N];

    ler_dados(salarios, num_filhos);

    cout << "Media de salario entre os habitantes eh: R$ " << media_sal(salarios) << endl;

    cout << "Media de filhos entre os habitantes eh: " << media_filhos(num_filhos) << endl;

    cout << "O maior salario do grupo eh: R$ " << maior_sal(salarios) << endl;

    cout << "Percentual de pessoas com salario inferior a R$ 380,00: ";
    cout << per_sal_maior_380(salarios) << "%" << endl;

    return 0;
}

