#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Informe um número inteiro entre 0 e 99: " << endl;
    cin >> num;

    if((num >= 0 && num <= 99) && (num % 11 == 0)) {
        cout << "Esse numero é uma capicua." << endl;
    } else if((num >= 0 && num <= 99) && (num % 11 != 0)) {
        cout << "Esse numero não é uma capicua." << endl;
    } else {
        cout << "O numero informado é diferente do intervalo entre 0 e 99." << endl;
    }

    return 0;
}