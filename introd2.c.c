#include <stdio.h>

int main (){

	int ano_idade, idade, ano_122;
	scanf ("%i", &idade);
	scanf ("%i", &ano_idade);
	ano_122 = ano_idade + 122 - idade;
	printf("%i", ano_122);

	return (0);
}