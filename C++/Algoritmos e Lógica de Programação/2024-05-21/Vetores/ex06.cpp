// Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
// Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
// Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
// loja. Calcule e mostre:
// um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
// o total das vendas de todos os vendedores;
// o maior valor a receber e o nome de quem o receberá;
// o menor valor a receber e o nome de quem o receberá.

#include <iostream>
#define N 3
using namespace std;

int main() {
  // Declaração de arrays
  double vendas[N], comissao[N];
  string nomes[N];

  // Entrada de dados
  for (int i = 0; i < N; i++) {
    cout << "Digite o nome do vendedor " << i + 1 << ": ";
    cin >> nomes[i];
    cout << "Digite o total de vendas do vendedor " << nomes[i] << ": ";
    cin >> vendas[i];
    cout << "Digite o percentual de comissão do vendedor " << nomes[i] << ": ";
    cin >> comissao[i];
  }

  // Cálculo da comissão de cada vendedor
  double comissaoTotal[N];
  for (int i = 0; i < N; i++) {
    comissaoTotal[i] = vendas[i] * (comissao[i] / 100);
  }

  // Relatório com nomes dos vendedores e valores a receber
  cout << "\n\nRelatório de comissões:\n";
  for (int i = 0; i < N; i++) {
    cout << nomes[i] << ": R$ " << comissaoTotal[i] << endl;
  }

  // Cálculo do total de vendas
  double totalVendas = 0;
  for (int i = 0; i < N; i++) {
    totalVendas += vendas[i];
  }

  // Encontrar o maior valor a receber
  double maiorComissao = comissaoTotal[0];
  int indiceMaior = 0;
  for (int i = 1; i < N; i++) {
    if (comissaoTotal[i] > maiorComissao) {
      maiorComissao = comissaoTotal[i];
      indiceMaior = i;
    }
  }

  // Encontrar o menor valor a receber
  double menorComissao = comissaoTotal[0];
  int indiceMenor = 0;
  for (int i = 1; i < N; i++) {
    if (comissaoTotal[i] < menorComissao) {
      menorComissao = comissaoTotal[i];
      indiceMenor = i;
    }
  }

  // Mostrar o total de vendas, maior valor a receber e menor valor a receber
  cout << "\nTotal de vendas: R$ " << totalVendas << endl;
  cout << "Maior valor a receber: R$ " << maiorComissao << " - " << nomes[indiceMaior] << endl;
  cout << "Menor valor a receber: R$ " << menorComissao << " - " << nomes[indiceMenor] << endl;

  return 0;
}
