#include <stdio.h>

int main()
{

    int Z, linha=0, coluna=0, count = 0, countM, countL, countW, countT, countX=10;
    char matriz[21][21], jogador[4] = {'M', 'L', 'W', 'T'};

    scanf(" %d", &Z);

    while (countX) // jogadas dinamicas; enquanto coutX != 0
    {
        scanf("%d %d", &linha, &coluna);
        if ((matriz[linha][coluna] == 'M' || matriz[linha][coluna] == 'L' || matriz[linha][coluna] == 'W' || matriz[linha][coluna] == 'T') || linha > Z || coluna > Z)
        {
            printf("Posicao Invalida!\n");
        }
        else
        {
            for (int i = 0; i < Z; i++)
            {
                matriz[linha][i] = jogador[count % 4]; // pegando a linha e atribuindo a inicial do jogador
                matriz[i][coluna] = jogador[count % 4];
            }

            count++;
            countM = countL = countW = countT = countX = 0;
            for (int i = 0; i < Z; i++)
            {
                for (int j = 0; j < Z; j++)
                {
                    if (matriz[i][j] == 'M')
                    {
                        countM++;
                    }
                    if (matriz[i][j] == 'L')
                    {
                        countL++;
                    }
                    if (matriz[i][j] == 'W')
                    {
                        countW++;
                    }
                    if (matriz[i][j] == 'T')
                    {
                        countT++;
                    }
                    if (matriz[i][j] != 'L' && matriz[i][j] != 'M' && matriz[i][j] != 'W' && matriz[i][j] != 'T')
                    {
                        countX++;
                    }
                }
            }
            printf("M %d\nL %d\nW %d\nT %d\n", countM, countL, countW, countT);
        } 
    }

    if (countM > countL && countM > countW && countM > countT)

        printf("Mario venceu!");

    if (countL > countM && countL > countW && countL > countT)

        printf("Luis venceu!");

    if (countW > countM && countW > countL && countW > countT)

        printf("Waldo venceu!");

    if (countT > countL && countT > countW && countT > countM)

        printf("Thomas venceu!");

    return (0);
}