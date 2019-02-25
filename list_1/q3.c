#include <stdio.h>

/**
 * Escreva um programa que receba três notas de um aluno
 * e verifique sua situação no semestre. Média artimética
 * das três notas. As situações possíveis são: 
 *  ■ Se media >= 7.0, aprovado!
 *  ■ Se media >= 5.0, e nenhuma nota < 3.0, aprovado!
 *  ■ Se media < 3.0, reprovado!
 *  ■ Senão, reposição! 
 */

int main()
{
    int n1, n2, n3;

    printf("Informe a Nota 1: ");
    scanf("%d", &n1);

    printf("Informe a Nota 2: ");
    scanf("%d", &n2);

    printf("Informe a Nota 3: ");
    scanf("%d", &n3);

    int media = (n1 + n2 + n3) / 3;

    if (media >= 7)
    {
        printf("Aprovado!\n");
    }
    else if (media >= 5 && n1 >= 3 && n2 >= 3 && n3 >= 3)
    {
        printf("Aprovado!\n");
    }
    else if (media < 3)
    {
        printf("Reprovado!\n");
    }
    else
    {
        printf("Reposição!\n");
    }
}