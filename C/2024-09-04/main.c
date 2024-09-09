#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

/*
Escreva um programa utilizando o laço do_while em C/C++ que receba o peso e a altura de N pessoas e calcule:

Maior peso
Menor peso
Maior altura
Menor altura
Maior IMC
Menor IMC
Média pesos
Média alturas
Média IMCs
Atenção: O usuário deverá informar o momento que ele deseja parar de digitar os pesos e alturas durante a execução do laço, ou seja, para cada leitura, pergunte ao usuário se ele deseja digitar os dados de mais uma pessoa.

IMC = Peso/Altura^2
*/
    system("color 9");

    int n = 0;
    float peso, altura, imc, maior_peso = -9999, menor_peso = 9999;
    float maior_altura = -9999, menor_altura = 9999, maior_imc = -9999, menor_imc = 9999;
    float media_pesos = 0, media_alturas = 0, media_imcs = 0;
    float soma_pesos = 0, soma_alturas = 0, soma_imcs = 0;
    char opc = 's';

    printf("=-=-=-=-=-=-=-= PESO, ALTURA E IMC =-=-=-=-=-=-=-=\n");

    do {
        n++;
        printf("\nInforme o peso: ");
        scanf("%f", &peso);
        if(peso > maior_peso)
            maior_peso = peso;
        if(peso < menor_peso)
            menor_peso = peso;

        printf("\nInforme a altura: ");
        scanf("%f", &altura);
        if(altura > maior_altura)
            maior_altura = altura;
        if(altura < menor_altura)
            menor_altura = altura;

        imc = peso / (pow(altura, 2));
        if (imc > maior_imc)
            maior_imc = imc;
        if (imc < menor_imc)
            menor_imc = imc;

        soma_pesos += peso;
        soma_alturas += altura;
        soma_imcs += imc;

        // fflush(stdin); // não está servindo pra nada no meu notebook, com ou sem o código executa certo
        printf("\nDeseja continuar?\n[s] sim\n[n] nao\nInforme sua opcao: ");
        scanf(" %c", &opc); // se não der espaço antes do % ele não lê o valor de c
    } while(opc == 's');


    media_pesos = soma_pesos / n;
    media_alturas = soma_alturas / n;
    media_imcs = soma_imcs / n;

    // printf("imc = %0.2f", imc);
    // imc = 22.22 com peso = 50 e altura = 1.50
    printf("\n\n=-=-=-=-=-=-=-= RESULTADOS OBTIDOS: =-=-=-=-=-=-=-=");
    printf("\n\nO maior peso eh %0.2f kg\n", maior_peso);
    printf("O menor peso eh %0.2f kg\n\n", menor_peso);
    printf("A maior altura eh %0.2f m\n", maior_altura);
    printf("A menor altura eh %0.2f m\n\n", menor_altura);
    printf("O maior IMC eh %0.2f\n", maior_imc);
    printf("O menor IMC eh %0.2f\n\n", menor_imc);
    printf("A media dos pesos eh %0.2f kg\n", media_pesos);
    printf("A media das alturas eh %0.2f m\n", media_alturas);
    printf("A media dos IMCs eh %0.2f\n\n", media_imcs);
    system("pause");
    system("cls");


    /* ------------------------------------------------------------------------------------------------------------------------- */


/*
Escreva um programa utilizando o laço while que calcule o fatorial de um número digitado pelo usuário. Fatorial: 5! = 5x4x3x2x1
*/

    system("color 6");
    int i = 1, fat, fatorial = 1;

    printf("=-=-=-=-=-=-=-= FATORIAL COM WHILE =-=-=-=-=-=-=-=\n");
    printf("Informe o numero que deseja calcular o fatorial: ");
    scanf("%d", &fat);

    while (i <= fat) {
        fatorial *= i;
        i++;
    }

    printf("\nO fatorial de %d eh: %d", fat, fatorial);
    printf("\n\n");
    system("pause");
    system("cls");


    /* ------------------------------------------------------------------------------------------------------------------------- */

    system("color 3");
    int i2 = 1, fat2, fatorial2 = 1;

    printf("=-=-=-=-=-=-=-= FATORIAL COM DO-WHILE =-=-=-=-=-=-=-=\n");
    printf("Informe o numero que deseja calcular o fatorial: ");
    scanf("%d", &fat2);

    do {
        fatorial2 *= i2;
        i2++;
    } while (i2 <= fat2);

    printf("\nO fatorial de %d eh: %d", fat2, fatorial2);
    printf("\n\n");
    system("pause");

    return 0;
}
