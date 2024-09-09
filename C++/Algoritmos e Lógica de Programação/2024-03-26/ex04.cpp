#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, maior;

    cout << "Informe 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2)
        maior = n1;
    else 
        maior = n2;
    
    if (n3 > maior)
        maior = n3;
    
    cout << "O maior numero eh: " << maior << endl;

return 0;
}
