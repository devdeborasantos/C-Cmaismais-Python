#include <iostream>

using namespace std;

int main() {
    float sal;

    cout << "Informe o seu salario: R$ ";
    cin >> sal;

    if (sal <= 300)
        sal = sal * 1.5;
    else if (sal > 300 && sal <= 500)
        sal = sal * 1.4;
    else if (sal <= 700) // pode ser abreviado assim ao inves do escrito logo acima
        sal = sal * 1.3;
    else if (sal <= 800)
        sal = sal * 1.2;
    else if (sal <= 1000)
        sal = sal * 1.1;
    else
        sal = sal * 1.05;

     cout << "Seu novo salario sera de R$ " << sal << endl;

return 0; 
}