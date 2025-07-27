#include <stdio.h>

int main (){

float a, b, c, d, u, v, x, y;

scanf ("%f %f %f %f %f %f", &a, &b, &c, &d, &u, &v);

x = d/(a*d - b*c)*u - b/(a*d - b*c)*v;

y = -c/(a*d-b*c)*u + a/(a*d-b*c)*v;

printf("%.2f\n", x);
printf("%.2f\n", y);

	return (0);
}