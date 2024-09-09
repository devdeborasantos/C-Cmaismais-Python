#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int n1, n2, n3, res;

    // Prompt user to enter three numbers
    cout << "Informe o 1o numero: ";
    cin >> n1;
    cout << "Informe o 2o numero: ";
    cin >> n2;
    cout << "Informe o 3o numero: ";
    cin >> n3;

    // Calculate the sum of the numbers
    res = n1 + n2 + n3;

    // Display the result
    cout << "O resultado e: " << res << endl;

    return 0;
}