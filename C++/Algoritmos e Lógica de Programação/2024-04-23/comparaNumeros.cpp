#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Informe 3 numeros: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 == n2 && n2 == n3)
        cout << "Os tres numeros sao iguais." << endl;

    else if (n1 == n2 || n1 == n3 || n2 == n3)
        cout << "Há dois numeros iguais" << endl;
    
    else 
        cout << "Os tres numeros sao diferentes" << endl;

    return 0;
}