#include <iostream>
#define N 11

using namespace std;

int main() {
    int num, i = 0, res;

    cout << "Digite um numero:" << endl;
    cin >> num;

    do{ 
        res = num * i;
        cout << num << " x " << i << " = " << res << endl;
        ++i;

    } while (i < N);

    return 0;
}