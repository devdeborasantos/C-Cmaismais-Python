#include <iostream>

using namespace std;

int main() {
    float peso, altura;
    string sexo;

    cout << "Informe sua altura: ";
    cin >> altura;

    cout << "[F] Feminino" << endl;
    cout << "[M] Masculino" << endl;
    cout << "Escolha seu sexo: ";
    cin >> sexo;

    if (sexo == "f")
        peso = (62.1 * altura) - 44.7;
    else if (sexo == "m")
        peso = (72.7 * altura) - 58;
    else{
        cout << "Opcao invalida.";
        return 0;
    }

    cout << "Seu peso ideal eh : " << peso << " kg." << endl;

return 0;
}