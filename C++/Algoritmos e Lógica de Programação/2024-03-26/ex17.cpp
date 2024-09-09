#include <iostream>

using namespace std;

int main() {
    string senha;

    cout << "Informe a senha: ";
    cin >> senha;

    if (senha == "4531")
        cout << "Acesso permitido.";
    else
        cout << "Acesso negado.";

return 0;
}