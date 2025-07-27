#include <stdio.h>

int main (){

float salario, imposto1, imposto2, imposto3;

scanf("%f%f%f%f", &salario, &imposto1, &imposto2, &imposto3);

imposto1 = (salario-1500)*0.1;

imposto2 = ((salario-4000)*0.17) + (4000-1500)*0.1;

imposto3 = ((salario-5000)*0.3) + ((5000-4000)*0.17) + (4000-1500)*0.1;

if (salario <= 1500)
 printf("Isento!\n");
 
if (salario >= 1500.01 && salario <= 4000)
 printf("R$ %.2f", imposto1);
 
if (salario >= 4000.01 && salario <= 5000)
 printf("R$ %.2f", imposto2);
 
if (salario > 5000)
 printf("R$ %.2f", imposto3);
 
	return (0);
}