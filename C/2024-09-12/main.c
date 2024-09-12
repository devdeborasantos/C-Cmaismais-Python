#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char texto[1000];
    int opcao, i;

    // Cria o arquivo e escreve o texto contido no fprintf nele
    arquivo = fopen("texto.txt", "w");
    if (arquivo == NULL) {
        printf("\nProblema ao abrir o arquivo\n\n");
        return 0;
    }
    fprintf(arquivo, "Debora Camila Santos\nRibeirao Preto");
    fclose(arquivo);

    do {
        printf("Menu\n");
        printf("[1] Criptografar texto\n");
        printf("[2] Descriptografar texto\n");
        printf("[3] Mostrar texto\n");
        printf("[9] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();  // Consome o caractere de nova linha após o scanf

        switch (opcao) {
            case 1:  // Criptografar texto
                arquivo = fopen("texto.txt", "r");
                if (arquivo == NULL) {
                    printf("\nProblema ao abrir o arquivo para leitura\n\n");
                    return 0;
                }

                // Leitura do texto do arquivo
                fscanf(arquivo, "%[^\n]", texto); // Lê até a nova linha
                // não sei fazer ler o texto inteiro!
                fclose(arquivo);

                // Criptografia do texto
                for (i = 0; i < strlen(texto); i++)
                    if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z'))
                        texto[i] = texto[i] + 3;
                    else
                        continue;

                // Outra forma de criptografar o texto
                /*for (i = 0; texto[i] != '\0'; i++) {
                    char limite;
                    if (texto[i] >= 'A' && texto[i] <= 'Z') {
                        limite = 'Z';  // Para letras maiúsculas
                    } else if (texto[i] >= 'a' && texto[i] <= 'z') {
                        limite = 'z';  // Para letras minúsculas
                    } else {
                        continue;  // Se não for uma letra, não criptografa
                    }
                    texto[i] = texto[i] + 3;
                    if (texto[i] > limite) {
                        texto[i] -= 26;
                    }
                } */

                // Escrita do texto criptografado no arquivo
                arquivo = fopen("texto.txt", "w");
                if (arquivo == NULL) {
                    printf("\nProblema ao abrir o arquivo para escrita\n\n");
                    return 0;
                }
                fputs(texto, arquivo);
                fclose(arquivo);
                printf("\nTexto criptografado e salvo no arquivo.\n");
                break;

            case 2:  // Descriptografar texto
                arquivo = fopen("texto.txt", "r");
                if (arquivo == NULL) {
                    printf("\nProblema ao abrir o arquivo para leitura\n\n");
                    return 0;
                }

                // Leitura do texto do arquivo
                fscanf(arquivo, "%[^\n]", texto); // Lê até a nova linha
                fclose(arquivo);

                // Descriptografia do texto
                for (i = 0; texto[i] != '\0'; i++) {
                    char limite;
                    if (texto[i] >= 'A' && texto[i] <= 'Z') {
                        limite = 'A';  // Para letras maiúsculas
                    } else if (texto[i] >= 'a' && texto[i] <= 'z') {
                        limite = 'a';  // Para letras minúsculas
                    } else {
                        continue;  // Se não for uma letra, não descriptografa
                    }
                    texto[i] = texto[i] - 3;
                    if (texto[i] < limite) {
                        texto[i] += 26;
                    }
                }

                // Escrita do texto descriptografado no arquivo
                arquivo = fopen("texto.txt", "w");
                if (arquivo == NULL) {
                    printf("\nProblema ao abrir o arquivo para escrita\n\n");
                    return 0;
                }
                fputs(texto, arquivo);
                fclose(arquivo);
                printf("\nTexto descriptografado e salvo no arquivo.\n");
                break;

            case 3:  // Mostrar texto
                arquivo = fopen("texto.txt", "r");
                if (arquivo == NULL) {
                    printf("\nProblema ao abrir o arquivo para leitura\n\n");
                    return 0;
                }

                // Leitura e exibição do texto do arquivo
                while (fscanf(arquivo, "%[^\n]", texto) != EOF) {
                    printf("%s\n", texto);
                    fscanf(arquivo, "%*c"); // Consome o caractere de nova linha após o texto
                }
                fclose(arquivo);
                break;

            case 9:  // Sair
                printf("\nSaindo...\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 9);

    return 0;
}



/*
 1) Escreva um programa que leia um arquivo texto e após a criptografia do arquivo lido escreva o texto criptografado no mesmo arquivo.
 Continue o programa para fazer o contrário (descriptografar um texto gravado em um arquivo).

 Menu
 1 – Criptografar texto
 2 – Descriptografar texto
 3 – Mostrar texto
 9 - Sair

 Cifra de Cesar: deslocar três caracteres para frente no alfabeto.

 Dica:
for (int i=0;i<strlen(nome);i++)
        nome[i]=nome[i]-3;

*/


