//Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.

#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int n) {
    return tgamma(n + 1); //formula que pesquisei para calcular fatorial, biblioteca cmath
}

int main() {
    int num;
    cout << "Informe um numero: ";
    cin >> num;

    int resultado = fatorial(num);
    cout << "O fatorial de " << num << " eh: " << resultado << endl;
    
    return 0;
}