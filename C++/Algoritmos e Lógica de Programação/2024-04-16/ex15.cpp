#include <iostream>
#define N 11

using namespace std;

int main() {
    int i = 0, sexo, opin, tot_h = 0, m_sim = 0, tot_sim = 0, h_nao = 0, tot_nao = 0;
    float perc_h_nao;

    while (i < N) {
        cout << "Informe o sexo: " << endl;
        cout << "[1] Homem " << endl;
        cout << "[2] Mulher " << endl;
        cin >> sexo;
        cout << "Voce gostou do produto: " << endl;
        cout << "[1] Sim " << endl;
        cout << "[2] Nao " << endl;
        cin >> opin;

        if (sexo == 1) {
            if (opin == 1) {
                tot_h++;
                tot_sim++;
            } else {
                h_nao++;
                tot_h++;
                tot_nao++;
            }
        } else {
            if (opin == 1) {
                m_sim++;
                tot_sim++;
            }else {
                tot_nao++;
            }
        }
        i++;
    } 

    if (tot_h > 0) {
        perc_h_nao = (h_nao * 100 / tot_h);
    } else {
        perc_h_nao = 0;
    }

    cout << "O numero de pessoas que responderam sim eh: " << tot_sim << endl;
    cout << "O numero de pessoas que responderam nao eh: " << tot_nao << endl;
    cout << "O numero de mulheres que responderam sim eh: " << m_sim << endl;
    cout << "A porcentagem de homems que responderam nao, em relacao ao total de homens, eh: " << perc_h_nao << " % " << endl;

    return 0;
}