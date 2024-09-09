#include <iostream>
#define N 11

using namespace std;

int main() {
    int num, i, res;

    cout << "Digite um numero:" << endl;
    cin >> num;

    while (i < N) {
        res = num * i;
        cout << num << " x " << i << " = " << res << endl;
        i++;
    }

    return 0;
}