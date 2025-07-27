/// ---- ATENCAO: NAO ALTERAR DAQUI ---->

#include <stdio.h>

#define PREMIO "Voce chegou ao fim!\n"
#define FALHOU "Voce falhou!\n"
#define A "Estado A\n"
#define B "Estado B\n"
#define C "Estado C\n"
#define D "Estado D\n"

void estadoA(int n);
void estadoB(int n);
void estadoC(int n);
void estadoD(int n);
void fim();

int main()
{

    estadoA(0);
}
/// <---- ATE AQUI!!! ----

/// ---- APENAS IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO

void estadoA(int n) // n==0
{

    if (n == 15)
    {
        printf(A);
        printf(FALHOU);
    }
    else
    {
        int entrada;
        scanf(" %d", &entrada);
        n++;
        if (entrada == 2)
        {
            estadoB(n);
        }
        else
        {
            estadoA(n);
        }
    }
}

void estadoB(int n)
{
    if (n == 15)
    {
        printf(B);
        printf(FALHOU);
    }
    else
    {
        int entrada;
        scanf(" %d", &entrada);
        n++;

        if (entrada == 4)
        {
            estadoC(n);
        }
        else
        {
            estadoA(n);
        }
    }
}

void estadoC(int n)
{
    if (n == 15)
    {
        printf(C);
        printf(FALHOU);
    }
    else
    {
        int entrada;
        scanf(" %d", &entrada);
        n++;
        if (entrada == 1)
        {
            estadoD(n);
        }
        else
        {
            estadoA(n);
        }
    }
}

void estadoD(int n)
{
    if (n == 15)
    {
        printf(D);
        printf(FALHOU);
    }
    else
    {
        int entrada;
        scanf(" %d", &entrada);
        n++;
        if (entrada == 3)
        {
            printf(PREMIO);
        }
        else if (entrada == 2)
        {
            estadoB(n);
        }
        else if (entrada == 4)
        {
            estadoC(n);
        }
        else
        {
            estadoA(n);
        }
    }
}

void fim()
{
    printf(PREMIO);
}