#include <stdio.h>
#define IMPRIMIR_PONTO "(%d,%d) = %d\n"
#define MAX 100

int main()
{
    int quantidadeNaoNulos, linhaConsulta, colunaConsulta, aux;
    int linha[MAX], coluna[MAX], valor[MAX];

    scanf(" %d", &quantidadeNaoNulos);
    for (int i = 0; i < quantidadeNaoNulos; i++)
    {
        scanf(" %d %d %d", &linha[i], &coluna[i], &valor[i]);
    }

    do
    {
        scanf(" %d %d", &linhaConsulta, &colunaConsulta);
        if (linhaConsulta == -1 || colunaConsulta == -1)
        {
            break;
        }

        aux = 0;
        for (int i = 0; i < quantidadeNaoNulos; i++)
        {
            if (linhaConsulta == linha[i] && colunaConsulta == coluna[i])
            {
                printf(IMPRIMIR_PONTO, linhaConsulta, colunaConsulta, valor[i]);
                aux = 1;
            }
            if (i == quantidadeNaoNulos - 1 && aux == 0)
            {
                printf(IMPRIMIR_PONTO, linhaConsulta, colunaConsulta, 0);
            }
        }
    } while (1);

    return (0);
}