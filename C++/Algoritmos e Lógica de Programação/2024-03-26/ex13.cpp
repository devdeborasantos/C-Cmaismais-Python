#include <iostream>

using namespace std;

int main() {
    float preco, np;
    string classif;

    cout << "Informe o preco do produto: R$ ";
    cin >> preco;

    if (preco <= 50)
        np = preco * 1.05;
    else if (preco > 50 && preco <= 100)
        np = preco * 1.10;
    else 
        np = preco * 1.15;

    if (np <= 80)
        classif = "Barato";
    // sempre declarar com aspas qdo for string, sem aspas não compila!
    else if (np > 80 && np <= 120)
        classif = "Normal";
    else if (np > 120 && np <= 200)
        classif = "Caro";
    else 
        classif = "Muito caro";
        
    cout << "O novo preco do produto eh R$ " << np << " e eh classificado como " << classif << endl;

return 0;
}