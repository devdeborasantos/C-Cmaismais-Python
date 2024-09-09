#include <iostream>

using namespace std;

main () {
    float preco, novopreco;

    cout << "Qual o preco do produto: ";
    cin >> preco;

    novopreco = preco * 0.9;

    cout << "O produto esta com desconto de 10 por cento e voce pagara apenas: " << novopreco << endl;

    return 0;
}