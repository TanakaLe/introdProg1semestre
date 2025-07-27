typedef struct _jogador
{
    int numCamisa;
    int quantidadeGols;
    int quantidadeAssistes;

} jogador;

int main()
{
    jogador jogadores[22];
    jogador auxJogador;
    int auxContador;

    for (int i = 0; i < 22; i++)
    {
        scanf(" %d %d %d", &jogadores[i].numCamisa, &jogadores[i].quantidadeGols, &jogadores[i].quantidadeAssistes);
    }

    printf("TIME\n");
    for (int i = 0; i < 11; i++)
    {
        auxJogador.numCamisa = 0;
        auxJogador.quantidadeGols = 0;
        auxJogador.quantidadeAssistes = 0;
        auxContador = 0;
        for (int j = 0; j < 22; j++)
        {
            if (jogadores[j].quantidadeGols == auxJogador.quantidadeGols)
            {
                if (jogadores[j].quantidadeAssistes > auxJogador.quantidadeAssistes)
                {
                    auxJogador.numCamisa = jogadores[j].numCamisa;
                    auxJogador.quantidadeGols = jogadores[j].quantidadeGols;
                    auxJogador.quantidadeAssistes = jogadores[j].quantidadeAssistes;
                    auxContador = j;
                }
            }
            else
            {
                if (jogadores[j].quantidadeGols > auxJogador.quantidadeGols)
                {
                    auxJogador.numCamisa = jogadores[j].numCamisa;
                    auxJogador.quantidadeGols = jogadores[j].quantidadeGols;
                    auxJogador.quantidadeAssistes = jogadores[j].quantidadeAssistes;
                    auxContador = j;
                }
            }
        }
        printf("jogador %d\n", auxJogador.numCamisa);
        jogadores[auxContador].quantidadeGols = 0;
    }

    return (0);
}