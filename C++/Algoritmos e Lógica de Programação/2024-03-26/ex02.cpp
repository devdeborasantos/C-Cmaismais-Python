#include <iostream>

using namespace std;

int main() {
    float n1, n2, media;

    cout << "Informe suas notas: ";
    cin >> n1 >> n2;

    media = (n1 + n2) / 2;
    cout << "Média final: " << media << endl;

    if (media < 3) 
        cout << "Reprovado ..." << endl;
    else if (media < 7) 
        cout << "Exame ..." << endl;
    else
        cout << "Aprovado ..." << endl;

    return 0;
}