#include <stdio.h>
#include <stdmath>

int main()
{
    /**
     * Leia 3 valores de ponto flutuante e efetue o cálculo
     * das raízes da equação de Bhaskara. Se não for possível
     * calcular as raízes, mostre a mensagem correspondente
     * “Impossivel calcular”, caso haja uma divisão por 0 ou
     * raiz de numero negativo.
     */

    float a, b, c;

    scanf("%f", "%f", "%f", &a, &b, &c);

    int x1 = (-b + sqr(b * b - 4 * a * c)) / 2 * a;

    return 0;
}