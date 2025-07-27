#include <stdio.h>

int main (){

int A, B, soma, subAB, subBA, multip, diviABint, diviBAint, restoAB, restoBA;
float diviAB, diviBA, FA, FB;

scanf("%d %d", &A, &B);

FA = A;
FB = B;
soma = A+B;
subAB = A-B;
subBA = B-A;
multip = A*B;
diviAB = FA/FB;
diviBA = FB/FA;
diviABint = A/B;
diviBAint = B/A;
restoAB = A%B;
restoBA = B%A;

printf("%d\n", soma);
printf("%d\n", subAB);
printf("%d\n", subBA);
printf("%d\n", multip);
printf("%.2f\n", diviAB);
printf("%.2f\n", diviBA);
printf("%d\n", diviABint);
printf("%d\n", diviBAint);
printf("%d\n", restoAB);
printf("%d\n", restoBA);

	return (0);
}