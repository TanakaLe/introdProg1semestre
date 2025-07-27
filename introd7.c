#include <stdio.h>

int main (){

float altura, comprimento, largura, custo;

scanf("%f\n%f\n%f\n", &altura, &comprimento, &largura);

custo = ((altura*comprimento)*2 + (altura*largura)*2 + comprimento*largura)*115;

printf("%.2f\n", custo);

	return (0);
}