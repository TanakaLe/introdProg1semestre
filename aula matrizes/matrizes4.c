#include <stdio.h>

int main()
{
    int N, linha, coluna, quantidade;
    char comando;
    char matriz[1001][1001];
    /*
    H retas horisontais
    V retas verticais
    D diagonal /
    d diagonal \
    */
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = '.';
        }
    }

    scanf(" %c", &comando);
    while (comando != 'E')
    {
        scanf("%d %d %d ", &linha, &coluna, &quantidade);
        
        if (comando == 'H')
        {
            for (int i = 0; i < quantidade; i++)
            {
                if (matriz[linha][coluna+i] == '.')
                {
                    matriz[linha][coluna+i] = '-';
                }else
                {
                    if (matriz[linha][coluna+i] == '|')
                    {
                        matriz[linha][coluna+i] = '+';
                    }else
                    {
                        matriz[linha][coluna+i] = '*';
                    }
                }
            }
        }
        if (comando == 'V')
        {
            for (int i = 0; i < quantidade; i++)
            {
                if (matriz[linha+i][coluna] == '.')
                {
                    matriz[linha+i][coluna] = '|';
                }else
                {
                    if (matriz[linha+i][coluna] == '-')
                    {
                        matriz[linha+i][coluna] = '+';
                    }else
                    {
                        matriz[linha+i][coluna] = '*';
                    }
                }
            }
        }
        if (comando == 'D')
        {
            for (int i = 0; i < quantidade; i++)
            {
                if (matriz[linha+i][coluna-i] == '.')
                {
                    matriz[linha+i][coluna-i] = '/';
                }else
                {
                    matriz[linha+i][coluna-i] = '*';
                }
            }
        }
        if (comando == 'd')
        {
            for (int i = 0; i < quantidade; i++)
            {
                if (matriz[linha+i][coluna+i] == '.')
                {
                    matriz[linha+i][coluna+i] = '\\';
                }else
                {
                    matriz[linha+i][coluna+i] = '*';
                }
            }
        }
        scanf(" %c", &comando);
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}