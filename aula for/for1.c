#include <stdio.h>

int main (){

int n, i;
double coef=0, resultado=0, x;

scanf ("%d %lf", &n, &x);

for (i=0 ; i<=n ; i++){
    
    scanf ("%lf", &coef);
    
    resultado = (resultado * x) + coef;
}

printf ("%.2lf", resultado);

    return (0);
}
