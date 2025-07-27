#include <stdio.h>

#define IMPRIMIR "Atk: %.1f, Hp: %.1f, Def: %.1f, %c, %d estrelas.\n"

typedef struct
{

    float ataque;
    float vida;
    float defesa;
    char caminho;
    int raridade;

} ConeDeLuz;

int main()
{
    ConeDeLuz coneLuz[50], coneAux[50], key;
    int n, count;
    char comand1, comand2;

    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %f", &coneLuz[i].ataque);
        scanf(" %f", &coneLuz[i].vida);
        scanf(" %f", &coneLuz[i].defesa);
        scanf(" %c", &coneLuz[i].caminho);
        scanf(" %d", &coneLuz[i].raridade);
    }

    scanf(" %c", &comand1);
    while (comand1 != 'S')
    {
        scanf(" %c", &comand2);
        if (comand1 == 'P' || comand1 == 'A' || comand1 == 'D' || comand1 == 'C' || comand1 == 'E' || comand1 == 'I' || comand1 == 'H')
        {
            count = 0;
            for (int i = 0; i < n; i++)
            {
                if (coneLuz[i].caminho == comand1)
                {
                    coneAux[count] = coneLuz[i];
                    count++;
                }
            }
        }
        else 
        {
            for (int i = 0; i < n; i++)
            {
                coneAux[i] = coneLuz[i];
            }
            count = n;
        }
        for (int i = 1; i < count; ++i)
        {
            int j = i - 1;
            key.ataque = coneAux[i].ataque;
            key.defesa = coneAux[i].defesa;
            key.vida = coneAux[i].vida;
            key.caminho = coneAux[i].caminho;
            key.raridade = coneAux[i].raridade;
            if (comand2 == 'A')
            {
                while (j >= 0 && coneAux[j].ataque < key.ataque)
                {
                    coneAux[j + 1].ataque = coneAux[j].ataque;
                    coneAux[j + 1].defesa = coneAux[j].defesa;
                    coneAux[j + 1].vida = coneAux[j].vida;
                    coneAux[j + 1].caminho = coneAux[j].caminho;
                    coneAux[j + 1].raridade = coneAux[j].raridade;
                    j = j - 1;
                }
            }
            if (comand2 == 'D')
            {
                while (j >= 0 && coneAux[j].defesa < key.defesa)
                {
                    coneAux[j + 1].ataque = coneAux[j].ataque;
                    coneAux[j + 1].defesa = coneAux[j].defesa;
                    coneAux[j + 1].vida = coneAux[j].vida;
                    coneAux[j + 1].caminho = coneAux[j].caminho;
                    coneAux[j + 1].raridade = coneAux[j].raridade;
                    j = j - 1;
                }
            }
            if (comand2 == 'V')
            {
                while (j >= 0 && coneAux[j].vida < key.vida)
                {
                    coneAux[j + 1].ataque = coneAux[j].ataque;
                    coneAux[j + 1].defesa = coneAux[j].defesa;
                    coneAux[j + 1].vida = coneAux[j].vida;
                    coneAux[j + 1].caminho = coneAux[j].caminho;
                    coneAux[j + 1].raridade = coneAux[j].raridade;
                    j = j - 1;
                }
            }
            coneAux[j + 1] = key;
        }
        for (int i = 0; i < count; i++)
        {
            printf(IMPRIMIR, coneAux[i].ataque, coneAux[i].vida, coneAux[i].defesa,
                   coneAux[i].caminho, coneAux[i].raridade);
        }
        printf("\n");

        scanf(" %c", &comand1);
    }

    return (0);
}