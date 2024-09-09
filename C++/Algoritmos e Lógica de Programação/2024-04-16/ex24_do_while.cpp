#include <iostream>

using namespace std;

int main() {
    int valor = 1, maior, menor;

    do {
        cout << "Digite um valor ou digite 0 para finalizar o programa: ";
        cin >> valor;            
        if (valor == 0) {           
            valor = 0;
            break;
        }
        if (valor > 0) {        
            if (valor > maior) {
                maior = valor; 
            }
            if (valor < menor) {
                menor = valor;
            }
        } else {
            cout << "Desculpe valores negativos nao sao aceitos neste programa, tente novamente." << endl;
            cout << endl;
        }

    } while (valor != 0);

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}