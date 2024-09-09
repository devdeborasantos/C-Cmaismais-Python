#include <iostream>
#define N 5

using namespace std;

int main() {
    float alt, peso, media, porc;
    int id, i = 0, ac50 = 0, id1020 = 0, alt1020 = 0, peso40 = 0;

    while (i < N) {
        cout << "Informe a sua idade: ";
        cin >> id;
        cout << "Informe a sua altura: ";
        cin >> alt;
        cout << "Informe o seu peso: ";
        cin >> peso;
        cout << "- - - - - - - - - - - - - -" << endl;

        if (id > 50) {
            ac50++;
        } else if (id >= 10 && id <=20) {
            id1020++;
            alt1020 += alt;
        }

        if (peso < 40) {
            peso40++;
        }

        i++;
    }

    media = alt1020 / id1020;
    porc = (peso40 / N) * 100;

    cout << "A quantidade de pessoas acima de 50 anos eh" << ac50 << endl;
    cout << "A media das alturas das pessoas entre 10 e 20 anos eh" << media << endl;
    cout << "A porcentagem de pessoas com peso inferior a 40kg entre todas as pessaoas analisadas eh" << porc << "%"<< endl; 

    return 0;

}