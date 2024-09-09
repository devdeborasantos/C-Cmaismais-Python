// Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
// Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
// ideal = 62.1 *alt − 44.7.

#include <iostream>

using namespace std;

float calc_peso_ideal(float, char);


int main() {
    float alt, p_ideal;
    char sx;

    cout << "Informe sua altura e sexo: ";
    cin >> alt >> sx;

    p_ideal = calc_peso_ideal(alt, sx);
    cout << "Seu peso ideal eh: " << p_ideal << "kg\n";

    return 0;
}

float calc_peso_ideal(float altura, char sexo) {
    if(sexo == 'M'){
        return 72.7 * altura -58;
    } // Toda vez que le o return ele sai da função, por isso não usou else 
    return 62.1 * altura - 44.7;
}
