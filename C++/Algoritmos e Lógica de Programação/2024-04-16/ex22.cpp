#include <iostream>

using namespace std;

int main() {
    int idade = 1;
    float altura, soma_altura = 0, qtd_altura = 0;

    while (idade > 0) {
        cout << "Digite sua idade ou digite 0 para finalizar: ";
        cin >> idade;
        if (idade <= 0) {
            break;
        }

        cout << "Digite sua altura: ";
        cin >> altura;

        if (idade > 50) {
            soma_altura += altura;
            qtd_altura++;
        }
        cout << endl;
    }
    cout << "A media das alturas das pessoas com mais de 50 anos eh " << soma_altura / qtd_altura << "m" << endl;

    return 0;
}