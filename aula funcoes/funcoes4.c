/// ---- ATENCAO: NAO ALTERAR DAQUI ---->
#include <stdio.h>

/* PROTOTIPOS DAS FUNCOES */
void diagonalD(char matriz[1000][1000], int linha, int coluna, int comprimento);
void diagonald(char matriz[1000][1000], int linha, int coluna, int comprimento);
void horizontal(char matriz[1000][1000], int linha, int coluna, int comprimento);
void vertical(char matriz[1000][1000], int linha, int coluna, int comprimento);
void printaMatriz(char matriz[1000][1000], int tamanho);

int main()
{

    char matriz[1000][1000], comando;
    int tamanho, linha, coluna, comprimento;

    scanf("%i", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {

        for (int j = 0; j < tamanho; j++)
        {

            matriz[i][j] = '.';
        }
    }

    while (1)
    {

        scanf("%c", &comando);

        if (comando == 'E')
        {
            break;
        }

        switch (comando)
        {
        case 'V':
            scanf("%i %i %i", &linha, &coluna, &comprimento);
            vertical(matriz, linha, coluna, comprimento);
            break;
        case 'H':
            scanf("%i %i %i", &linha, &coluna, &comprimento);
            horizontal(matriz, linha, coluna, comprimento);
            break;
        case 'D':
            scanf("%i %i %i", &linha, &coluna, &comprimento);
            diagonalD(matriz, linha, coluna, comprimento);
            break;
        case 'd':
            scanf("%i %i %i", &linha, &coluna, &comprimento);
            diagonald(matriz, linha, coluna, comprimento);
            break;
        default:
            break;
        }
    }
    printaMatriz(matriz, tamanho);

    return (0);
}

/// ---- APENAS IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO

void diagonalD(char matriz[1000][1000], int linha, int coluna, int comprimento)
{
    for (int i = 0; i < comprimento; i++)
    {
        if (matriz[linha + i][coluna - i] == '.')
        {
            matriz[linha + i][coluna - i] = '/';
        }
        else
        {
            matriz[linha + i][coluna - i] = '*';
        }
    }
}

void diagonald(char matriz[1000][1000], int linha, int coluna, int comprimento)
{
    for (int i = 0; i < comprimento; i++)
    {
        if (matriz[linha + i][coluna + i] == '.')
        {
            matriz[linha + i][coluna + i] = '\\';
        }
        else
        {
            matriz[linha + i][coluna + i] = '*';
        }
    }
}

void horizontal(char matriz[1000][1000], int linha, int coluna, int comprimento)
{
    for (int i = 0; i < comprimento; i++)
    {
        if (matriz[linha][coluna + i] == '.')
        {
            matriz[linha][coluna + i] = '-';
        }
        else
        {
            if (matriz[linha][coluna + i] == '|')
            {
                matriz[linha][coluna + i] = '+';
            }
            else
            {
                matriz[linha][coluna + i] = '*';
            }
        }
    }
}

void vertical(char matriz[1000][1000], int linha, int coluna, int comprimento)
{
    for (int i = 0; i < comprimento; i++)
    {
        if (matriz[linha + i][coluna] == '.')
        {
            matriz[linha + i][coluna] = '|';
        }
        else
        {
            if (matriz[linha + i][coluna] == '-')
            {
                matriz[linha + i][coluna] = '+';
            }
            else
            {
                matriz[linha + i][coluna] = '*';
            }
        }
    }
}

void printaMatriz(char matriz[1000][1000], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}