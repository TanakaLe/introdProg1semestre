#include <stdio.h>
#include <string.h>

int main()
{
    char letra, frase[10000], textoCompleto[10000]=""; // , auxFrase[10000]
    int countSim = 0, espacos[1000];
    for (int i = 0; i < 1000; i++)
    {
        espacos[i] = 0;
    }
    
    scanf(" %c\n", &letra);
    
    do
    {
        for (int i = 0; i < 10000; i++)
        {
            frase[i] ='\0';
        }
        if(textoCompleto[0] != '\0')
        {
            strcat(textoCompleto, " ");
        }
        scanf("%[^\n]\n", frase);
        
        strcat(textoCompleto, frase);
        
    } while (frase[0] != '\0');
    textoCompleto[strlen(textoCompleto)-1] = '\0';
    
    int tamanhoDaString = strlen(textoCompleto);
    int countA = 0;
    int countB = -1;
    do 
    {
        countB++;
        if (textoCompleto[countB] == ' ' || textoCompleto[countB] == '\0')
        {
            espacos[countA] = countB;
            countA++;
        }
    } while (textoCompleto[countB] != '\0');
    int j = 0;
    for (int i = 0; i <= countA; i++)
    {
        while (j < espacos[i])
        {
            
            if (tolower(textoCompleto[j]) == tolower(letra))
            {
                countSim++;
                j = espacos[i];
            }else
            {
                j++;
            }
        }
    }
    printf("%.1f\n", 100.0*(1.0*countSim/(1.0*countA)));

    return 0;
}