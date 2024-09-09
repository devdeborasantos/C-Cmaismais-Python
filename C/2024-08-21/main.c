#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    system("color 1F");

    //EXERCICIO 1:
    printf("* * * EXERCICIO 1 - PROGRAMA MEDIA ALUNOS * * *\n\n");
    float n1, n2, m;

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &n2); // em scanf nunca colocar %.2f

    m = (n1 + n2) / 2;
    printf("\nA media do aluno eh: %.2f", m);

    if (m>=6)
        printf("\nAluno aprovado!");

    else
        if (m<3)
            printf("\nAluno reprovado.");
        else
            printf("\nAluno devera fazer um novo exame.");

    printf("\n\n");
    system("pause");
    system("cls");
    system("color 2F");

    //EXERCICIO 2:
    printf("* * * EXERCICIO 2 - PROGRAMA INTERVALOS NUMERICOS * * *\n\n");

    float num;
    printf("Informe um numero: ");
    scanf("%f", &num);

    printf("\nO numero %.2f esta no(s) intervalo(s):\n", num);
    printf("\t\t[28, 30[ => ");
    if (num >= 28 && num < 30)
        printf("sim");
    else
        printf("nao");

    printf("\n\t]35, 40] ou [90, 100] => ");
    if ((num > 35 && num <= 40) || (num >= 90 && num <= 100))
        printf("sim");
    else
        printf("nao");

    printf("\n 100 ou [200,300] ou ]500, 600[ => ");
    if ((num == 100) || (num >= 200 && num <= 300) || (num > 500 && num < 600))
        printf("sim");
    else
        printf("nao");

    printf("\n\n");
    system("pause");
    system("cls");
        system("color 5F");

    //EXERCICIO 3:
    printf("* * * EXERCICIO 3 - PROGRAMA TRIANGULOS * * *\n\n");
    int l1, l2, l3;
    printf(">>> Vamos brincar de formar triangulos! <<<\n");
    printf("Informe o valor do primeiro lado: ");
    scanf("%d", &l1);
    printf("Informe o valor do segundo lado: ");
    scanf("%d", &l2);
    printf("Informe o valor do terceiro lado: ");
    scanf("%d", &l3);

    if ((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
        printf("\nPerfeito!!! Esses numeros podem formar um triangulo: ");
        if ((l1 == l2) && (l1 == l3))
            printf("equilatero.");
        else if ((l1 != l2) && (l1 != l3) && (l2 != l3))
            printf("escaleno.");
        else
            printf("isosceles.");
    }
    else
    printf("\nInfelizmente nao eh possivel formar um triangulo com esses numeros. Tente novamente!");

    printf("\n\n");
    system("pause");
    system("cls");
    system("color E0");

    //EXERCICIO 4:
    printf("* * * EXERCICIO 4 - PROGRAMA CALCULADORA * * *\n\n");
    int opc;
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    printf("\n");
    printf("Agora selecione como devo calcular:\n");
    printf("[1] Somar\n");
    printf("[2] Subtrair\n");
    printf("[3] Multiplicar\n");
    printf("[4] Dividir\n");
    printf("Digite a opcao escolhida: ");
    scanf("%d", &opc);
    printf("\n");

    /*
    quando usar "%c" deve dar espaço antes do % ou colocar o texto: fflush(stdin) na linha de cima */

    switch (opc) {
        case 1:
            printf("Somando os numeros: %.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Subtraindo os numeros: %.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Multiplicando os numeros: %.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Dividindo os numeros: %.2f / %.2f = %.2f", num1, num2, num1 / num2);
            else
                printf("ERRO! Divisor invalido!");
            break;
        default:
            printf("Opcao invalida! Execute o programa novamente!");
            break;
    }
    printf("\n\n");
    system("pause");
    system("cls");

    return 0;
}

