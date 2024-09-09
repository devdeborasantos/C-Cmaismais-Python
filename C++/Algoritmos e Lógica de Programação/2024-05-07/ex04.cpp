//Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
//o seu volume: v = 4/3 * R^3.

#include <iostream>
#include <cmath>

using namespace std;

float volume(float raio_f) {
    float res_f;
    res_f = 4.00 / 3.00 * pow(raio_f, 3);
    return res_f;
}

int main() {
    float raio, res;

    cout << "Informe o raio da esfera: ";
    cin >> raio;

    res = volume(raio);

    cout << "O volume da esfera eh " << res << endl;

    return 0;
}