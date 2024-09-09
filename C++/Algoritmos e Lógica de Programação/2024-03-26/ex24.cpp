#include <iostream>

using namespace std;

int main() {
    float preco, aumento, imposto, novopreco;
    string categoria, situacao, classificacao;
 
    cout << "Informe o preco do produto: R$";
    cin >> preco;

    cout << "[1] Limpeza" << endl;
    cout << "[2] Alimentacao" << endl;
    cout << "[3] Vestuario" << endl;
    cout << "Informe a categoria do produto: ";
    cin >> categoria;

    if ((categoria != "1" ) && (categoria != "2") && (categoria != "3")){
            cout << "Categoria invalida";
            return 0;
    }

    cout << "[r] Produto que necessita de refrigeracao" << endl;
    cout << "[n] Produto que nao necessita de refrigeracao" << endl;
    cout << "Informe a situacao do produto: ";
    cin >> situacao;

    if ((situacao != "r" ) && (situacao != "n")){
            cout << "Situacao invalida";
            return 0;
    }

    if (preco <= 25){
        if (categoria == "1") {
            aumento = preco * 0.05;
        }
        else if (categoria == "2") {
            aumento = preco * 0.08;
        }
        else {
            aumento = preco * 0.1;
        }

    }
    
    else {
        if (categoria == "1") {
            aumento = preco * 0.12;
        }
        else if (categoria == "2") {
            aumento = preco * 0.15;
        }
        else {
            aumento = preco * 0.18;
        }
    }
 
    if ((categoria == "2") | (situacao == "r")){
        imposto = preco * 0.05;
    }
    else {
        imposto = preco * 0.08;
    }

    novopreco = (preco + aumento) - imposto;

    if (novopreco <= 50){
        classificacao = "Barato.";
    }
    else if (novopreco > 50 && novopreco < 120){
        classificacao = "Normal.";
    }
    else {
        classificacao = "Caro.";
    }

    cout << "O valor do aumento foi de R$" << aumento << endl;
    cout << "O valor do imposto foi de R$" << imposto << endl;
    cout << "O novo preco eh de R$" << novopreco << endl;
    cout << "O produto eh classificado como: " << classificacao << endl;

return 0;
}