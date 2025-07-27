#include <stdio.h>

int main (){

int metros=0;
float pes=0.0, polegadas=0.0, jardas=0.0, milhas=0.0;

scanf("%d", &metros);

pes = metros*3.28084;
polegadas = metros*39.370078;
jardas = metros*1.09361;
milhas = metros*0.0006213;

printf("%.1f\n", pes);
printf("%.1f\n", polegadas);
printf("%.1f\n", jardas);
printf("%.1f\n", milhas);

	return (0);
}