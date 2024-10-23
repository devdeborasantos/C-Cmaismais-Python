#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{

    int opcao, pilha[TAM], fim = -1, elemento, i; // fim é o topo

    do {
        system("cls");

        printf("*** MENU PILHA ***\n");
        printf("\n[1] Push");
        printf("\n[2] Pop");
        printf("\n[3] Imprimir");
        printf("\n[9] Sair");
        printf("\nEscolha uma opcao: ");
        fflush(stdin);
        scanf(" %d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:

                printf("Digite o numero que deseja inserir na pilha: ");
                scanf("%d", &elemento);

                if (fim < (TAM - 1)){
                /* poderia ser tambem: if (fim <= (TAM - 2)){ */
                    fim ++;
                    pilha[fim] = elemento;
                } else {
                    printf("A pilha ja esta completa!");
                }
                printf("Elemento %d inserido no TOPO com sucesso!\n", elemento);
                system("pause");
                break;

            case 2:
                if (fim == -1)
                    printf("A pilha esta vazia. Primeiro escolha a opcao 1 e preencha a pilha.");

                if (fim >= 0) {
                    fim --;
                }
                printf("Elemento do TOPO removido com sucesso!\n");
                system("pause");
                break;

            case 3:
                printf("\nImprimindo a pilha do TOPO para a BASE:\n");
                for (i = fim; i >= 0; i--) {
                    printf("%d\n", pilha[i]);
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
PILHA:
insere no fim e remove no fim
ex: para inserir 1 > 2 > 3 > 4
para remover: 4 > 3 > 2 > 1
*/
