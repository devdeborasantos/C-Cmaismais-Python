#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Informe 2 numeros:";
    cin >> n1 >> n2;

    if (n1 < n2)
        cout << "O menor numero eh: " << n1 << endl;
    else
        cout << "O menor numero eh: " << n2 << endl;

return 0;
}