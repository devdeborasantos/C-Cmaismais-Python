#include <iostream>

using namespace std;

int main() {
    int sal;

    cout << "Informe o seu salario atual: ";
    cin >> sal;

    if (sal <= 300)
        sal = sal * 1.15;
    else if (sal < 600)
        sal = sal * 1.10;
    else if (sal <= 900)
        sal = sal * 1.05;
    else
        sal = sal;

    cout << "Seu novo salario eh: R$ " << sal << endl;
    
return 0;
}