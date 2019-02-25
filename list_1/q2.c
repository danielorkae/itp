#include <stdio.h>

/**
 * Após lançar um novo modelo de termômetro no mercado,
 * a Derp Industries descobriu um defeito no seu produto:
 * ele sempre marca a temperatura com 10 graus acima da
 * temperatura real!  Como solução emergencial, eles criaram
 * um novo sistema de display, e pediram que você escreva o
 * programa para mostrar a temperatura correta.  De quebra,
 * eles querem adicionar a exibição da temperatura nas escalas
 * Farenheit e Kelvin (show-off!)
 */

int main()
{

    int c;

    printf("Quantos ºC? ");
    scanf("%d", &c);

    int k = c + 273;
    int f = 1.8 * c + 32;

    printf("Celcius: %d\nKelvin: %d\nFarenheit: %d\n", c, k, f);

    return 0;
}