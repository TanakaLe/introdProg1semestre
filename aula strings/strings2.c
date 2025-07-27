#include <stdio.h>
#include <string.h>

#define CHANCES 5
#define SAIDA_CHANCES "Chances: %d - a palavra tem %d letras\n"
#define SAIDA_PERDEU "Voce perdeu. A palavra era: "
#define SAIDA_VENCEU "Parabens, voce acertou a palavra!\n"
#define MAX_LETRAS 1000

int main(){

    int tamanhoDaPalavra = 0, chances = CHANCES, encontrado = 0;
    char palavra[MAX_LETRAS], palavraDescoberta[MAX_LETRAS];
    char letra;
    
    scanf("%[^\n]", palavra);
    tamanhoDaPalavra = strlen(palavra);
    for (int i = 0; i < MAX_LETRAS; i++)
    {
        if (palavra[i] != '\0')
        {
            palavraDescoberta[i] = '_';
        }else
        {
            palavraDescoberta[i] = '\0';
        }
    }
        
    while (1)
    {
        printf(SAIDA_CHANCES, chances, tamanhoDaPalavra);
        puts(palavraDescoberta);

        if (chances == 0)
        {
            printf(SAIDA_PERDEU);
            puts(palavra);
            break;
        }

        scanf(" %c", &letra);
        encontrado = 0;
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            if (palavra[i]==letra)
            {
                encontrado = 1;
                break;
            }
        }

        if (encontrado == 1)
        {
            for (int i = 0; palavra[i] != '\0'; i++)
            {
                if (palavra[i]==letra)
                {
                    palavraDescoberta[i] = palavra[i];
                }
            }
            if (strcmp(palavra, palavraDescoberta) == 0)
            {
                printf(SAIDA_VENCEU);
                puts(palavra);
                break;
            }
            
        }
        else
        {
            chances--;
        }
    }
    

    return 0;
}