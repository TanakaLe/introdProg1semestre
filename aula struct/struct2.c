#include <stdio.h>
#include <math.h>

#define INVALIDO "Operacao invalida!\n"
#define DIVIZAOZERO "Divisao por zero\n"

enum operacao
{
    sair,
    soma,
    sub1,
    sub2,
    mult,
    div1,
    div2,
    modulo1,
    modulo2
};

typedef struct complexo
{
    float real;
    float imaginario;
} Complexo;

int main()
{

    Complexo c_1, c_2, aux;
    int menu, escreva;

    scanf(" %f %f", &c_1.real, &c_1.imaginario);
    scanf(" %f %f", &c_2.real, &c_2.imaginario);
    do
    {
        scanf(" %d", &menu);
        switch (menu)
        {
        case 1: // soma 2 numeros
            aux.real = (c_1.real + c_2.real);
            aux.imaginario = (c_1.imaginario + c_2.imaginario);
            escreva = 1;
            break;
        case 2: // subtrair primeiro pelo segundo
            aux.real = (c_1.real - c_2.real);
            aux.imaginario = (c_1.imaginario - c_2.imaginario);
            escreva = 1;
            break;
        case 3: // subtrair segundo pelo primeiro
            aux.real = (c_2.real - c_1.real);
            aux.imaginario = (c_2.imaginario - c_1.imaginario);
            escreva = 1;
            break;
        case 4: // multiplicar 2 numeros
            aux.real = (c_1.real * c_2.real - c_1.imaginario * c_2.imaginario);
            aux.imaginario = (c_1.real * c_2.imaginario + c_2.real * c_1.imaginario);
            escreva = 1;
            break;
        case 5: // dividir 1 pelo 2
            if ((c_2.real * c_2.real + c_2.imaginario * c_2.imaginario) == 0 || (c_2.real * c_2.real + c_2.imaginario * c_2.imaginario) == 0 || c_1.real*c_1.imaginario*c_2.real*c_2.imaginario == 0)
            {
                printf(DIVIZAOZERO);
                escreva = 0;
            }
            else
            {
                aux.real = ((c_1.real * c_2.real + c_1.imaginario * c_2.imaginario) / (c_2.real * c_2.real + c_2.imaginario * c_2.imaginario));
                aux.imaginario = (c_1.imaginario * c_2.real - c_1.real * c_2.imaginario) / (c_2.real * c_2.real + c_2.imaginario * c_2.imaginario);
                escreva = 1;
            }
            break;
        case 6: // dividir 2 pelo 1
            if ((c_2.real * c_2.real + c_2.imaginario * c_2.imaginario) == 0 || (c_2.real * c_2.real + c_2.imaginario * c_2.imaginario) == 0 || c_1.real*c_1.imaginario*c_2.real*c_2.imaginario == 0)
            {
                printf(DIVIZAOZERO);
            }
            else
            {
                aux.real = ((c_2.real * c_1.real + c_2.imaginario * c_1.imaginario) / (c_1.real * c_1.real + c_1.imaginario * c_1.imaginario));
                aux.imaginario = (c_2.imaginario * c_1.real - c_2.real * c_1.imaginario) / (c_1.real * c_1.real + c_1.imaginario * c_1.imaginario);
                escreva = 1;
            }
            break;
        case 7: // modulo do 1
            printf("%.2f\n", sqrt(c_1.real * c_1.real + c_1.imaginario * c_1.imaginario));
            escreva = 0;
            break;
        case 8: // modulo do 2
            printf("%.2f\n", sqrt(c_2.real * c_2.real + c_2.imaginario * c_2.imaginario));
            escreva = 0;
            break;
        case 0:
            escreva = 0;
            break;
        default:
            printf(INVALIDO);
            escreva = 0;
            break;
        }
        if (escreva == 1)
        {
            if (aux.imaginario == 0.00 && aux.real == 0.00 )
            {
                printf("0.00\n");
            }else if (aux.real == 0.00)
            {
                printf("%.2fi\n", aux.imaginario);
            }else if (aux.imaginario == 0.00)
            {
                printf("%.2f\n", aux.real);
            }else if (aux.imaginario < 0)
            {
                printf("%.2f %.2fi\n", aux.real, aux.imaginario);
            }else
            {
                printf("%.2f +%.2fi\n", aux.real, aux.imaginario);
            }
        }
        
    } while (menu != 0);

    return (0);
}