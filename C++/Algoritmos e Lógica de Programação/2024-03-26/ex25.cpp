#include <iostream>

using namespace std;

int main() {
    float hextra, hfalta, H;
    int premio;

    cout << "Informe o numero de horas extras: ";
    cin >> hextra;

    cout << "Informe o numero de horas ausentes: ";
    cin >> hfalta;

    // H na tabela esta em minutos, logo minutos = hora * 60
    H = (hextra * 60) - (2/3 * (hfalta * 60));

    if (H >= 2400) 
        premio = 500;
    else if (H >= 1800 && H < 2400)
        premio = 400;
    else if (H >= 1200 && H < 1800)
        premio = 300;
    else if (H >= 600 && H < 1200)
        premio = 200;
    else {
        premio = 100;
    }
    // Professor, nao sei onde esta o erro mas o premio esta saindo errado
    // Exemplo: hextra = 30, hfalta = 5, resultado = 1600, deveria sair premio 300, mas sai 400
    cout << "O premio obtido eh de R$" << premio << endl;

return 0;
}