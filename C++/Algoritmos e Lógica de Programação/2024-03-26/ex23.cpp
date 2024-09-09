#include <iostream>

using namespace std;

int main() {
    float codigo, qtd, pu, ptn, vd, pf;

    cout << "Informe o codigo do produto (de 1 a 40): ";
    cin >> codigo;

    cout << "Informe a quantidade comprada: ";
    cin >> qtd;

    if ((codigo < 1) | (codigo > 40)){
        // quando usar | colocar cada operação em parenteses
        cout << "Codigo invalido!";
        return 0;
    }
    else if (codigo >= 1 && codigo <= 10)
        pu = 10;
    else if (codigo >= 11 && codigo <= 20)
        pu = 15;
    else if (codigo >= 21 && codigo <= 30)
        pu = 20;
    else {
        pu = 30;
    }

    ptn = pu * qtd;
    if (ptn <= 250)
        vd = 0.05;
    else if (ptn <= 500)
        vd = 0.1;
    else {
        vd = 0.15;
    }

    pf = ptn - (ptn * vd);

    cout << "O preco unitario do produto eh R$" << pu << endl;
    cout << "O preco total da nota eh R$" << ptn << endl;
    cout << "O valor do desconto eh R$" << vd <<  endl;
    cout << "O preco final, apos desconto eh R$" << pf << endl;

return 0;
}