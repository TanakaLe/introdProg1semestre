#include <stdio.h>

int main(void) {

  float nota_1, nota_2, peso_1, peso_2, media;
  scanf("%f %f %f %f", &nota_1, &nota_2, &peso_1, &peso_2);
  media = (nota_1 * peso_1 + nota_2 * peso_2) / (peso_1 + peso_2);
  printf("%.2f\n", media);

  return 0;
}