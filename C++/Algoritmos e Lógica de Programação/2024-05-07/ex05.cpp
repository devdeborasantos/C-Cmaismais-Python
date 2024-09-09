//Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.

#include <iostream>

using namespace std;

string pos_neg(int num_f) {
    string res_f;
    if (num_f > 0) {
        res_f = "positivo.";
    } else if (num_f < 0) {
        res_f = "negativo.";
    } else {
        res_f = "nulo.";
    }
    return res_f;
}

int main() {
    int num;
    string res;

    cout << "Informe um numero: ";
    cin >> num;

    res = pos_neg(num);

    cout << "O numero informado eh " << res << endl;

    return 0;
}