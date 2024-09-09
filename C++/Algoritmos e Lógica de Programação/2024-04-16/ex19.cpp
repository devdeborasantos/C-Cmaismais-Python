#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int i = 1,  qtd_1000 = 0, qtd_200 = 0;
    float p_venda, p_compra, lucro, lucro_total = 0;
    char acao;
    string lucro_string;
    stringstream buffer;

    lucro_string = "Lucro das acoes";

    while (i > 0) {
        cout << "Digite a letra que representara sua acao ou digite F para finalizar: ";
        cin >> acao;
        if (acao == 'F' || acao == 'f') {
            break;
        }

        cout << "Informe o preco de compra: R$";
        cin >> p_compra;
        cout << "Informe o preco de venda: R$";
        cin >> p_venda;

        lucro = p_venda - p_compra;
        
        lucro_total += lucro;
        
        if (lucro > 1000) {
            qtd_1000++;
        } else if (lucro < 200){
            qtd_200++;
        }

        buffer << "Acao: " << acao ;
        buffer << " Lucro: " << lucro << endl;

        lucro_string = buffer.str();
    }

    cout << lucro_string << endl;
    cout << "A quantidade de acoes com lucro superior a R$1000 eh: " << qtd_1000 << endl;
    cout << "A quantidade de acoes com lucro inferior a R$200 eh: " << qtd_200 << endl;
    cout << "O lucro total da empresa eh R$" << lucro_total << endl;

    return 0;
}