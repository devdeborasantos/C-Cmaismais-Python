#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 4

int main()
{
    system("cls");

    char opcao;
    int matrizOk = 0, matriz[TAM][TAM];
    int somaTodos = 0, qtdParesDP = 0, maiorDS = -9999;

    printf("***** PROGRAMA 1 *****\n\n");

    do{
        printf("> > > > > > > > > > > MENU DE OPCOES < < < < < < < < < < <\n");
        printf("[A] Registrar dados na matriz\n");
        printf("[B] Imprimir a matriz\n");
        printf("[C] Retornar a somatoria dos elementos da matriz\n");
        printf("[D] Retornar a quantidade de numeros pares da diagonal principal\n");
        printf("[E] Retornar o maior numero da diagonal secundaria\n");
        printf("[F] Sair\n\n");
        printf("Digite a opcao desejada: ");
        fflush(stdin);
        scanf(" %c", &opcao);
        opcao = toupper(opcao);

        system("cls");
        printf("Voce escolheu: %c\n\n", opcao);

        switch (opcao) {
            case 'A':
                printf("A matriz sera composta de 4 linhas e 4 colunas.\n");
                printf("Voce informara ao todo 16 numeros, conforme a ordem abaixo:\n\n");
                for (int linha = 0; linha < TAM; linha++) {
                    for (int coluna = 0; coluna < TAM; coluna++) {
                        printf("Digite o numero da posicao m[%d][%d]: ", linha+1, coluna+1);
                        scanf("%d", &matriz[linha][coluna]);
                    }
                }
                matrizOk = 1;
                printf("\nDados registrados com sucesso!\n\n");
                break;

            case 'B':
                if (matrizOk != 1) {
                   printf("Erro: Primeiro voce deve escolher A e preencher a matriz!\n\n");
                } else {
                    printf("A matriz ficou assim:\n");
                    for (int linha = 0; linha < TAM; linha++) {
                        for (int coluna = 0; coluna < TAM; coluna++) {
                            printf ("%d\t", matriz[linha][coluna]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                break;

            case 'C':
                if (matrizOk != 1) {
                   printf("Erro: Primeiro voce deve escolher A e preencher a matriz!\n\n");
                } else {
                    for (int linha = 0; linha < TAM; linha++) {
                        for (int coluna = 0; coluna < TAM; coluna++) {
                            somaTodos += matriz[linha][coluna];
                        }
                    }
                    printf("A somatoria dos elementos da matriz eh: %d", somaTodos);
                    printf("\n\n");
                }
                break;

            case 'D':
                if (matrizOk != 1) {
                   printf("Erro: Primeiro voce deve escolher A e preencher a matriz!\n\n");
                } else {
                    for (int linha = 0; linha < TAM; linha++) {
                        for (int coluna = 0; coluna < TAM; coluna++) {
                            if (linha == coluna) {
                                if (matriz[linha][coluna] % 2 == 0) {
                                    qtdParesDP += 1;
                                }
                            }
                        }
                    }
                    printf("A quantidade de numeros pares da diagonal principal eh: %d", qtdParesDP);
                    printf("\n\n");
                }
                break;

            case 'E':
                if (matrizOk != 1) {
                   printf("Erro: Primeiro voce deve escolher A e preencher a matriz!\n\n");
                } else {
                    for (int linha = 0; linha < TAM; linha++) {
                        for (int coluna = 0; coluna < TAM; coluna++) {
                            if ((linha + coluna) == 4) {
                                if (matriz[linha][coluna] > maiorDS) {
                                    maiorDS = matriz[linha][coluna];
                                }
                            }
                        }
                    }
                    printf("O maior numero da diagonal secundaria eh: %d", maiorDS);
                    printf("\n\n");
                }
                break;

            case 'F':
                printf("Obrigado por utilizar nossos programas.\n");
                printf("O programa sera finalizado. Ate logo!!!\n\n");
                break;

            default:
                printf("Erro: Opcao invalida. Por favor, escolha uma opcao entre 'A' e 'I'.\n\n");
                break;
        }

    } while (opcao != 'F');

    system("pause");

    return 0;
}

/*
2)Crie um programa com um menu usando o laço "do_while" para trabalhar com uma matriz quadrada de números inteiros, de tamanho definido na constante "TAM" (use #define TAM 4 ou const), por exemplo. O menu deverá ter as seguintes opções:
a)Registrar dados na matriz
b)Imprimir a matriz
c)Retornar a somatória dos elementos da matriz
d)Retornar a quantidade de números pares da diagonal principal
e)Retornar a maior número da diagonal secundária.
f)Sair
*/
