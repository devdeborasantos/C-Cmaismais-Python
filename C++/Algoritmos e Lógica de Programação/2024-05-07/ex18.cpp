//Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

#include <iostream>
#include <ctime>
#define N 10

using namespace std;

int primos(int num) {
    if ((num % 2 == 0 && num != 2) || (num % 3 == 0 && num != 3) || (num % 5 == 0 && num != 5) || (num % 7 == 0 && num != 7)) {
        return 0;
    } else if (num % num == 0 && num % 1 == 0) {
        return 1;
    }
}

void primos_100() {
    int np = 0;
    for (int num = 101; np < 3; ++num) {
        if (primos(num)) {
            cout << num << " ";
            np++;
        }
    }
}

int main() {

    cout << "Os 3 primeiros numeros primos acima de 100 sao: ";
    primos_100();
    cout << endl;
    
    return 0;
}