#include <stdio.h>

/**
 * Escreva um programa que leia o número de um funcionário,
 * seu número de horas trabalhadas, o valor que recebe por
 * hora e calcula o salário desse funcionário. A seguir, mostre
 * o número e o salário do funcionário, com duas casas decimais.
 */

int main()
{
    int numero;

    float horas, valorPorHora, salario;

    printf("Digite o número do funcionário: ");
    scanf("%d", &numero);

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor por hora do funcionário: ");
    scanf("%f", &valorPorHora);

    salario = horas * valorPorHora;

    printf("O salário do funcionário %d é R$ %.2f\n", numero, salario);
}