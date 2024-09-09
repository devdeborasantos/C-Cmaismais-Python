//Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas
//dos três lados de um triângulo.
//Elabore sub-rotinas para:
//■ determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
//lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).
//■ determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas formem
//um triângulo.
//Todas as mensagens deverão ser mostradas no programa principal.

#include <iostream>

using namespace std;

void forma_triang(int l1, int l2, int l3) {
    if (l1 <= l2 + l3 && l2 <= l1 + l3 && l3 <= l1 + l2) {
        cout << "Esses numeros formam um triangulo";
            if (l1 == l2 && l1 == l3) {
                cout << " equilatero.";
            } else if (l1 != l2 & l1 != l3 && l2 !=l3) {
                cout << " escaleno.";
            } else {
                cout << " isosceles.";
            }
    } else {
        cout << "Impossivel formar um triangulo com esses numeros!";
    }
}

int main() {
    int l1, l2, l3;

    cout << "Informe 3 numeros: ";
    cin >> l1 >> l2 >> l3;

    forma_triang(l1, l2, l3);

    return 0;
}