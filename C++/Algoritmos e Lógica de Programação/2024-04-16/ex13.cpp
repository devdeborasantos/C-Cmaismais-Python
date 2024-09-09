#include <iostream>
#define N 16

using namespace std;

int main() {
    int i = 0, idade;
    float peso, fx0 = 0, fx10 = 0, fx20 = 0, fx30 = 0;
    float md0, md10, md20, md30;

    while (i < N) {
        cout << "Informe sua idade: ";
        cin >> idade;
        cout << "Informe seu peso: ";
        cin >> peso;

        if (idade >= 1 && idade <= 10) {
            fx0 += peso;
        } else if (idade >= 11 && idade <= 20) {
            fx10 += peso;
        } else if (idade >= 21 && idade <=30) {
            fx20 += peso;
        } else {
            fx30 += peso;
        }
        i++;
    }
    md0 = fx0 / N;
    md10 = fx10 / N;
    md20 = fx20 / N;
    md30 = fx30 / N;

    cout << "A media de peso da faixa etaria de 1 a 10 anos eh " << md0 << " kg." << endl;
    cout << "A media de peso da faixa etaria de 11 a 20 anos eh " << md10 << " kg." << endl;
    cout << "A media de peso da faixa etaria de 21 a 30 anos eh " << md20 << " kg." << endl;
    cout << "A media de peso da faixa etaria de 31 ou mais anos eh " << md30 << " kg." << endl;

    return 0;
}