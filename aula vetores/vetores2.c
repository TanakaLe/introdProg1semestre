#include <stdio.h>

int main()
{

    char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char char1, auxiliar = ' ';
    int contador[26] = {0};

    while (auxiliar != '\n')
    {
        scanf("%c", &auxiliar);

        for (int i = 0; i <= 25; i++)
        {
            if (letras[i] == auxiliar)
            {
                contador[i]++;
            }
        }
    }

    for (int i = 0; i <= 25; i++)
    {
        if (contador[i] > 0)
        {
        printf("Letra %c: %d\n", letras[i], contador[i]);
        }
    }

    return (0);
}
