#include <stdlib.h>
#include <stdio.h>

/**
 * O professor Ivanovitch está atrás de um aluno que possa ajudá-lo
 * em um projeto para o laboratório de embarcados: ele construiu um
 * robô para participar de uma corrida em um labirinto!
 * 
 * Devido às suas outras tarefas, ele ainda não teve tempo de programar
 * os comandos de movimentação do robô, e pediu que a turma de ITP fizesse
 * isso para ele!
 * 
 * O robô irá aceitar três comandos de movimentação:
 * M - ele move para frente
 * D - ele vira para a direita
 * E - ele vira para a esquerda
 * Qualquer comando que não for um desses três, deverá ser ignorado!
 * 
 * O robô sempre começa com a direção para o norte. As direções podem ser
 * mapeadas da seguinte forma: N - 0; L - 1; S - 2; O - 3
 * 
 * Construa um programa que leia uma posição inicial (x,y) do robô e uma
 * sequência de 10 instruções de movimentação.
 * 
 * Ao final, imprima a posição x,y que o robô teminou.
 */

int x, y;

int avancar(int direcao);
int girarDireita(int direcao);
int girarEsquerda(int direcao);

int main()
{
    int direcao = 0;

    printf("Digite a posição x e y inicial do robô: ");
    scanf("%d %d", &x, &y);

    int i = 0;

    while (i < 10)
    {
        system("clear");
        char acao;

        printf("Ação %d/10\nx: %d y: %d\n\nM - Move para frente.\nD - Gira para direita.\nE - Gira para esquerda.\nDigite uma ação: ", i + 1, x, y);
        scanf(" %c", &acao);

        if (acao == 'M')
        {
            avancar(direcao);
        }
        else if (acao == 'D')
        {
            direcao = girarDireita(direcao);
        }
        else if (acao == 'E')
        {
            direcao = girarEsquerda(direcao);
        }
        else
        {
            i--;
        }

        i++;
    }

    system("clear");
    printf("Ação %d/10\nx: %d y: %d\n", i, x, y);

    return 0;
}

int avancar(int direcao)
{
    switch (direcao)
    {
    case 0:
        y++;
        break;
    case 1:
        x++;
        break;
    case 2:
        y--;
        break;
    case 3:
        x--;
        break;
    }
}

int girarDireita(int direcao)
{
    if (direcao == 3)
        return 0;

    return ++direcao;
}

int girarEsquerda(int direcao)
{
    if (direcao == 0)
        return 3;

    return --direcao;
}