#include <iostream>

using namespace std;

main () {
    float sal, novosal;
    cout << "Qual o seu salario?";
    cin >> sal;
    
    novosal = sal * 1.25;

    cout << "Seu novo salario eh R$" << novosal << endl;
    
    return 0;
}