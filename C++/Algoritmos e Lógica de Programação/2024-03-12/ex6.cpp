#include <iostream>

using namespace std;

main () {
    float sal1, cv, novosal;

    cout << "Qual o seu salario fixo: ";
    cin >> sal1;
    cout << "Quanto voce realizou de vendas este mes: ";
    cin >> cv;

    novosal = sal1 + (cv * 0.04);

    cout << "Seu salario final eh: " << novosal << endl;
     
    return 0;
}