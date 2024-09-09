//Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, determine e mostre
//o vetor intersecção entre eles.

#include <iostream>
#include <ctime>
#define N 10

using namespace std;

int intersc(int num1_f[N], int num2_f[N], int num_igual[N], int& ni) {
    ni = 0;
    for(int i = 0; i < N; i++) {
        if (num1_f[i] == num2_f[i]) {
            num_igual[ni++] = num1_f[i];
        }
    }
}

int main() {
    int num1[N], num2[N], res[N], ni = 0;

    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        num1[i] = rand() % 11; 
        cout << num1[i] << ", "; 
    }
    cout << endl;
    
    for(int i = 0; i < N; i++) {
        num2[i] = rand() % 11; 
        cout << num2[i] << ", "; 
    }
    cout << endl;

    intersc(num1, num2, res, ni);

    cout << "O vetor interseccao possui " << ni << " elementos, sao eles: ";
        for(int i = 0; i < ni; i++) {
            cout << res[i] << ", ";
        }
    cout << endl;

    return 0;
}

// não consegui resolver!!!