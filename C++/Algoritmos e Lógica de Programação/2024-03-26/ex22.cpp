#include <iostream>

using namespace std;

int main() {
    int idade, risco;
    float peso;

    cout << "Informe sua idade: ";
    cin >> idade;

    cout << "Informe seu peso: ";
    cin >> peso;

    if (idade < 20){
        if (peso <= 60)
            risco = 9;
        else if (peso <= 90)
            risco = 8;
        else
            risco = 7;
    }
    else if (idade <= 50){
        if (peso <= 60)
            risco = 6;
        else if (peso <= 90)
            risco = 5;
        else
            risco = 4;
    }
    else {
        if (peso <= 60)
            risco = 3;
        else if (peso <= 90)
            risco = 2;
        else
            risco = 1;
    }

    cout << "Voce se encaixa no grupo de risco: " << risco << endl;

return 0;
}