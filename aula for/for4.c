#include <stdio.h>

#define CARTASJOGADOR1 "Jogador 1: %d cartas\n"
#define CARTASJOGADOR2 "Jogador 2: %d cartas\n"
#define JOGADOR1VENCEU "Jogador 1 VENCEU!!\n"
#define JOGADOR2VENCEU "Jogador 2 VENCEU!!\n"
#define JOGADOR1PERDEU "Jogador 1 tinha %d cartas!\n"
#define JOGADOR2PERDEU "Jogador 2 tinha %d cartas!\n"
#define ESQUECEU "ESQUECEU DE FALAR UNO!!\n"

int main()
{

    char jogada;
    int j1 = 5, j2 = 5, turno = 1, UNO = 0; // turno: de quem é a vez (inicia com 1 por o j1 sempre começa)

    while (j1 > 0 && j2 > 0)
    {
        scanf("%c ", &jogada);

        if (turno == 1 && j1 == 1 && UNO != 1 && jogada != 'U')
        {
            j1++;
            turno = 2;
            printf(ESQUECEU);
            printf(CARTASJOGADOR1, j1);
            printf(CARTASJOGADOR2, j2);
            continue;
        }
        if (turno == 2 && j2 == 1 && UNO != 2 && jogada != 'U')
        {
            j2++;
            turno = 1;
            printf(ESQUECEU);
            printf(CARTASJOGADOR1, j1);
            printf(CARTASJOGADOR2, j2);
            continue;
        }
        if (j1 == 1 && UNO == 1)
        {
            printf(JOGADOR1VENCEU);
            printf(JOGADOR2PERDEU, j2);
            break;
        }
        if (j2 == 1 && UNO == 2)
        {
            printf(JOGADOR2VENCEU);
            printf(JOGADOR1PERDEU, j1);
            break;
        }

        switch (jogada)
        {
        case 'N':
            if (turno == 1)
            {
                j1--;
                turno = 2;
            }
            else
            {
                j2--;
                turno = 1;
            }
            break;

        case '2':
            if (turno == 1)
            {
                j1--;
                j2 += 2;
            }
            else
            {
                j2--;
                j1 += 2;
            }
            break;

        case '4':
            if (turno == 1)
            {
                j1--;
                j2 += 4;
            }
            else
            {
                j2--;
                j1 += 4;
            }
            break;

        case 'R':
            if (turno == 1)
            {
                j1--;
            }
            else
            {
                j2--;
            }
            break;

        case 'B':
            if (turno == 1)
            {
                j1--;
            }
            else
            {
                j2--;
            }
            break;

        case 'U':
            if (turno == 1)
            {
                UNO = 1;
                continue;
            }
            else
            {
                UNO = 2;
                continue;
            }
            break;

        case 'C':
            if (turno == 1)
            {
                j1++;
                turno = 2;
            }
            else
            {
                j2++;
                turno = 1;
            }
            break;
        }

        printf(CARTASJOGADOR1, j1);
        printf(CARTASJOGADOR2, j2);
    }
    return (0);
}