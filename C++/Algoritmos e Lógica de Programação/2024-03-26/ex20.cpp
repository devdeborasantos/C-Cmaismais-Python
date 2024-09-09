#include <iostream>

using namespace std;

int main() {
    int idade;
    string cat;
    
    cout << "Informe a idade do nadador: ";
    cin >> idade;

    if (idade < 5) {
        cout << "Categoria invalida para esta modalidade.";
        return 0;
    }
    else if (idade >= 5 && idade <= 7) {
        cat = "Infantil.";
    }
    else if (idade >=8 && idade <= 10) {
        cat = "Juvenil.";
    }
    else if (idade >= 11 && idade <= 15) {
        cat = "Adolescente.";
    }
    else if (idade >= 16 && idade <= 30) {
        cat = "Adulto.";
    }
    else {
        cat = "Senior.";
    }
    
    cout << "A categoria deste nadador eh: " << cat << endl;

return 0;
}