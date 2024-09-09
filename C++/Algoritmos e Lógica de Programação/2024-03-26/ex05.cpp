#include <iostream>

using namespace std;

int main() {
    float n1, n2, maior, menor, esc, res;

    cout << "Informe 2 numeros: ";
    cin >> n1 >> n2;
    
    cout << "[1] Media entre os numeros digitados" << endl;
    cout << "[2] Diferenca do maior pelo menor" << endl;
    cout << "[3] Produto entre os numeros digitados" << endl;
    cout << "[4] Divisao do primeiro pelo segundo" << endl;

    cout << "Escolha uma opcao: ";
    cin >> esc;

    if (n1 > n2){
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }

    if (esc < 1 && esc > 4)
        cout << "Opção invalida." << endl;

    if (esc == 1) 
        res = (n1 + n2)/2;
    else if (esc == 2)
        res = maior - menor;
    else if (esc == 3)
        res = n1 * n2;
    else if (esc == 4 && n2 > 0)
        res = n1 / n2;
    else
        cout << "Impossivel dividir algo por zero." << endl;


    cout << "O resultado final eh: " << res << endl;

return 0;
}