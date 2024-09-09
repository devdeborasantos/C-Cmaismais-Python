#include <iostream>

using namespace std;

void tenis(string quadra[4][4], int lx, int cx, int ly, int cy) {
    cout << "Escolha um lugar para o jogador X [0-1][0-3]: ";
    cin >> lx >> cx;
     
    cout << "Escolha um lugar para o jogador Y [2-3][0-3]: ";
    cin >> ly >> cy;
    
    if ((lx < 0 || lx > 1) || (cx < 0 || cx > 3) || (ly < 2 || ly > 3) || (cy < 0 || cy > 3)) {
        cout << "Há valores inválidos para a quadra!" << endl;
        cout << "Respeite o intervalo entre os []" << endl;
        return;
    } 
    
    quadra[lx][cx] = "X ";
    quadra[ly][cy] = "Y ";

    for (int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 4; j++ ) {
            cout << quadra[i][j];
        }
        cout << endl;
    }


    if ((lx < 2 && ly >= 2) || (lx >= 2 && ly < 2)) {
        if ((cx < 2 && cy >= 2) || (cx >= 2 && cy < 2)) {
        cout << "A quadra é válida" << endl;
        } 
    else {
        cout << "A quadra não é válida" << endl;
    }
    }  
}

int main() {
    string jogo[4][4] = {{"O ", "O ", "O ",  "O"},
                         {"O ", "O ", "O ",  "O"},
                         {"O ", "O ", "O ",  "O"},
                         {"O ", "O ", "O ",  "O"}};
    int lx, cx, ly, cy;
    
    for (int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 4; j++ ) {
            cout << jogo[i][j];
        }
        cout << endl;
    }

    tenis(jogo, lx, cx, ly, cy);

    return 0;
}
