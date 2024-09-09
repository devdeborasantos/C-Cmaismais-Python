#include <iostream>

using namespace std;

int main() {
    int idade = 1;
    float media_idade, soma_idade = 0, qtd_idade = 0;

    while (idade > 0) {
        cout << "Informe sua idade ou digite 0 para finalizar: ";
        cin >> idade;
        soma_idade += idade;
        qtd_idade++;
    }
    
    qtd_idade -= 1;
    media_idade = soma_idade / qtd_idade;

    cout << "A media de idade eh: " << media_idade << endl;
    
    return 0;
}