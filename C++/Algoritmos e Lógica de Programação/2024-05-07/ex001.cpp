//Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números
//inteiros existentes entre o número 1 e N (inclusive).

#include <iostream>

using namespace std;

int soma_numero(int n) {
    int s;
    for(s = 0; n > 0; n--)
    s += n;
    return s;
}

int main(){
    int num, res_soma;

    cout << "Informe um numero: ";
    cin >> num;

    res_soma = soma_numero(num);

    cout << res_soma << endl;

    return 0;
}