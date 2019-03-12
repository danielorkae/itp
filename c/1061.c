#include <stdio.h>

/**
 * Pedrinho está organizando um evento em sua Universidade.
 * O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês.
 * O problema é que Pedrinho quer calcular o tempo que o evento vai durar,
 * uma vez que ele sabe quando inicia e quando termina o evento.
 * Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá
 * ajudar Pedrinho a calcular a duração deste evento.
 * 
 * Entrada
 * Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço
 * e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o
 * momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta
 * linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas,
 * indicando o término do evento.
 * 
 * Saída
 * Na saída, deve ser apresentada a duração do evento, no seguinte formato:
 * 
 * W dia(s)
 * X hora(s)
 * Y minuto(s)
 * Z segundo(s)
 * 
 * Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.
 * */

int main()
{
    int diaDeInicio, horaDeInicio, minutoDeInicio, segundoDeInicio;
    int diaDeTermino, horaDeTermino, minutoDeTermino, segundoDeTermino;
    int w, x, y, z;

    scanf(" Dia %d", &diaDeInicio);
    scanf(" %d : %d : %d", &horaDeInicio, &minutoDeInicio, &segundoDeInicio);

    scanf(" Dia %d", &diaDeTermino);
    scanf(" %d : %d : %d", &horaDeTermino, &minutoDeTermino, &segundoDeTermino);

    int timestampInicio = segundoDeInicio + minutoDeInicio * 60 + horaDeInicio * 60 * 60 + diaDeInicio * 60 * 60 * 24;
    int timestampTermino = segundoDeTermino + minutoDeTermino * 60 + horaDeTermino * 60 * 60 + diaDeTermino * 60 * 60 * 24;

    int total = timestampTermino - timestampInicio;

    w = (int)(total / 86400);
    x = (int)((total - w * 86400) / 3600);
    y = (int)((total - w * 86400 - x * 3600) / 60);
    z = total - w * 86400 - x * 3600 - y * 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", w, x, y, z);

    return 0;
}