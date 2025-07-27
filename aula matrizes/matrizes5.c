int main()
{
    int numeroLados = 0, luminosidadeVela = 0, luminosidadeAtual = 0;
    int countLuminosidadeZero = 0, countLuminosidadeTotal = 0;
    int matrizLuminosidade[26][26];
    int auxIK = 0, auxIL = 0;
    char entrada = 'X';

    scanf(" %d %d", &numeroLados, &luminosidadeVela);

    for (int i = 0; i < numeroLados; i++)
    {
        for (int j = 0; j < numeroLados; j++)
        {
            matrizLuminosidade[i][j] = 0;
        }
    }

    for (int i = 0; i < numeroLados; i++)
    {
        for (int j = 0; j < numeroLados; j++)
        {
            scanf(" %c", &entrada);

            if (entrada == 'V')
            {
                for (int k = i - (luminosidadeVela - 1); k < i + luminosidadeVela; k++)
                {
                    for (int l = j - (luminosidadeVela - 1); l < j + luminosidadeVela; l++)
                    {
                        if (i - k < 0)
                        {
                            auxIK = k - i;
                        }
                        else
                        {
                            auxIK = i - k;
                        }
                        if (j - l < 0)
                        {
                            auxIL = -j + l;
                        }
                        else
                        {
                            auxIL = j - l;
                        }
                        if (auxIK > auxIL)
                        {
                            luminosidadeAtual = luminosidadeVela - auxIK;
                        }
                        else
                        {
                            luminosidadeAtual = luminosidadeVela - auxIL;
                        }
                        if (luminosidadeAtual < 0)
                        {
                            luminosidadeAtual = 0;
                        }
                        if (!(k < 0 || k > numeroLados || l < 0 || l > numeroLados))
                        {
                            matrizLuminosidade[k][l] += luminosidadeAtual;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < numeroLados; i++)
    {
        for (int j = 0; j < numeroLados; j++)
        {
            if (matrizLuminosidade[i][j] == 0)
            {
                countLuminosidadeZero++;
            }
            else
            {
                countLuminosidadeTotal += matrizLuminosidade[i][j];
            }
        }
    }

    printf("%d\n", countLuminosidadeZero);
    printf("%d", countLuminosidadeTotal);

    return 0;
}