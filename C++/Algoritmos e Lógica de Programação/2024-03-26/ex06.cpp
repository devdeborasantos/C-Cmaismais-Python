#include <iostream>
#include <cmath>
// cmath é biblioteca de funçoes matematicas, para poder fazer as raizes (quadrada e cubica) e potencia

using namespace std;

int main() {
    double n1, n2, res1, res2;
    char esc;

    cout << "Informe 2 numeros: ";
    cin >> n1 >> n2;

    cout << "[a] O primeiro numero elevado ao segundo numero" << endl;
    cout << "[b] Raiz quadrada de cada um dos numeros" << endl;
    cout << "[c] Raiz cubica de um cada um dos numeros" << endl;

    cout << "Escolha uma letra: " << endl;
    cin >> esc;
 
    switch (esc){
        case 'a':
            res1 = pow(n1, n2);
    // pow em cmath serve para calcular n1 elevado a n2
            cout << "O resultado eh: " << res1 << endl;
            break;
        case 'b':
            res1 = sqrt(n1);
            res2 = sqrt(n2);
    // sqrt em cmath serve para calcular raiz quadrada
            cout << "A raiz quadrada de " << n1 << " = " << res1 << " e de " << n2 << " = " << res2 << endl;
            break;
        case 'c':
            res1 = cbrt(n1);
            res2 = cbrt(n2);
    // cbrt em cmath serve para calcular raiz cubica 
            cout << "A raiz cubica de " << n1 << " = " << res1 << " e de " << n2 << " = " << res2 << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }
    
return 0;
}