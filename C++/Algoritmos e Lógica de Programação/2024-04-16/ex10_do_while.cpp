#include <iostream>
#define N 10

using namespace std;

int main() {
    int i = 0, num, s_par = 0, s_impar = 0;

    do {
        cout << "Informe um numero: ";
        cin >> num;

        if (num % 2 == 0) {
            s_par += num;
        } else {
            s_impar += num;
        }
        ++i;

    } while (i < N);
   
    cout << "A soma dos numeros pares eh " << s_par << " e a soma dos numeros impares eh " << s_impar << endl;
    
    return 0;
}