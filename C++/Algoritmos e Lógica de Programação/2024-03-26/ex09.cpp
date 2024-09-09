#include <iostream>

using namespace std;

int main() {
    float saldo, credito; 

    cout << "Informe seu saldo medio: R$ ";
    cin >> saldo;

    if (saldo <= 200)
        credito =  saldo * 0.1;
    else if (saldo <= 300)
        credito = saldo * 0.2;
    else if (saldo <= 400)
        credito = saldo * 0.25;
    else if (saldo > 400)
        credito = saldo * 0.3;

    cout << "O saldo medio eh de R$ " << saldo << " e o valor do credito especial eh de R$ " << credito << endl;

return 0;
}