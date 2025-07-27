#include <stdio.h>

int main() {

int menuPrincipal = 1, menuConf, volume, brilho, num1, num2, escolhaParImpar;

printf("Bem-vindo ao nosso jogo! Escolha uma opcao:\n");

while (menuPrincipal!=3){

    printf ("1. Iniciar jogo\n2. Configuracoes\n3. Sair\nDigite a opcao desejada:\n");

    scanf("%d ", &menuPrincipal);

    if (menuPrincipal==1){
        printf ("Jogador 1 sera par ou impar:\n");

        scanf ("%d ", &escolhaParImpar);

        printf ("Numero do jogador 1:\n");
        
        scanf ("%d ", &num1);

        printf ("Numero do jogador 2:\n");
        
        scanf ("%d ", &num2);

        if ( (num1+num2) % 2 == 0 && escolhaParImpar == 0 ){
            printf("Jogador 1 ganhou!\n");
        }
        if ( (num1+num2) % 2 == 0 && escolhaParImpar == 1 ){
            printf("Jogador 2 ganhou!\n");
        }
        if ( (num1+num2) % 2 != 0 && escolhaParImpar == 0 ){
            printf("Jogador 2 ganhou!\n");
        }
        if ( (num1+num2) % 2 != 0 && escolhaParImpar == 1 ){
            printf("Jogador 1 ganhou!\n");
        }

    }
    
    if (menuPrincipal==2){

        while(menuConf != 3){

        printf ("Menu de Configuracoes:\n1. Ajustar volume\n2. Ajustar brilho\n3. Voltar\nDigite a opcao desejada:\n");

        scanf ("%d ", &menuConf);

            if (menuConf==1){
                printf ("Insira o volume desejado:\n");
                    scanf("%d ", &volume);
                printf ("Volume ajustado para: %d\n", volume);
            }
            if (menuConf==2){
                printf ("Insira o brilho desejado:\n");
                    scanf ("%d ", &brilho);
                printf ("Brilho ajustado para: %d\n", brilho);
            }
        }
    }
}

  return (0);
}