#include <stdio.h>

int main() {

  int x, numInicio, numFim, multiplo;
  scanf("%d %d %d", &x, &numInicio, &numFim);

  multiplo = numInicio;

  while (multiplo <= numFim) {
    if (multiplo % x == 0) {

      printf("%d ", multiplo);
    }
    multiplo++;
  }

  return (0);
}