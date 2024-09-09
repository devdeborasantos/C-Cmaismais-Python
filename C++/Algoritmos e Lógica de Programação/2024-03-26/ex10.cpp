#include <iostream>

using namespace std;

int main() {
    float pac, cf, pdis, pimp;

    cout << "Informe o preco de fabrica: ";
    cin >> cf;

    if (cf < 12000){
    pdis = cf * 0.05;
    pac = cf + pdis;
    }
    else if (cf < 25000){
    pdis = cf * 0.1;
    pimp = cf * 0.15;
    pac = cf + pdis + pimp;
    }
    else {
    pdis = cf * 0.15;
    pimp = cf * 0.2;
    pac = cf + pdis + pimp;
    }
    
    cout << "O preço ao consumidor eh: R$ " << pac << endl;

return 0;
}