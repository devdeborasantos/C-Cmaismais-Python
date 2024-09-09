#include <iostream>
#define N 11

using namespace std;

int main() {
    int num = 1, i, res;

    while (num < N) {
        while (i < N){
            res = num * i;
            cout << num << " x " << i << " = " << res << endl;
            i++;
        }
        num ++;
        i = 0;
        cout << "\n - - - - - - - - - - - - \n" << endl;
    }

    return 0;
}