#include <iostream>
#define N 8

using namespace std;

int main() {
    int i = 0, idade, qtd1, qtd2, qtd3, qtd4, qtd5, porc1, porc5;
    qtd1 = 0;
    qtd2 = 0;
    qtd3 = 0;
    qtd4 = 0;
    qtd5 = 0;

    while (i < N) {
        cout << "Qual a idade?" << endl;
        cin >> idade;
        if (idade <= 15) {
            qtd1++;
        } else if (idade > 15 && idade <= 30) {
            qtd2++;
        } else if (idade > 30 && idade <= 45) {
            qtd3++;
        } else if (idade > 55 && idade <= 60) {
            qtd4++;
        } else {
            qtd5++;
        }
        i++;

    }

    porc1 = 100 * (qtd1 / N);
    porc5 = 100 * (qtd5 / N);

    cout << "Quantidade de pessoas ate 15 anos: " << qtd1 << endl;
    cout << "Quantidade de pessoas entre 16 e 30 anos: " << qtd2 << endl;
    cout << "Quantidade de pessoas entre 31 e 45 anos: " << qtd3 << endl;
    cout << "Quantidade de pessoas entre 46 e 60 anos: " << qtd4 << endl;
    cout << "Quantidade de pessoas acima de 60 anos: " << qtd5 << endl;
    cout << "Porcentagem de pessoas ate 15 anos: " << porc1 << " % "<< endl;
    cout << "Porcentagem de pessoas entre 16 e 30 anos: " << porc5 << " % "<< endl;

    return 0;
}