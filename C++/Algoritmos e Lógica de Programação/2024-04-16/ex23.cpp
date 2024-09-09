#include <iostream>

using namespace std;

int main() {
    int i = 1, opc, meses;
    float salario;

    while (i > 0) {
        cout << "Menu de opcoes:" << endl;
        cout << "[1] Novo Salario" << endl;
        cout << "[2] Ferias" << endl;
        cout << "[3] Decimo terceiro" << endl;
        cout << "[4] Sair" << endl;
        cout << "Informe sua opcao: ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Informe o seu salario: ";
            cin >> salario;
            if (salario < 210) {
                salario = salario * 1.15;
            } else if (salario >= 210 && salario <= 600) {
                salario = salario * 1.1;
            } else {
                salario = salario * 1.05;
            }
            cout << "Seu novo salario sera de: R$" << salario << endl;
            cout << endl;
            break;
        case 2:
            cout << "Informe o seu salario: ";
            cin >> salario;
            salario += salario / 3;
            cout << "O valor de suas ferias eh de RS" << salario << endl;
            cout << endl;
            break;
        case 3:
            cout << "Informe o seu salario: ";
            cin >> salario;
            cout << "Informe ha quantos meses voce trabalha na empresa: ";
            cin >> meses;
            while (meses > 12) {
                cout << "Meses trabalhados variam ate no maximo 12" << endl;
                cout << "Informe ha quantos meses voce trabalha na empresa: ";
                cin >> meses;
            }
            cout << "O seu decimo terceiro eh R$" << (salario * meses) / 12 << endl;
            cout << endl;
            break;
        case 4:
            cout << "O programa sera finalizado" << endl;
            i = 0;
            break;
        default:
            cout << "Opcao invalida tente novamente" << endl;
            break;
        }
    }

    return 0;
}