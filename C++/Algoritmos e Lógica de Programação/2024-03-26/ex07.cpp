#include <iostream>

using namespace std;

int main(){
    float sal;

    cout << "Informe seu salario: R$ ";
    cin >> sal;

    if (sal < 500){
        sal = sal * 1.3;
        cout << "Seu salario reajustado sera de R$ " << sal << endl;
    }
    else
        cout << "No momento voce nao tem direito a aumento de salario." << endl;

return 0;    
}