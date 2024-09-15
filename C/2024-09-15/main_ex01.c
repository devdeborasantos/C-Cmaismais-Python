#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para a função TOUPPER ou TOLOWER
#include <windows.h> // Para a função SetConsoleTextAttribute

#define TAM 10

void setConsoleColor(WORD color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


int main()
{
    system("cls");
    setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN); // Branco

    char opcao;
    int i, vetor[TAM], vetorCheio = 0, maior = -9999, menor = 9999;
    int impares = 0, invertido[TAM];


    printf("***** PROGRAMA 1 *****\n\n");

do {
        setConsoleColor(FOREGROUND_GREEN); // Verde
        printf("> > > > > > > > > > > MENU DE OPCOES < < < < < < < < < < <\n");
        setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("[A] Registrar dados no vetor\n");
        printf("[B] Mostrar o vetor\n");
        printf("[C] Dobrar os numeros registrados no vetor\n");
        printf("[D] Imprimir os pares\n");
        printf("[E] Imprimir o maior e menor elemento\n");
        printf("[F] Imprimir a quantidade de numeros impares\n");
        printf("[G] Imprimir os elementos que estao nas posicoes pares\n");
        printf("[H] Copiar os elementos invertidos em um segundo vetor auxiliar e imprimir o vetor auxiliar\n");
        printf("[I] Sair\n\n");
        printf("Digite a opcao desejada: ");
        fflush(stdin);
        scanf(" %c", &opcao);
        opcao = toupper(opcao);

        system("cls");
        printf("Voce escolheu: %c\n\n", opcao);

        switch (opcao) {
            case 'A':
                for (i = 0; i < TAM; i++) {
                    printf("Digite o %d# valor para o vetor: ", i + 1);
                    scanf("%d", &vetor[i]);
                }
                vetorCheio = 1;
                printf("Dados registrados com sucesso!\n\n");
                break;

            case 'B':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    printf("Os dados do vetor sao:\n");
                    for (i = 0; i < TAM; i++) {
                        printf("%d\t", vetor[i]);
                    }
                    printf("\n\n");
                }
                break;

            case 'C':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    printf("Os dados dobrados do vetor sao:\n");
                    for (i = 0; i < TAM; i++) {
                        printf("%d\t", vetor[i] * 2);
                    }
                    printf("\n\n");
                }
                break;

            case 'D':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    printf("Os numeros pares sao:\n");
                    for (i = 0; i < TAM; i++) {
                        if (vetor[i] % 2 == 0) {
                            printf("%d\t", vetor[i]);
                        }
                    }
                    printf("\n\n");
                }
                break;

            case 'E':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    for (i = 0; i < TAM; i++) {
                        if (vetor[i] > maior)
                            maior = vetor[i];
                        if (vetor[i] < menor)
                            menor = vetor[i];
                    }
                    printf("O maior numero eh %d", maior);
                    printf("\nO menor numero eh %d", menor);
                    printf("\n\n");
                }
                break;

            case 'F':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    printf("Os numeros impares sao:\n");
                    for (i = 0; i < TAM; i++) {
                    if (vetor[i] % 2 != 0) {
                        printf("%d\t", vetor[i]);
                        impares++;
                    }
                    }
                    printf("\nHa %d elementos impares!\n", impares);
                    printf("\n\n");
                }
                break;

            case 'G':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    printf("Os numeros que estao nas POSICOES PARES do vetor sao:\n");
                    for (i = 0; i < TAM; i += 2) {
                        printf("%d\t", vetor[i]);
                    }
                    printf("\n\n");
                }
                break;

            case 'H':
                if (vetorCheio != 1) {
                   setConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED);
                   printf("Erro: Primeiro voce deve escolher A e preencher o vetor!\n\n");
                   setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                } else {
                    for (i = 0; i < TAM; i++) {
                        invertido[i] = vetor[TAM - 1 - i];
                    }
                    printf("O vetor invertido eh:\n");
                    for (i = 0; i < TAM; i++) {
                        printf("%d\t", invertido[i]);
                    }
                    printf("\n\n");
                }
                break;

            case 'I':
                setConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
                printf("Obrigado por utilizar nossos programas.\n");
                printf("O programa sera finalizado. Ate logo!!!\n\n");
                setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                break;

            default:
                setConsoleColor(FOREGROUND_RED); // Vermelho
                printf("Erro: Opcao invalida. Por favor, escolha uma opcao entre 'A' e 'I'.\n\n");
                setConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                break;
        }

    } while (opcao != 'I');

    system("pause");

    return 0;
}

/*
1)Crie um programa com um menu usando o laço "do_while" para trabalhar com um vetor de números inteiros, de tamanho definido na constante "TAM" (use #define TAM 10 ou const), por exemplo. O menu deverá ter as seguintes opções:
a)Registrar dados no vetor;
b)Mostrar o vetor;
c)dobrar os números registrados no vetor;
d)Imprimir os pares;
e)Imprimir o maior e o menor elemento;
f)Imprimir a quantidade de números impares
g)Imprimir os elementos que estão nas posições pares.
h)Copiar os elementos invertido em um segundo vetor auxiliar e imprimir o vetor auxiliar.
i)Sair
*/
