#include <iostream>
#define N 11

using namespace std;

int main() {
    int num, i, res;

    cout << "Digite um numero:" << endl;
    cin >> num;

    for (i = 0; i < N; ++i) {
        res = num * i;
        cout << num << " x " << i << " = " << res << endl;
    }

    return 0;
}