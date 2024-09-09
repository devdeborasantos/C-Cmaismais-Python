#include <iostream>

using namespace std;

main () {

    int n1, n2, n3, resultado;
    
    cout << "Informe o 1o numero: ";
    cin >> n1;
    cout << "Informe o 2o numero: ";
    cin >> n2;
    cout << "Informe o 3o numero: ";
    cin >> n3;

    resultado = n1 * n2 * n3;

    cout << "O resultado da multiplicacao desses numeros eh:" << resultado << endl;

    return 0;
}