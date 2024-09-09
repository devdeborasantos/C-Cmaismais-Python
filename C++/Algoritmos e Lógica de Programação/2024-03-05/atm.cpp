#include <iostream>

using namespace std;

int main() {
  float saldo, valor;

  cout << "Informe seu saldo: ";
  cin >> saldo;

  cout << "Informe o valor para saque: ";
  cin >> valor;

  if (saldo >= valor) {
    saldo -= valor;
    cout << "Seu saldo é R$ " << saldo << endl;
  }
  else 
    cout << "Saldo insuficiente!!!" << endl; 

  return 0;
}
