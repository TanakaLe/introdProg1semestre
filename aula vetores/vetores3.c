int main()
{

#define INVALIDA "entrada inválida!\n"
#define GRAVE "muito grave (+)!\n"
#define AGUDO "muito agudo (-)!\n"
#define AFINADO "corda afinada!\n"

    char entrada;
    int n;
    float e, pico, freqRecebida, freqDesejada;

    do
    {
        scanf(" %c", &entrada);

        if (entrada != 'E' && entrada != 'A' && entrada != 'D' && entrada != 'G' && entrada != 'B' && entrada != 'e' && entrada != 'S')
        {
            printf(INVALIDA);
            continue;
        }

        if (entrada == 'E')
        {
            freqDesejada = 82.4;
        }
        if (entrada == 'A')
        {
            freqDesejada = 110.0;
        }
        if (entrada == 'D')
        {
            freqDesejada = 146.8;
        }
        if (entrada == 'G')
        {
            freqDesejada = 196.0;
        }
        if (entrada == 'B')
        {
            freqDesejada = 246.9;
        }
        if (entrada == 'e')
        {
            freqDesejada = 329.6;
        }
        if (entrada == 'S')
        {
            break;
        }

        scanf(" %d", &n);
        scanf(" %f", &e);

        do
        {
            pico = 0.0;
            for (int i = 0; i < n; i++)
            {
                scanf("%f", &freqRecebida);
                if (freqRecebida > pico)
                {
                    pico = freqRecebida;
                }
            }
            if (pico > (freqDesejada + freqDesejada * (e / 100)))
            {
                printf(AGUDO);
                continue;
            }
            if (pico < (freqDesejada - freqDesejada * (e / 100)))
            {
                printf(GRAVE);
                continue;
            }
            printf(AFINADO);
            break;
        } while (1);

    } while (1);

    return (0);
}