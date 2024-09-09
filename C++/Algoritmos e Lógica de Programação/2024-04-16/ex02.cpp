#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float preco, fatur, lucro;
    int ingr;

    preco = 5;
    ingr = 120;
    cout << setprecision(2) << fixed;
    cout << "/\tPreco\t/\tIngr\t/\tFatur\t/\tLucro\t/\t" << endl;
    while (preco >= 1) {
        fatur = preco * ingr;
        lucro = fatur - 200;
        cout << "/\t" << preco << "\t/\t" << ingr << "\t/\t" <<  fatur << "\t/\t" << lucro << "\t/\t" << endl;
        preco -= 0.5;
        ingr += 26;   
    }

    return 0;
}