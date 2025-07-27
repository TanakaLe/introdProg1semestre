#include <stdio.h>

int main (){

float KMporLet, KMporLgas, precoG, precoMaxEt;

scanf("%f%f%f%f", &KMporLet, &KMporLgas, &precoG);

precoMaxEt = (KMporLet*precoG)/KMporLgas;

printf("%.3f\n", precoMaxEt);

	return (0);
}