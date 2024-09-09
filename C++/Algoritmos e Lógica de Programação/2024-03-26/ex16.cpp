#include <iostream>

using namespace std;

int main() {
    float preco, codigo, desc;

    cout << "Informe o preco do produto: R$ ";
    cin >> preco;

    cout << "Informe o codigo do produto: ";
    cin >> codigo;

    if (preco <= 30){
        preco = preco;
        cout << "Produto: " << codigo << " nao esta apto a receber desconto!" << endl;
        return 0;
    }
    else if (preco <= 100){
        desc = preco * 0.1;
        preco = preco * 0.9;
            }
    else {
        desc = preco * 0.15;
        preco = preco * 0.85;
    }
    cout << "Produto: " << codigo << " - recebeu desconto de R$ " << desc << " e o novo preco eh R$ " << preco << endl;

return 0;
}