#include <iostream>

using namespace std;

int main() {
    int opc, codigo;
    float valor, rend_p = 0, rend_pp = 0,rend_rf = 0, soma_valor = 0, soma_rendimento = 0;

    while (opc > 0) {
        cout << "Informe seu codigo de cliente: ";
        cin >> codigo;
        cout << "[1] Poupanca" << endl;
        cout << "[2] Poupanca plus" << endl;
        cout << "[3] Fundos de renda fixa" << endl;
        cout << "[0] Sair" << endl;
        cout << "Informe o tipo de investimento: ";
        cin >> opc;
        cout << endl;

        switch (opc) {
            case 1:
                cout << "Informe o valor investido: R$";
                cin >> valor;
                cout << endl;
                rend_p += (valor * 0.015);
                soma_valor += valor;
                break;
            case 2:
                cout << "Informe o valor investido: R$";
                cin >> valor;
                cout << endl;
                rend_pp += (valor * 0.02);
                soma_valor += valor;
                break;
            case 3:
                cout << "Informe o valor investido: R$";
                cin >> valor;
                cout << endl;
                rend_rf += (valor * 0.04);
                soma_valor += valor;
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção invalida!" << endl;
                cout << endl;
                break;
        }
    }
        soma_rendimento = rend_pp + rend_rf + rend_p;
        cout << endl;
        cout << "Valor total investido: R$" << soma_valor << endl;
        cout << "Valor total de juros pago: R$" << soma_rendimento << endl;

    return 0;
}