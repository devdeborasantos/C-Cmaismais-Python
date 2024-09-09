#include <iostream>

using namespace std;

int main() {
    int i = 1, opc;
    float qtd_1 = 0, qtd_2 = 0, qtd_3 = 0 , qtd_4 = 0, qtd_nulo = 0, qtd_branco = 0, qtd_total = 0;
    while (i > 0) {
        cout << "[1] Candidato 1" << endl;
        cout << "[2] Candidato 2" << endl;
        cout << "[3] Candidato 3" << endl;
        cout << "[4] Candidato 4" << endl;
        cout << "[5] Nulo" << endl;
        cout << "[6] Branco" << endl;
        cout << "[0] Finalizar Votacao" << endl;
        cout << "Informe sua opcao: ";
        cin >> opc;

        if (opc == 1) { 
            qtd_1++;
            qtd_total++;
        } else if (opc == 2) {
            qtd_2++;
            qtd_total++;
        } else if (opc == 3) {
            qtd_3++;
            qtd_total++;
        } else if (opc == 4) {
            qtd_4++;
            qtd_total++;
        } else if (opc == 5) {
            qtd_nulo++;
            qtd_total++;
        } else if (opc == 6) {
            qtd_branco++;
            qtd_total++;
        } else if (opc == 0) {
            i = 0;
            break;
        } else {
            cout << "Opcao invalida tente novamente" << endl;
        }
        cout << endl; // para pular linha em branco  
    }
    
    cout << "Quantidade de votos do Candidato 1: " << qtd_1 << endl;
    cout << "Quantidade de votos do Candidato 2: " << qtd_2 << endl;
    cout << "Quantidade de votos do Candidato 3: " << qtd_3 << endl;
    cout << "Quantidade de votos do Candidato 4: " << qtd_4 << endl;
    cout << "Quantidade de votos nulos: " << qtd_nulo << endl;
    cout << "Quantidade de votos em branco: " << qtd_branco << endl;
    cout << "Porcentagem de votos nulos: " << qtd_nulo * 100 / qtd_total << "%" << endl;
    cout << "Porcentagem de votos brancos: " << qtd_branco * 100 / qtd_total << "%" << endl;

    return 0;
}