#include <stdio.h>

int main (){

char atual1, atual2, atual3, minha1, minha2, minha3;
int posição;

scanf("%c%c%c\n%c%c%c", &atual1, &atual2, &atual3, &minha1, &minha2, &minha3);

posição = (minha3 - atual3) + (minha2 - atual2)*26 + (minha1 - atual1)*26*26;

printf("%d", posição);

	return (0);
}