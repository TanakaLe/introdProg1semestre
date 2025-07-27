#include <stdio.h>

#define SUCESSO "sucesso!\n"
#define FRACASSO "fracasso!\n"
#define ALFACE "a alface foi devorada!\n"
#define OVELHA "a ovelha foi devorada!\n"

// margens do rio: 0 e 1 -> Ovelha na borda 0 (O=0)

int main()
{

    int O = 0, L = 0, A = 0, estevao = 0;
    char carga;

    while (1)
    {
        scanf("%c ", &carga);
        switch (carga)
        {
        case 'L':
            if (L == estevao)
            { // verifica se L e estevao estao na mesma margem
                if (L == 0)
                {
                    L = 1; // mudança de margem
                }
                else // L não 0 (L==1)
                {
                    L = 0;
                }
            }
            break;

        case 'O':
            if (O == estevao)
            { // verifica se O e estevao estao na mesma margem
                if (O == 0)
                {
                    O = 1; // mudança de margem
                }
                else // O não 0 (O==1)
                {
                    O = 0;
                }
            }
            break;

        case 'A':
            if (A == estevao)
            { // verifica se A e estevao estao na mesma margem
                if (A == 0)
                {
                    A = 1; // mudança de margem
                }
                else // A não 0 (A==1)
                {
                    A = 0;
                }
            }
            break;

        default:
            break;
        }

        // estevao fora do switch (está sempre no barco, não é carga)

        if (estevao == 0)
        {
            estevao = 1; // mudança de margem
        }
        else // estevao não 0 (estevao==1)
        {
            estevao = 0;
        }

        if (L == 1 && O == 1 && A == 1)
        { // os tres juntos na margem 1 (atravessarm)
            printf(SUCESSO);
            break;
        }

        if ((L == O || O == A) && estevao != O) // estevao nao deixa nada ser devorado
        {
            printf(FRACASSO);

            if (O == A)
            {
                printf(ALFACE);
            }

            if (L == O)
            {
                printf(OVELHA);
            }

            break;
        }
    }

    return (0);
}