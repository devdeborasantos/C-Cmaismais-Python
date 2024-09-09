//Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^Z sem utilizar
//funções ou operadores de potência prontos.

#include <iostream>

using namespace std;

float potencia(int x_f, int z_f) {
    int res_f = 1; //nao pode ser zero pq sempre vai resultar em 0
    //for (int i = 0; i < z_f; i++) { //nao pode ser i <= z_f pois elevaria mais uma vez, aqui pode ser i = 0 pq x ^ 0 = 1
    for (int i = 1; i <= z_f; i++) { //outra forma de escrever
        res_f *= x_f; 
    }
    return res_f;
}

int main() {
    int x, z;
    float res;

    cout << "Informe dois numeros: ";
    cin >> x >> z;

    res = potencia(x, z);

    cout << "O resultado de " << x << " elevado a " << z << " eh: " << res << endl;

    return 0;
}