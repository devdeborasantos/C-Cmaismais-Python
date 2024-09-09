//OBS: EXERCÍCIOS 1, 6, 15, 16 FORAM RESOLVIDOS EM SALA!

//Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
//e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.

#include <iostream>

using namespace std;

float soma_seg(int hora_f, int min_f, int seg_f) {
    if(hora_f > 0 || min_f > 0 || seg_f > 0) {
        min_f = min_f + hora_f * 60;
        seg_f = seg_f + min_f * 60;
    }
    return seg_f;
}

int main() {
    int hora, min, seg;
    float res_seg;

    cout << "Informe horas, minutos e segundos (digite apenas numeros conforme exemplo: 15 30 45): ";
    cin >> hora >> min >> seg;

    res_seg = soma_seg(hora, min, seg);

    cout << "O tempo informado convertido em segundos eh: " << res_seg << " s." << endl;

    return 0;

}