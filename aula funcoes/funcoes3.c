/// ---- ATENCAO: NAO ALTERAR DAQUI ---->
#include <stdio.h>
#include <math.h>

#define PRIMO "primo\n"
#define ENGENHEIRO "primo de engenheiro de grau %d\n"
#define NAO_PRIMO "nao primo\n"

/* Recebe um valor candidato, um vetor de primos obtidos até o momento e um vetor com o tamanho do primeiro vetor. 
   Retorna 1 se candidato for primo, retorna 0 se não for */
int teste_primo(long long int candidato, long long int primos[], int tamanho[]);

/* Recebe um valor candidato, um vetor de primos obtidos até o momento e um vetor com o tamanho do primeiro vetor.
   Retorna o grau de engenheiro do valor candidato */
int teste_engenheiro(long long int candidato, long long int primos[], int tamanho[]);

int main() {
    long long int candidate;
    long long int primos[10000] = {2};
    int tamanho[1] = {1};

    for (int i = 0; i < 12; i++) {
        scanf("%lld", &candidate);

        if (teste_primo(candidate, primos, tamanho)) {
            printf(PRIMO);
        } else {
            int teste = teste_engenheiro(candidate, primos, tamanho);
            if (teste > 0) {
                printf(ENGENHEIRO, teste);
            } else {
                printf(NAO_PRIMO);
            }
        }
    }
}
/// <---- ATE AQUI!!! ----


/// ---- APENAS IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO


int proximo_primo(long long int candidato_atual, long long int primos[], int tamanho[]) {
    for(long long int i = 0; i < tamanho[0]; i++)
    {
        if(!(candidato_atual%primos[i]))
        {
            return 0;
        }
    }
    for(long long int j = primos[tamanho[0] - 1] + 1; j < sqrt(candidato_atual); j++) 
    {
        if(!(candidato_atual%j)) 
        {
            return 0;
        } 
    }
    return 1;
}

int teste_primo(long long int candidato, long long int primos[], int tamanho[]) {
    for(int i = 0; i < tamanho[0] && primos[i] < sqrt(candidato); i++)
    {
        if(!(candidato%primos[i]))
        {
            return 0;
        }
    }
    for(long long int i = primos[tamanho[0] - 1] + 1; i <= sqrt(candidato); i++) {
        if(proximo_primo(i, primos, tamanho))
        {
            primos[tamanho[0]] = i;
            tamanho[0]++;
        }
    }
    if(proximo_primo(candidato, primos, tamanho)) 
    {
        return 1;
    } else
    {
        return 0;
    }
}

int teste_engenheiro(long long int candidato, long long int primos[], int tamanho[]) {
    for(int i = 0; i < tamanho[0]; i++)
    {
        if(!(candidato%primos[i]))
        {
            return i;
        }
    }
}