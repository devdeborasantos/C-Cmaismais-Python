//Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
//foram: idade, sexo, salário e número de filhos.
//Faça uma sub-rotina que leia esses dados armazenando-os em vetores. Depois, crie sub-rotinas que
//recebam esses vetores como parâmetro e retornem a média de salário entre os habitantes, a menor e a
//maior idade do grupo e a quantidade de mulheres com três filhos que recebem até R$ 500,00 (utilize
//uma sub-rotina para cada cálculo).

#include <iostream>
#define N 3

using namespace std;

//Sub-rotina para ler os dados dos habitantes e armazená-los em vetores:
void ler_dados(int idades[], char sexos[], float salarios[], int num_filhos[]) {
    for (int i = 0; i < N; ++i) {
        cout << "Informe a idade do habitante " << i + 1 << ": ";
        cin >> idades[i];

        cout << "Informe o sexo do habitante " << i + 1 << " (M/F): ";
        cin >> sexos[i];

        cout << "Informe o salario do habitante " << i + 1 << " em R$ ";
        cin >> salarios[i];

        cout << "Informe o numero de filhos do habitante " << i + 1 << ": ";
        cin >> num_filhos[i];
    }
}

//Sub-rotina para encontrar a média de salário entre os habitantes:
float media_sal(float salarios[]) {
    float soma_salarios = 0;
    for (int i = 0; i < N; ++i) {
        soma_salarios += salarios[i];
    }
    return soma_salarios / N;
}

//Sub-rotina para encontrar a menor idade do grupo:
int menor_idade(int idades[]) {
    int menor_idade = idades[0];
    for (int i = 1; i < N; ++i) {
        if (idades[i] < menor_idade) {
            menor_idade = idades[i];
        }
    }
    return menor_idade;
}

//Sub-rotina para encontrar a maior idade do grupo:
int maior_idade(int idades[]) {
    int maior_idade = idades[0];
    for (int i = 1; i < N; ++i) {
        if (idades[i] > maior_idade) {
            maior_idade = idades[i];
        }
    }
    return maior_idade;
}

//Sub-rotina para contar mulheres com três filhos que recebem até R$ 500,00:
int m_3f_500(char sexos[], float salarios[], int num_filhos[]) {
    int mulheres = 0;
    for (int i = 0; i < N; ++i) {
        if (sexos[i] == 'F' && num_filhos[i] == 3 && salarios[i] <= 500.0) {
            mulheres++;
        }
    }
    return mulheres;
}

int main() {
    int idades[N];
    char sexos[N];
    float salarios[N];
    int num_filhos[N];

    // Chama a sub-rotina para ler os dados dos habitantes
    ler_dados(idades, sexos, salarios, num_filhos);

    // Calcula e exibe a média de salário entre os habitantes
    cout << "Media de salario entre os habitantes: R$ " << media_sal(salarios) << endl;

    // Encontra e exibe a menor e a maior idade do grupo
    cout << "Menor idade do grupo: " << menor_idade(idades) << " anos" << endl;
    cout << "Maior idade do grupo: " << maior_idade(idades) << " anos" << endl;

    // Conta e exibe a quantidade de mulheres com três filhos que recebem até R$ 500,00
    cout << "Quantidade de mulheres com tres filhos que recebem ate R$ 500,00: ";
    cout << m_3f_500(sexos, salarios, num_filhos) << endl;

    return 0;
}