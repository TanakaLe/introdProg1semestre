/// ---- ATENCAO: NAO ALTERAR DAQUI ---->
#include <stdio.h>

/* PROTOTIPOS DAS FUNCOES */

// Função que vai realizar a leitura do desenho de Fabio
void lerDesenho(char des[][20], int lin, int col);

// Função que encontra a quantidade total que seria usada de cada tamanho de madeira
void quantidadeMadeira(char des[][20], int mad[], int lin, int col);

// Função para mostrar a quantidade de cada tamanho de madeira que
// seria utilizado para construir as jangadas do desenho
void mostrarRelatorio(int mad[]);

int main()
{
    // Matriz que armazenara o desenho
    char desenho[20][20];
    // Vetor que guardara a quantidade de madeira de cada tamanho
    int madeiras[6];
    // Quantidade de linhas do desenho
    int linhas;
    // Quantidade de colunas do desenho
    int colunas;

    scanf("%d %d", &linhas, &colunas);

    lerDesenho(desenho, linhas, colunas);
    quantidadeMadeira(desenho, madeiras, linhas, colunas);
    mostrarRelatorio(madeiras);

    return (0);
}
/// <---- ATE AQUI!!! ----

/// ---- APENAS IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO

// Função que vai realizar a leitura do desenho de Fabio
void lerDesenho(char des[][20], int lin, int col)
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf(" %c", &des[i][j]);
        }
    }
}

// Função que encontra a quantidade total que seria usada de cada tamanho de madeira
void quantidadeMadeira(char des[][20], int mad[], int lin, int col)
{
    for (int i = 0; i < 7; i++)
    {
        mad[i]=0;
    }
    
    int aux = 0;
    char auxAnterior = 'o';

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (des[i][j] == '_')
            {
                aux++;
            }
            else if (auxAnterior == '_')
            {
                mad[aux - 1]++;
                aux = 0;
            }
            auxAnterior = des[i][j];
        }
        if (auxAnterior == '_')
        {
            mad[aux - 1]++;
            aux = 0;
        }
        auxAnterior = 'o';
    }
}

// Função para mostrar a quantidade de cada tamanho de madeira que
// seria utilizado para construir as jangadas do desenho
void mostrarRelatorio(int mad[])
{
    printf("MADEIRAS\n");

    for (int i = 0; i < 6; i++)
    {
        printf("MADEIRA DE %dm = %d unidade(s)\n", i + 1, mad[i]);
    }
}