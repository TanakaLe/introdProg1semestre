#include <stdio.h>

#define PLACAR "Placar final: J1 - %d, J2 - %d\n"

int main() {

    char jogada1 = 'x', jogada2  = 'x';
    int contador1 = 0, contador2 = 0;

    while (contador1 < 3 && contador2 < 3) {

        do {
        scanf(" %c", &jogada1);   
        
            if (jogada1 != 'R' && jogada1 != 'P' && jogada1 != 'T') {
            printf("Entrada inválida!\n");
            }
        }
        while(jogada1 != 'R' && jogada1 != 'P' && jogada1 != 'T');
             
        do {
        scanf(" %c", &jogada2);   
        
            if (jogada2 != 'R' && jogada2 != 'P' && jogada2 != 'T') {
            printf("Entrada inválida!\n");
            }
        }
        while(jogada2 != 'R' && jogada2 != 'P' && jogada2 != 'T');  

        if ((jogada1 == 'R' && jogada2 == 'T') || (jogada1 == 'P' && jogada2 == 'R') || (jogada1 == 'T' && jogada2 == 'P')) {
            printf("Jogador 1 venceu!\n");

            contador1++;
        }
        if ((jogada2 == 'R' && jogada1 == 'T') || (jogada2 == 'P' && jogada1 == 'R') || (jogada2 == 'T' && jogada1 == 'P')) {
            printf("Jogador 2 venceu!\n");

            contador2++;
        }
        if ((jogada1 == jogada2) && (jogada1 == 'R' || jogada1 == 'P' || jogada1 == 'T')) {
            printf("Empate!\n");
        }
    }

    if (contador1 > contador2)
    {
        printf("Jogador 1 venceu a partida!\n");
        printf(PLACAR, contador1, contador2);
    }
    else
    {
        printf("Jogador 2 venceu a partida!\n");
        printf(PLACAR, contador1, contador2);
    }
    //'Placar final: J1 - %d, J2 - %d\n'
    return (0);
}