#include <stdio.h>
#include <stdlib.h>

#define TAM 10


int main()
{

    int opcao, fila[TAM], inicio = 0, fim = -1, elemento;

    do {
        system("cls");

        printf("*** MENU FILA ***\n");
        printf("\n[1] Inserir");
        printf("\n[2] Remover");
        printf("\n[3] Imprimir");
        printf("\n[9] Sair");
        printf("\nEscolha uma opcao: ");
        fflush(stdin);
        scanf(" %d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:

                printf("Digite o numero que deseja inserir na fila: ");
                scanf("%d", &elemento);

                if (fim < (TAM - 1)) {
                    fim++;
                    fila[fim] = elemento;
                    printf("Elemento inserido no FIM com sucesso!\n");
                } else {
                    printf("A fila ja esta completa!\n");
                }

                system("pause");
                break;

            case 2:
                if (inicio > fim) {
                    printf("A fila esta vazia. Primeiro escolha a opcao 1 e preencha a fila.\n");
                } else {
                    printf("Elemento removido do INÍCIO: %d\n", fila[inicio]);
                    inicio++;
                    printf("Elemento removido com sucesso!\n");
                }
                system("pause");
                break;

            case 3:
                printf("\nImprimindo a fila do TOPO para a BASE:\n");
                for (int i = fim; i >= inicio; i--) {
                    printf("%d\t", fila[i]);
                }
                system("pause");
                break;

            case 9:
                printf("Programa sera encerrado!\n");

        }

    } while (opcao != 9);

    system("pause");

    return 0;

}

/*
FILA:
insere no fim e remove no começo
ex: para inserir 1 > 2 > 3 > 4
para remover: 1 > 2 > 3 > 4
*/
