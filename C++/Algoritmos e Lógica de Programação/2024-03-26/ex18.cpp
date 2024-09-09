#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Informe sua idade: ";
    cin >> idade;

    if (idade >= 18)
        cout << "Voce atingiu a maioridade.";
    else 
        cout << "Voce ainda nao atingiu a maioridade.";

return 0;
}