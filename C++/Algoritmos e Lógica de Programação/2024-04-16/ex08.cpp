#include <iostream>
#define N 6

using namespace std;

int main() {
    float peso, alt, porc_az;
    int idade, i = 0, id50p60 = 0, altinf150 = 0, idaltinf150 = 0, md150 = 0, olhoaz = 0, ruivo = 0, rvnaoaz = 0;
    char olhos, cab;

    while (i < N) {
    cout << "Informe a idade: ";
    cin >> idade;
    cout << "Informe o peso: ";
    cin >> peso;
    cout << "Informe a altura: ";
    cin >> alt;
    cout << "Selecione a cor dos olhos\n[A] Azul\n[P] Preto\n[V] Verde\n[C] Castanho: ";
    cin >> olhos;
    cout << "Selecione a cor dos cabelos\n[P] Preto\n[C] Castanho\n[L] Louro\n[R] Ruivo: ";
    cin >> cab;

    if (idade >= 50 && peso <= 60) {
        id50p60++;
    }

    if (alt < 1.50) {
        altinf150++;
        idaltinf150 += idade;
    }

    switch (olhos) {
        case 'A':
            olhoaz++;
            break;
        case 'P':
            break;
        case 'V':
            break;
        case 'C':           
            break;   
    }

    switch (cab) {
            case 'P':       
                break;
            case 'C':
                break;
            case 'L':
                break;
            case 'R':     
                ruivo++; 
                if (olhos > 1) {
                    rvnaoaz++;
                }     
                break;
        }
    i++;
    }

    md150 = idaltinf150 / altinf150;
    porc_az = olhoaz * 100 / N;

    cout << "A quantidade de pessoas acima de 50 anos e pesando menos de 60kg eh " << id50p60 << endl;
    cout << "A media das idades das pessoas com altura inferior a 1.50m eh " << md150 << endl;
    cout << "A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas eh " << porc_az << endl;
    cout << "A quantidade de pessoas ruivas e que nao possuem olhos azuis eh " << rvnaoaz << endl;

    return 0;
}