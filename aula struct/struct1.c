
#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int main()
{

    Data dataCheque;
    int opcaoMenu, alteracao, anoBissexto = 0, alteracaoBissexto;

    dataCheque.dia = 1;
    dataCheque.mes = 1;
    dataCheque.ano = 1;

    do
    {
        scanf(" %d", &opcaoMenu);
        switch (opcaoMenu)
        {
        case 1: // alterar dia
            scanf(" %d", &alteracao);
            if ((alteracao > 31 || alteracao < 1) ||
                ((dataCheque.mes == 2 && alteracao > 29) || (dataCheque.mes == 2 && alteracao > 28 && anoBissexto == 0)) ||
                ((dataCheque.mes == 4 || dataCheque.mes == 6 || dataCheque.mes == 9 || dataCheque.mes == 11) && (alteracao > 30)))
            {
                printf("Dia invalido\n");
            }
            else
            {
                dataCheque.dia = alteracao;
            }

            break;
        case 2: // alterar o mes
            scanf(" %d", &alteracao);
            if ((alteracao < 1 || alteracao > 12) ||
                (dataCheque.dia > 30 && (alteracao == 4 || alteracao == 6 || alteracao == 9 || alteracao == 11)) ||
                ((alteracao == 2 && dataCheque.dia > 29) || (alteracao == 2 && dataCheque.dia > 28 && anoBissexto == 0)))
            {
                printf("Mes invalido\n");
            }
            else
            {
                dataCheque.mes = alteracao;
            }
            break;
        case 3: // alterar o ano
            scanf(" %d", &alteracao);
            if ((alteracao % 100 != 0 && alteracao % 4 == 0) || (alteracao % 100 == 0 && alteracao % 400 == 0))
            // ano nao termina em 00 e é divisivel por 4 -> é bissexto
            // ano termina em 00 e é divisivel por 400 -> é bissexto
            {
                alteracaoBissexto = 1;
            }
            else
            {
                alteracaoBissexto = 0;
            }
            if ((dataCheque.mes == 2 && dataCheque.dia == 29) && alteracaoBissexto == 0)
            {
                printf("Ano invalido\n");
            }
            else
            {
                dataCheque.ano = alteracao;
                anoBissexto = alteracaoBissexto;
            }
            break;
        case 4: // imprimir data atual
            printf("%d/%d/%d\n", dataCheque.dia, dataCheque.mes, dataCheque.ano);
            break;
        case -1: // encerrar o programa

            break;

        default:
            break;
        }
    } while (opcaoMenu != -1);

        return (0);
}
