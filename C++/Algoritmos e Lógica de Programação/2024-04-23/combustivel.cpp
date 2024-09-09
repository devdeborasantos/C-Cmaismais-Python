#include <iostream> 

using namespace std;

int main() {
    double litros, valor;
    char tipo;

    cout << "Informe quantos litros deseja: " << endl;
    cin >> litros;

    cout << "Selecione: \n[A] Alcool \n[G] Gasolina" << endl;
    cin >> tipo;

    tipo = toupper(tipo);
    
    if (tipo == 'A') {
        if (litros <= 25) {
            valor = (litros * 1.90) * 0.96;
        }
        else {
            valor = (litros * 1.90) * 0.98;
        }
    }
    else if (tipo == 'G') {
        if (litros <= 25) {
            valor = (litros * 2.70) * 0.97;
        }
        else {
            valor = (litros * 2.70) * 0.95;
        }
    }
    else {
        cout << "Opcao invalida" << endl;
        return 0;
    }

    cout << "O valor a ser pago eh R$ " << valor << endl;

    return 0;
}