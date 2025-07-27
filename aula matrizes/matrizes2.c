#include <stdio.h>

#define INVALIDA "Posicao invalida!\n"
#define EMPATE "Empate\n"

int main()
{
    int matriz[3][3], linha, coluna;
    int i = 0, jogadorAtual = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = 0;
        }
    }

    while (i < 9)
    {
        scanf(" %d %d", &linha, &coluna);
        if ((linha < 0 || coluna < 0 || linha > 2 || coluna > 2 || matriz[linha][coluna] != 0))
        {
            printf(INVALIDA);
        }
        else
        {
            matriz[linha][coluna] = jogadorAtual;

            if (
                (matriz[linha][coluna] == matriz[linha][0] && matriz[linha][coluna] == matriz[linha][1] && matriz[linha][coluna] == matriz[linha][2]) ||
                (matriz[linha][coluna] == matriz[0][coluna] && matriz[linha][coluna] == matriz[1][coluna] && matriz[linha][coluna] == matriz[2][coluna]) ||
                (matriz[linha][coluna] == matriz[0][0] && matriz[linha][coluna] == matriz[1][1] && matriz[linha][coluna] == matriz[2][2]) ||
                (matriz[linha][coluna] == matriz[2][0] && matriz[linha][coluna] == matriz[1][1] && matriz[linha][coluna] == matriz[0][2] != 0))
            {
                printf("Jogador %d venceu!", matriz[linha][coluna]);
                break;
            }

            i++;
            if (jogadorAtual == 1)
            {
                jogadorAtual = 2;
            }
            else
            {
                jogadorAtual = 1;
            }

            if (i == 9)
            {
                printf(EMPATE);
            }
        }
    }

    return (0);
}