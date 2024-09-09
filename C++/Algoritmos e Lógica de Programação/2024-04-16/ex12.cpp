#include <iostream>
#define N 10

using namespace std;

int main() {
    int i = 0, num, primos = 0;

    while (i < N) {
        cout << "Informe um numero: ";
        cin >> num;
        
        if ((num % 2 == 0 && num != 2) || (num % 3 == 0 && num != 3) || (num % 5 == 0 && num != 5) || (num % 7 == 0 && num != 7)) {
            
        } else if (num % num == 0 && num % 1 == 0) {
            primos++;
        }
        i++;
    }

    cout << "A quantidade de numeros primos eh " << primos << endl;

    return 0;
}