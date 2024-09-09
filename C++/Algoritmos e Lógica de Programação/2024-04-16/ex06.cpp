#include <iostream>
#define N 15

using namespace std;

int main() {
    float valor, vista, prazo, total, prim;
    int i = 0; 
    char tipo;

        while (i < N) {
            cout << "Informe o codigo\n[V] Vista\n[P] Prazo" << endl;
            cin >> tipo;
            tipo = toupper(tipo);
           
            if (tipo == 'V') {
                cout << "Informe o valor da transacao" << endl; 
                cin >> valor;
                vista = valor + vista;
            } else if (tipo == 'P') { 
                cout << "Informe o valor da transacao" << endl; 
                cin >> valor;
                prazo = valor + prazo;
            }
            i++;
        }

        total = prazo + vista;
        prim = prazo / 3;

        cout << "O valor das compras a vista eh R$ " << vista << endl;
        cout << "O valor das compras a prazo eh R$ " << prazo << endl;
        cout << "O valor total das compras eh R$ " << total << endl;
        cout << "O valor da primeira prestacao das compras a prazo eh R$ " << prim << endl;

    return 0;
}