#include <iostream>

using namespace std;

int main() {
    float valor, valor_parc, valor_final;
    int parcelas;

    cout << "Informe o valor do carro R$ ";
    cin >> valor;
    cout << "Como deseja pagar: " << endl;
    cout << "[0] - A vista" << endl;
    cout << "[6] - 06 Parcelas" << endl;
    cout << "[12] - 12 Parcelas" << endl; 
    cout << "[18] - 18 Parcelas" << endl;
    cout << "[24] - 24 Parcelas" << endl;
    cout << "[30] - 30 Parcelas" << endl; 
    cout << "[36] - 36 Parcelas" << endl;
    cout << "[42] - 42 Parcelas" << endl;
    cout << "[48] - 48 Parcelas" << endl;
    cout << "[54] - 54 Parcelas" << endl;
    cout << "[60] - 60 Parcelas" << endl;
    cin >> parcelas;

    if (parcelas == 0) {
        valor_final = valor * 0.8;
        valor_parc = 0;
    } else if (parcelas == 6) {
        valor_final = valor * 1.03;
        valor_parc = valor_final / 6;
    } else if (parcelas == 12) {
        valor_final = valor *1.06;
        valor_parc = valor_final / 12;
    } else if (parcelas == 18) {
        valor_final = valor * 1.09;
        valor_parc = valor_final / 18;
    } else if (parcelas == 24) {
        valor_final = valor * 1.12;
        valor_parc = valor_final / 24;
    } else if (parcelas == 30) {
        valor_final = valor * 1.15;
        valor_parc = valor_final / 30;
    } else if (parcelas == 36) {
        valor_final = valor * 1.18;
        valor_parc = valor_final / 36;
    } else if (parcelas == 42) {
        valor_final = valor * 1.21;
        valor_parc = valor_final / 42;
    } else if (parcelas == 48) {
        valor_final = valor * 1.24;
        valor_parc = valor_final / 48;
    } else if (parcelas == 54) {
        valor_final = valor * 1.27;
        valor_parc = valor_final / 54;
    } else {
        valor_final = valor * 1.30;
        valor_parc = valor / 60;
    }

    cout << "|\tPreco Final\t|\tNumero de Parcelas\t|\tValor das Parcelas\t|" << endl;
    cout << "|\t    " << valor_final << "\t\t|\t\t" << parcelas << "\t\t|\t\t" << valor_parc << "\t\t|" << endl;

    return 0;
}