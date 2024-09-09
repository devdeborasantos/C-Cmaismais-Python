//Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
//parâmetros

#include <iostream>

using namespace std;

float mdc(int num1_f, int num2_f) {
    float res_mdc;
    if (num1_f / num2_f == 0 || num2_f / num1_f == 0) { //se um dividido pelo outro der 0 eles nao tem divisor comum
        res_mdc = 0;
    } else {
    res_mdc = ???
    //não consegui fazer uma formula para MDC
    }
    return res_mdc;
}

int main() {
    int num1, num2;
    float res;

    cout << "Informe 2 numeros: ";
    cin >> num1 >> num2;

    res = mdc(num1, num2);

    cout << "O MDC de " << num1 << " e " << num2 << " eh: " << res << endl;

    return 0;
}