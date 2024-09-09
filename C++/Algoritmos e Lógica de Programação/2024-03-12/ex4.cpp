#include <iostream>

using namespace std;

main () {
    float n1, n2, resultado;

    cout << "Informe a 1a nota: ";
    cin >> n1;
    cout << "Informe a 2a nota: ";
    cin >> n2;

    resultado = ((n1 * 2) + (n2 * 3)) / 5;

    cout << "A media ponderada das notas eh: " << resultado << endl;
    
    return 0;

}