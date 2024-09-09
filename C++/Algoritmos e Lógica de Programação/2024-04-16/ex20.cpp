#include <iostream>

using namespace std;

int main() {
    int i = 1, opc;
    float n1, n2, n3, peso_1, peso_2, peso_3;

    while (i > 0) {
        cout << "- - - Menu de opcoes - - -" << endl;
        cout << "[1] Media Aritimetica" << endl;
        cout << "[2] Media Ponderada" << endl;
        cout << "[3] Sair" << endl;
        cout << "Informe sua opcao: ";
        cin >> opc;
        
        switch (opc) {
            case 1:
                cout << "Informe duas notas: ";
                cin >> n1 >> n2;
                cout << "A media aritimetica eh: " << (n1 + n2) / 2 << endl;
                cout << endl;
                break;
            case 2:
                cout << "Informe tres notas: ";
                cin >> n1 >> n2 >> n3;
                cout << "Informe o peso da primeira nota ";
                cin >> peso_1;
                cout << "Informe o peso da segunda nota ";
                cin >> peso_2;
                cout << "Informe o peso da terceira nota ";
                cin >> peso_3;
                cout << "A media ponderada eh: " << (n1* peso_1 + n2 * peso_2 + n3 * peso_3) / (peso_1 + peso_2 + peso_3) << endl;
                cout << endl;
                break;
            case 3:
                cout << "O programa sera encerrado." << endl;
                i = 0;
                break;
            default:
                cout << "Opcao invalida tente novamente" << endl;
                cout << endl;
                break;
        }
    }

    return 0;
}