#include <iostream>

using namespace std;

int main() {
    float sal;

    cout << "Informe seu salario: R$ ";
    cin >> sal;

    if (sal <= 300)
        sal = sal * 1.35;
    else 
        sal = sal * 1.15;
    
    cout << "Seu novo salario eh de R$ " << sal << endl;

return 0;
}