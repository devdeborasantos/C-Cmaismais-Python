#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int qtd, i, num, soma=0;

    printf("======== EXERCICIO 1 ========\n");
    printf("Informe quantos numeros deseja somar: ");
    scanf("%d", &qtd);
    printf("\n");

    for (i = 1; i <= qtd; i++){
        printf("Informe o %d# numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
            soma += num;
    }

    printf("\nA somatoria dos numeros pares eh: %d", soma);
    printf("\n\n");
    system("pause");
    system("cls");


    /* ------------------------------------------------------------------------------------------------------------------------- */


    float tot_temp, temp, soma_temp=0, media=0;
    int j;

    printf("======== EXERCICIO 2 ========\n");
    printf("Quantas temperaturas deseja informar? ");
    scanf("%f", &tot_temp);
    printf("\n");

    for (j = 1; j <= tot_temp; j++) {
        printf("Informe a %d# temperatura: ", j);
        scanf("%f", &temp);
        soma_temp += temp;
    }

    media = soma_temp / tot_temp;
    printf("\nA media das temperaturas digitadas eh: %.2f graus", media);
    printf("\n\n");
    system("pause");
    system("cls");



    /* ------------------------------------------------------------------------------------------------------------------------- */


    float soma_num=0.0, v=1.0, n=2.0, d=2.0;
    int p, qtd_num;

    printf("======== EXERCICIO 3 ========\n");
    printf("Informe quantos numeros deseja somar: ");
    scanf("%d", &qtd_num);

    for (p = 1; p <= qtd_num; p++) {
        printf("%0.2f ^ ( %0.2f / %0.2f ) \t + \t", v, n, d);
        soma_num += pow(v,(n/d));
        v++;
        n++;
        d *= 2;
        //S = (1^(2/2)) + (2^(3/4)) + 3^(4/8)
    }

    printf("\n\nA soma dos %d primeiros numeros eh: %.2f", qtd_num, soma_num);
    printf("\n\n");
    system("pause");
    system("cls");


    /* ------------------------------------------------------------------------------------------------------------------------- */


    int f, fat, fatorial=1;

    printf("======== EXERCICIO 4 ========\n");
    printf("Informe o numero que deseja calcular o fatorial: ");
    scanf("%d", &fat);

    for (f = 1; f <= fat; f ++) {
        fatorial *= f;
    }

    printf("\nO fatorial de %d eh: %d", fat, fatorial);
    printf("\n\n");
    system("pause");

    /* 1) Escreva um programa que leia x números (o usuário deve entrar com o valor de x) e, por meio do laço for, o programa retorne a somatória dos números pares digitados.
       2) Escreva um programa que calcule a média de N temperaturas, sendo que o usuário deverá digitar o valor da quantidade de temperaturas que será digitado.
       3) Escreva um programa que calcule a somatória dos N primeiros termos da seguinte série: S = (1^(2/2)) + (2^(3/4)) + 3^(4/8)... (obs: ^= potência)
       4) Escreva um programa para calcular o fatorial de um número. */

    return 0;
}
