#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main() {
    int opcao, lista[TAM], fim = -1, elemento, posicao, i, j;

    do {
        system("cls");

        printf("*** MENU LISTA ORDENADA***\n");
        printf("\n[1] Inserir");
        printf("\n[2] Remover");
        printf("\n[3] Imprimir");
        printf("\n[9] Sair");
        printf("\nEscolha uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:

                if (fim < (TAM - 1)) {
                    printf("Digite o numero que deseja inserir na lista: ");
                    scanf("%d", &elemento);

                    // Encontra a posição
                    for (i = 0; i <= fim; i++){
                        if (elemento < lista[i])
                            break;
                    }

                    // Desloca para poder inserir
                    for (j = fim; j >= i; j--) {
                        lista[j + 1] = lista[j];
                    }

                    lista[i] = elemento;
                    fim++;

                    printf("Elemento %d inserido na posicao %d com sucesso!\n\n", elemento, i);



// ENQUANTO O DA ESQUERDA FOR MENOR DO QUE O QUE EU ESTOU INSERINDO, INSERE NESSA POSIÇÃO

                } else
                    printf("A lista ja esta completa!\n\n");
                system("pause");
                break;

            case 2:
                if (fim == -1) {
                    printf("A lista esta vazia. Primeiro escolha a opcao 1 e preencha a lista.\n");
                } else {
                    printf("Digite a posicao (0 a %d) do numero que deseja remover: ", fim);
                    scanf("%d", &posicao);

                    // Verifica se a posição é válida
                    if (posicao < 0 || posicao > fim) {
                        printf("Posicao invalida! Insira uma posicao entre 0 e %d.\n", fim);
                    } else {
                        // Remove o elemento e move os elementos restantes para a esquerda
                        for (int i = posicao; i < fim; i++) {
                            lista[i] = lista[i + 1];
                        }
                        fim--;
                        printf("Elemento removido da posicao %d com sucesso!\n", posicao);
                    }
                }
                system("pause");
                break;

            case 3:
                printf("\nImprimindo a lista:\n");
                if (fim == -1) {
                    printf("A lista esta vazia.\n");
                } else {
                    for (int i = 0; i <= fim; i++) {
                        printf("%d\t", lista[i]);
                    }
                }
                printf("\n\n");
                system("pause");
                break;

            case 9:
                printf("Programa sera encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                system("pause");
        }

    } while (opcao != 9);

    return 0;
}



/*

LISTA ORDENADA
Insere em ordem (sequência determinada pelo programa) e pode remover de qualquer posição

*/
