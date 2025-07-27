#include <stdio.h>
#include <math.h>

#define MAX 1000

typedef struct {
    int x;
    int y;
    double R;
} Circulos;

int main() {
    
    Circulos amostras[MAX];
    int quantidadeColonias, distaciaPontos;

    scanf(" %d", &quantidadeColonias);
    for (int i = 0; i < quantidadeColonias; i++)
    {
        scanf(" %d %d %lf", &amostras[i].x, &amostras[i].y, &amostras[i].R);
    }
    for (int i = 0; i < quantidadeColonias; i++)
    {
        for (int j = i + 1; j < quantidadeColonias; j++)
        {
            /*
                √((x₂ - x₁)² + (y₂ - y₁)²)
            */
            distaciaPontos = sqrt(pow((amostras[i].x-amostras[j].x), 2) + pow((amostras[i].y-amostras[j].y), 2));
            if (distaciaPontos < (amostras[i].R + amostras[j].R))
            {
                printf("C%d e C%d\n", i, j);
            }
        }
    }

    return (0);
}