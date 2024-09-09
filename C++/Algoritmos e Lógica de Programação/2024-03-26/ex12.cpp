#include <iostream>

using namespace std;

int main() {
    float sb, vr;

    cout << "Informe seu salario bruto: R$ ";
    cin >> sb;

    if (sb <= 350)
        vr = (sb + 100) - (sb * 0.07);
    else if (sb > 350 && sb < 600)
        vr = (sb + 75) - (sb * 0.07);
    else if (sb >= 600 && sb <= 900)
        vr = (sb + 50) - (sb * 0.07);
    else if (sb > 900)
        vr = (sb + 35) - (sb * 0.07);

    cout << "Voce recebera o valor de R$ " << vr << endl;

return 0;
}