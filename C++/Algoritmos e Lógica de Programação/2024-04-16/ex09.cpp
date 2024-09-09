#include <iostream>
#define N 11

using namespace std;

int main() {
    int idade, i = 0, s_id = 0, p90a15 = 0, alt19 = 0;
    float peso, altura, media_id, perc_alt19;

    while (i < N) {
        cout << "Informe sua idade: ";
        cin >> idade;
        cout << "Informe seu peso: ";
        cin >> peso;
        cout << "Informe sua altura:";
        cin >> altura;
        
        s_id += idade;

        if (peso > 90 && altura < 1.5) {
            p90a15++;
        } else if (idade > 10 && idade <= 30 && altura > 1.9) {
            alt19++;
        }
        i++;
    }

    media_id = (s_id / N);
    perc_alt19 = 100 * alt19 / N;

    cout << "A media das idades das dez pessoas eh " << media_id << endl;
    cout << "A quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50m eh " << p90a15 << endl;
    cout << "A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m eh " << perc_alt19 << " % "<< endl;

    return 0;
}