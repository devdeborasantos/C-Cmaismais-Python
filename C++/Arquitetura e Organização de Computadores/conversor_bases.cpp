#include <iostream>
#include <string>
#include <cctype> // Para toupper()

using namespace std;

// Função para converter um número de uma base para a base 10
int converterParaBase10(string valor, int base) {
    int resultado = 0;
    int potencia = 1;

    for (int i = valor.length() - 1; i >= 0; i--) {
        char digito = valor[i];
        int valorDigito;
        if (isdigit(digito)) {
            valorDigito = digito - '0';
        } else {
            valorDigito = toupper(digito) - 'A' + 10;
        }
        if (valorDigito >= base) {
            cout << "*** BASE INCORRETA PARA ESSE NUMERO ***" << endl;
            return -1;
        }
        resultado += valorDigito * potencia;
        potencia *= base;
    }

    return resultado;
}

// Função para converter um número da base 10 para outra base
string converterParaOutraBase(int valor, int base) {
    if (valor == 0) {
        return "0";
    }

    string resultado = "";

    while (valor != 0) {
        int resto = valor % base;
        char digito;
        if (resto < 10) {
            digito = resto + '0';
        } else {
            digito = resto - 10 + 'A';
        }
        resultado = digito + resultado;
        valor /= base;
    }

    return resultado;
}

void calcularConversao() {
    string capturaValorInput;
    int capturaBaseInput;
    
    cout << "Informe o valor: ";
    cin >> capturaValorInput;
    cout << "Informe a base: ";
    cin >> capturaBaseInput;

    int resultadoBase10 = converterParaBase10(capturaValorInput, capturaBaseInput);

    if (resultadoBase10 != -1) {
        // Exibir resultados
        cout << "Resultado na base 2: " << converterParaOutraBase(resultadoBase10, 2) << endl;
        cout << "Resultado na base 5: " << converterParaOutraBase(resultadoBase10, 5) << endl;
        cout << "Resultado na base 8: " << converterParaOutraBase(resultadoBase10, 8) << endl;
        cout << "Resultado na base 10: " << resultadoBase10 << endl;
        cout << "Resultado na base 16: " << converterParaOutraBase(resultadoBase10, 16) << endl;
    }
}

int main() {
    calcularConversao();
    return 0;
}
