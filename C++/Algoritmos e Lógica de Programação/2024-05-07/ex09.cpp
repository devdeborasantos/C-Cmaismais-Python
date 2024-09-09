//Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
//desse valor.

#include <iostream>

using namespace std;

int soma_div(int num_f) {
    int res_f = 0;
    for (int i = 1; i <= num_f; ++i) { // i não pode ser zero pq não divide por zero
        if (num_f % i == 0) {
            res_f += i; 
        }
    }
    return res_f;
}

int main() {
    int num, res;

    cout << "Informe um numero: ";
    cin >> num;

    res = soma_div(num);

    cout << "A soma dos divisores de " << num << " eh " << res << endl;

    return 0;
}