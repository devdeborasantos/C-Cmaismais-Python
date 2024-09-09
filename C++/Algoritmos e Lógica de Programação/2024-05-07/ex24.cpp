//Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor. O
//programa deverá calcular e mostrar a maior e a menor temperatura do ano, junto com o mês em que elas
//ocorreram (o mês deverá ser mostrado por extenso: 1 = janeiro; 2 = fevereiro; ...).
//Observação
//Não se preocupe com empates. Cada cálculo deve ser realizado e mostrado em uma sub-rotina.

#include <iostream>
#include <ctime>
#define N 12
using namespace std;

float maior(float media_temp[]) {
    float maior_temp = 0.0;
    for (int i = 0; i < N; i++) {
        if (media_temp[i] > maior_temp){
            maior_temp = media_temp[i];
        }
    }
    return maior_temp;
}

float menor(float media_temp[]) {
    float menor_temp = 50.0;
    for (int i = 0; i < N; i++) {
        if (media_temp[i] < menor_temp){
            menor_temp = media_temp[i];
        }
    }
    return menor_temp;
}

 string nome_mes(int mes) {
    if (mes == 1) {
        return "janeiro";
    } else if (mes == 2) {
        return "fevereiro";
    } else if (mes == 3) {
        return "março";
    } else if (mes == 4) {
        return "abril";
    } else if (mes == 5) {
        return "maio";
    } else if (mes == 6) {
        return "junho";
    } else if (mes == 7) {
        return "julho";
    } else if (mes == 8) {
        return "agosto";
    } else if (mes == 9) {
        return "setembro";
    } else if (mes == 10) {
        return "outubro";
    } else if (mes == 11) {
        return "novembro";
    } else if (mes == 12) {
        return "dezembro";
    }
 }

int main() {
   float media_temp[N], maior_temp, menor_temp;
    int mes_maior, mes_menor;

    srand(time(NULL));
    for(int i = 0; i < N; i ++) {
        media_temp[i] = rand() % 50; 
    }   
    for (int i = 0; i < N; ++i) {
        cout << "Mes " << i + 1 << ": " << media_temp[i] << "C" << endl;
    }

    maior_temp = maior(media_temp);
    menor_temp = menor(media_temp);
  
    for (int i = 0; i < N; ++i) {
        if (media_temp[i] == maior_temp) {
            mes_maior = i + 1;
            break;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (media_temp[i] == menor_temp) {
            mes_menor = i + 1;
            break;
        }
    }

    cout << "A maior temperatura do ano foi de " << maior_temp << "C e ocorreu em " << nome_mes(mes_maior) << endl;
    cout << "A menor temperatura do ano foi de " << menor_temp << "C e ocorreu em " << nome_mes(mes_menor) << endl;
    
    return 0;
}