#include <iostream>

using namespace std;

main () {
    int n1, n2, resultado;

    cout << "Informe o 1o numero: ";
    cin >> n1;
    cout << "Informe o 2 numero: ";
    cin >> n2;
    
    resultado = n1 / n2;

    cout << "O resultado da divisao do primeiro numero pelo segundo numero eh: " << resultado << endl;
    
    return 0;
}