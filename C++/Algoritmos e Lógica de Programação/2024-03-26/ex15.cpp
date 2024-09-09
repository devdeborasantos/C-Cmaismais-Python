#include <iostream>

using namespace std;

int main() {
    float valor;
    int tipo;
    
    cout << "Qual valor a ser investido? R$ ";
    cin >> valor;
    
    cout << "[1] Poupanca" << endl;
    cout << "[2] Fundos de Renda Fixa" << endl;
    cout << "Escolha um tipo de investimento: ";
    cin >> tipo;

    if (tipo == 1)
        valor = valor * 1.03;
    else if (tipo == 2)
         valor = valor * 1.04;
    else {
        cout << "Opcao invalida." << endl;
        return 0;
    }

    cout << "O valor corrigido apos 1 mes de investimento sera de R$ " << valor << endl;

return 0;
}