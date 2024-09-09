#include <iostream>

using namespace std;

int intersec(int vet1[], int vet2[], int inter[], int n) {
    int q = 0;
    for (int i = 0; i < n; i++) {
        cout << "Informe o " << i+1 << "º valor do vetor 1: ";
        cin >> vet1[i];
    }

    string dec(40, '*');
    cout << dec << endl;

    for (int j = 0; j < n; j++) {
        cout << "Informe o " << j+1 << "º valor do vetor 2: ";
        cin >> vet2[j];
    }

    cout << dec << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((vet1[i] == vet2[j]) && (vet1[i] % 3 == 0)) {
                inter[q] = vet1[i];
                q++;
            }
        }
    }
    
    return q;

}

int main() {
    int num;

    cout << "Quantos números deseja fornecer para cada vetor? ";
    cin >> num;
    
    int res, vet1[num], vet2[num], inter[num];

    res = intersec(vet1, vet2, inter, num);

    cout << "Os valores de intersecção e múltiplos de 3 são: ";
    for (int i = 0; i < res; i++) {
        cout << inter[i] << " ";
    }
    cout << endl;


    return 0;
}