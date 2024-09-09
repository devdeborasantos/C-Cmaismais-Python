#include <iostream>

using namespace std;

int main() {
    float preco;
    int codigo;
    string proc;

    cout << "Informe o preco do produto: R$";
    cin >> preco;

    cout << "Informe o codigo de origem (de 1 a 30): ";
    cin >> codigo;

    if ((codigo < 1) | (codigo > 30)){
    // quando usar | colocar cada operação em parenteses
        cout << "Codigo invalido!";
        return 0;
    }
    else if (codigo == 1)
        proc = "Sul.";
    else if (codigo == 2)
        proc = "Norte.";
    else if (codigo == 3)
        proc = "Leste.";
    else if (codigo == 4)
        proc = "Oeste.";
    else if ((codigo == 5) | (codigo == 6) | (codigo >= 21 && codigo <= 30))
        proc = "Nordeste.";
    else if (codigo >= 7 && codigo <= 9)
        proc = "Sudeste.";
    else if (codigo >= 10 && codigo <= 20){
        proc = "Centro - oeste.";
    }
    
    cout << "Este produto eh proveniente do " << proc << endl;

return 0;
}