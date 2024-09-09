#include <iostream>
#define N 16

using namespace std;

int main() {
    int i = 0, idade, n_otimo = 0, n_regular = 0, n_bom = 0;
    float med_id_ot = 0, perc_bom;
    char opiniao;

    while (i < N) {
        cout << "Informe sua idade: ";
        cin >> idade;
        cout << "Informe sua opiniao sobre o filme: " << endl;
        cout <<"[O] Otimo \n [B] Bom \n [R] Regular " << endl;
        cin >> opiniao; 

        opiniao = toupper(opiniao);

        if (opiniao == 'O') {
            med_id_ot += idade;
            n_otimo++;
        } else if (opiniao == 'R') {
            n_regular++;
        } else if (opiniao == 'B') {
            n_bom++;
        }
        i++;
    }

    med_id_ot /= N;
    perc_bom = (float)n_bom / N * 100;
    
    cout << "Media das idades das pessoas que responderam otimo: " << med_id_ot << endl;
    cout << "Quantidade de pessoas que responderam regular: " << n_regular << endl;
    cout << "Porcentagem de pessoas que responderam bom: " << perc_bom << "%" << endl;

    return 0;
}