int main()
{

    int numeroDeConexoes, linhaConexao, colunaConexao, maiorNumConexoes = 0, contagemNumConexoes = 0, primeiroRelacionados = 0, segundoRelacionados = 0, contagemRelacionados = 0, aux = 0;
    int matrizDePontos[1000][1000];

    scanf(" %d", &numeroDeConexoes);

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            matrizDePontos[i][j] = 0;
        }
    }

    for (int i = 0; i < numeroDeConexoes; i++)
    {
        scanf(" %d %d", &linhaConexao, &colunaConexao);
        if (matrizDePontos[linhaConexao][colunaConexao] != 0)
        {
            printf("Conexao ja registrada anteriormente!");
        }
        else
        {
            matrizDePontos[linhaConexao][colunaConexao] = matrizDePontos[colunaConexao][linhaConexao] = 1;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        aux = 0;
        for (int j = 0; j < 1000; j++)
        {
            aux += matrizDePontos[i][j];
        }
        if (aux > contagemNumConexoes)
        {
            contagemNumConexoes = aux;
            maiorNumConexoes = i;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i != j)
            {
                aux=0;
                for (int k = 0; k < 1000; k++)
                {
                    if (matrizDePontos[i][k] + matrizDePontos[j][k] == 2)
                    {
                        aux ++;
                    }
                    
                }
                if (aux > contagemRelacionados)
                {
                    contagemRelacionados = aux;
                    primeiroRelacionados = i;
                    segundoRelacionados = j;
                }
            }
        }
    }
    
    printf("O usuario com mais conexoes eh o %d\n", maiorNumConexoes);
    printf("Os usuarios com mais conexoes em comum sao o %d e o %d", primeiroRelacionados, segundoRelacionados);

    return (0);
}