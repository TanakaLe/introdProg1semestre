#include <stdio.h>

int main()
{

  char saque, proximoEf, efAtual = 'x';
  int contador = 1;

  scanf("%c\n", &saque);
  proximoEf = saque;

  while ((proximoEf != efAtual) && (proximoEf == 'C' || proximoEf == 'B' || proximoEf == 'E' || proximoEf == 'D')){

    efAtual = proximoEf;
    scanf("%c ", &proximoEf);

    contador++;
  }

  if (contador % 2 == 0)
  {
    printf("Ana Laura ganhou a partida de ping pong em %d jogadas!", contador);
  }
  else
  {
    printf("Sophia ganhou a partida de ping pong em %d jogadas!", contador);
  }

  return (0);
}