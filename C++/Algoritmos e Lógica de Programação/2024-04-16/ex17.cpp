#include <iostream>

using namespace std;

int main() {
    int i = 1, canal, pessoas;
    float total_pessoas = 0, tc4 = 0, tc5 = 0, tc7 = 0, tc12 = 0, perc_4, perc_5, perc_7, perc_12;

    while (i > 0){
        cout << "Informe o numero do canal que esta assistindo: " << endl;
        cout << "[4] Canal 4" << endl;
        cout << "[5] Canal 5" << endl;
        cout << "[7] Canal 7" << endl;
        cout << "[12] Canal 12" << endl;
        cin >> canal;
        cout << "Informe quantas pessoas estao assistindo o canal " << canal << " : ";
        cin >> pessoas;
        
        if (canal == 4) {
            tc4 += pessoas;
            total_pessoas += pessoas;
        } else if (canal == 5) {
            tc5 += pessoas;
            total_pessoas += pessoas;
        } else if (canal == 7) {
            tc7 += pessoas;
            total_pessoas += pessoas;
        } else if (canal == 12) {
            tc12 += pessoas;
            total_pessoas += pessoas;
        }

        cout << "Para continuar a pesquisa digite qualquer numero diferente de zero " << endl;
        cin >> i;  
    }
    perc_4 = tc4 * 100 / total_pessoas;
    perc_5 = tc5 * 100 / total_pessoas;
    perc_7 = tc7 * 100 / total_pessoas;
    perc_12 = tc12 * 100 / total_pessoas;

    cout << "A porcentagem de pessoas assistindo o canal 04: " << perc_4 << "%" << endl;
    cout << "A porcentagem de pessoas assistindo o canal 05: " << perc_5 << "%" << endl;
    cout << "A porcentagem de pessoas assistindo o canal 07: " << perc_7 << "%" << endl;
    cout << "A porcentagem de pessoas assistindo o canal 12: " << perc_12 << "%" << endl;

    return 0;
}