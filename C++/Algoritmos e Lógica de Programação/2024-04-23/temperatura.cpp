#include <iostream>

using namespace std;

int main() {
    float temp, temp_convertida;
    char opcao;

    cout << "Informe a temperatura: " << endl;
    cin >> temp;
    cout << "Selecione para qual medida deseja converter: \n[C] - Celsius \n[F] - Fahrenheit" << endl;
    cin >> opcao;

    opcao = toupper(opcao);

    if(opcao == 'F') {
        temp_convertida = (temp * 1.8) + 32;
        cout << "A temperatura convertida para Fahrenheit é " << temp_convertida << endl;

    } else {
        temp_convertida = (temp - 32) / 1.8;
        cout << "A temperatura convertida para Celsius é " << temp_convertida << endl;
    }

    return 0; 
}