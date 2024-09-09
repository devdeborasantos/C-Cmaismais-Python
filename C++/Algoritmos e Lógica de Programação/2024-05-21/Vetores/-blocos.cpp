#include <iostream>

using namespace std;

int main() {
    int blocos;

    cout << "Quantos blocos há na sequência? ";
    cin >> blocos;

    if (blocos <= 1) {
        cout << "Número inválido de blocos. Deve haver pelo menos 2 blocos." << endl;
        return 1;
    }

    float peso[blocos];

    for (int b = 0; b < blocos; b++) {
        cout << "Informe o peso do bloco " << b+1 << ": ";
        cin >> peso[b];
        if (peso[b] <= 0) {
            cout << "Peso inválido para o bloco." << endl;;
            return 1;
        }
    }

    cout << endl;
    cout << "Para ser uma sequência válida o bloco acima deve ser mais leve que o bloco abaixo: " << endl;
    
    for (int b = 0; b < blocos - 1; b++) {
        if (peso[b] < peso[b+1]) {
            cout << "A sequência de blocos " << peso[b] << " e " << peso[b+1] <<  " é inválida! Reconstrua essa sequência!" << endl;
            return 1;
        } else 
            cout << "A sequência de blocos " << peso[b] << " e " << peso[b+1] <<  " é válida!"<< endl;
    }

    return 0;
}