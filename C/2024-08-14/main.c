#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    system("color 6");
    int n1, n2, n3, n4;

    printf("******* MINHA TABUADA! *******\n");
    printf("%2d x %2d = %3d\t%2d x %2d = %3d\n", 2, 1, 2*1, 3, 1, 3*1);
    printf("%2d x %2d = %3d\t%2d x %2d = %3d\n", 2, 2, 2*2, 3, 2, 3*2);
    printf("%2d x %2d = %3d\t%2d x %2d = %3d\n", 2, 3, 2*3, 3, 3, 3*3);
    printf("%2d x %2d = %3d\t%2d x %2d = %3d\n", 2, 4, 2*4, 3, 4, 3*4);
    printf("%2d x %2d = %3d\t%2d x %2d = %3d\n", 2, 5, 2*5, 3, 5, 3*5);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 2, 6, 2*6, 3, 6, 3*6);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 2, 7, 2*7, 3, 7, 3*7);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 2, 8, 2*8, 3, 8, 3*8);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 2, 9, 2*9, 3, 9, 3*9);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n\n", 2, 10, 2*10, 3, 8, 3*10);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 1, 4*1, 5, 1, 5*1);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 2, 4*2, 5, 2, 5*2);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 3, 4*3, 5, 3, 5*3);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 4, 4*4, 5, 4, 5*4);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 5, 4*5, 5, 5, 5*5);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 6, 4*6, 5, 6, 5*6);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 7, 4*7, 5, 7, 5*7);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 8, 4*8, 5, 8, 5*8);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 9, 4*9, 5, 9, 5*9);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", 4, 10, 4*10, 5, 10, 5*10);
    system("pause");
    system("cls");

    system("color 7");
    printf("SUA VEZ... AGORA VOCE INFORMARA QUAL TABUADA QUER VER:\n");
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &n1);
    printf("Digite outro numero para ver sua tabuada: ");
    scanf("%d", &n2);
    printf("Digite mais numero para ver sua tabuada: ");
    scanf("%d", &n3);
    printf("Digite o ultimo numero que deseja ver sua tabuada: ");
    scanf("%d", &n4);
    system("cls");

    printf("=-=-=-=- TABUADA DO USUARIO -=-=-=-=\n");
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 1, n1*1, n2, 1, n2*1);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 2, n1*2, n2, 2, n2*2);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 3, n1*3, n2, 3, n2*3);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 4, n1*4, n2, 4, n2*4);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 5, n1*5, n2, 5, n2*5);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 6, n1*6, n2, 6, n2*6);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 7, n1*7, n2, 7, n2*7);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 8, n1*8, n2, 8, n2*8);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n1, 9, n1*9, n2, 9, n2*9);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n\n", n1, 10, n1*10, n2, 10, n2*10);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 1, n3*1, n4, 1, n4*1);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 2, n3*2, n4, 2, n4*2);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 3, n3*3, n4, 3, n4*3);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 4, n3*4, n4, 4, n4*4);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 5, n3*5, n4, 5, n4*5);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 6, n3*6, n4, 6, n4*6);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 7, n3*7, n4, 7, n4*7);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 8, n3*8, n4, 8, n4*8);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n", n3, 9, n3*9, n4, 9, n4*9);
    printf("%2d x %2d = %2d\t%2d x %2d = %2d\n\n", n3, 10, n3*10, n4, 10, n4*10);
    printf("Obrigada por utilizar nossos programas! Tenha um bom dia! ^.^\n\n");
    system("pause");

    return 0;
}
