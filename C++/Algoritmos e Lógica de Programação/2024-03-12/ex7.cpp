#include <iostream>

using namespace std;

main (){
    float p1, pg, pm;
    cout << "Qual o seu peso: ";
    cin >> p1;
    
    pg = p1 * 1.15;
    pm = p1 * 0.8;

    cout << "Se voce engordar 15 por cento pesara: " << pg << " kg. Se voce emagrecer 20 por cento pesara: " << pm << " kg." << endl;

    return 0;
}