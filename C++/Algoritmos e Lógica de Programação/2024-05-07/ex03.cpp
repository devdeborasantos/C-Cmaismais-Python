//Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
//divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.

#include <iostream>

using namespace std;

int divisor(int num1_f, int num2_f) {
    if(num1_f % num2_f == 0) { 
        return 0;
    } else {
        int res_f;
        res_f = num1_f; // nao encontrei uma formula; coloquei que o prox divisor é o proprio numero
        return res_f;
    }
}

int main() {
    int num1, num2, res;

    cout << "Informe 2 numeros: ";
    cin >> num1 >> num2;

    res = divisor(num1, num2);

    if (res == 0) {
        cout << "O numero " << num1 << " eh divisivel por " << num2 << endl;
    } else {
        cout << "O proximo divisor de " << num1 << " eh " << res << endl;
    }
   
    return 0;
}