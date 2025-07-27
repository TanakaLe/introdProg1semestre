#include <stdio.h>

#define RODADA "Rodada %d:\n"
#define PARTIDA "Jogador %d x %d: jogador %d venceu!!\n"
#define CAMPEAO "Jogador %d foi o campeao!!\n"

int main()
{
    int aux, numJogadores, auxNumJogadores, jogadorMenor, jogadorMaior, jogSegMenor, contadorRodada = 1;
    double tempo[64] = {0.0}, auxTempo[64] = {0.0}; // tempo: controle do campeonato, aux: rodada
    double tempoMenor, tempoMaior, tempoSegMenor, auxTroca;

    scanf(" %d", &numJogadores);

    for (int i = 0; i < numJogadores; i++)
    {
        scanf(" %lf", &tempo[i]);
    }

    auxNumJogadores = numJogadores;
    tempoMenor = tempoMaior = tempo[0];
    jogadorMenor = jogadorMaior = 1;
    jogSegMenor = 2;
    while (auxNumJogadores != 1) // repeticoes do campeonato (que tem varias rodadas)
    {
        printf(RODADA, contadorRodada);

        for (int j = 0; j < numJogadores; j++)
        {
            auxTempo[j] = tempo[j];
        }

        contadorRodada++;

        for (int i = 0; i < auxNumJogadores / 2; i++) // conjunto de partidas
        {
            // auxTroca = tempoMenor;

            // tempoMenor = tempoSegMenor = tempoMaior = 0.0;
            // tempoMaior = auxTroca;
            aux = 0;
            if (auxNumJogadores % 2 == 0 || i > 0)
            {

                for (int j = 0; j < numJogadores; j++) // ver qual e o menor e o maior tempo
                {
                    if (aux == 0 && auxTempo[j] != 0.0)
                    {
                        tempoMenor = tempoMaior = auxTempo[j];
                        jogadorMenor = jogadorMaior = j + 1;
                        aux = 1;
                    }
                    if (((tempoMenor > auxTempo[j]) && (auxTempo[j] != 0.0)) || tempoMenor == 0.0)
                    {
                        tempoMenor = auxTempo[j];
                        jogadorMenor = j + 1;
                    }
                    if ((tempoMaior < auxTempo[j]) || tempoMaior == 0.0)
                    {
                        tempoMaior = auxTempo[j];
                        jogadorMaior = j + 1;
                    }
                }

                printf(PARTIDA, jogadorMenor, jogadorMaior, jogadorMenor);

                auxTempo[jogadorMaior - 1] = auxTempo[jogadorMenor - 1] = 0.0;
            }
            else
            {

                for (int j = 0; j < numJogadores; j++) // ver qual e o menor e o maior tempo
                {
                    if (aux == 0 && auxTempo[j] != 0.0)
                    {
                        tempoMenor = tempoSegMenor = tempoMaior = auxTempo[j];
                        jogadorMenor = jogSegMenor = jogadorMaior = j + 1;
                        aux = 1;
                    }
                    if (((tempoMenor > auxTempo[j]) && (auxTempo[j] != 0.0)) || tempoMenor == 0.0)
                    {
                        tempoSegMenor = tempoMenor;
                        jogSegMenor = jogadorMenor;
                        tempoMenor = auxTempo[j];
                        jogadorMenor = j + 1;
                    }
                    if ((tempoSegMenor > auxTempo[j] && tempoMenor < auxTempo[j]) || tempoSegMenor == 0.0)
                    {
                        tempoSegMenor = auxTempo[j];
                        jogSegMenor = j + 1;
                    }
                    
                    if ((tempoMaior < auxTempo[j]) || tempoMaior == 0.0)
                    {
                        tempoMaior = auxTempo[j];
                        jogadorMaior = j + 1;
                    }
                }

                printf(PARTIDA, jogSegMenor, jogadorMaior, jogSegMenor);

                auxTempo[jogadorMaior - 1] = auxTempo[jogSegMenor - 1] = auxTempo[jogadorMenor - 1] = 0.0;
            }
            tempo[jogadorMaior - 1] = 0.0;
        }
        if (auxNumJogadores % 2 != 0)
        {
            auxNumJogadores++;
        }
        auxNumJogadores = auxNumJogadores / 2;

        if (auxNumJogadores == 1)
        {
            printf(CAMPEAO, jogadorMenor);
        }
    }

    return (0);
}