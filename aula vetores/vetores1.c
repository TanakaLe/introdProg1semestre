#include <stdio.h>
#include <math.h>

int main (){

    int n, i;
    double X[20], Dp=0.00, m, somaX=0.00;

    scanf("%d", &n);   

    for(i=0; i<n; i++){     
        scanf("%lf", &X[i]);    //leitura das entradas X, que variam
        somaX += X[i];
    }

    m = (somaX)/n; //media 

    for(i=0; i<n; i++){     
        Dp += (pow(X[i]-m, 2)) / (n-1); //soma do DP
    }

    Dp = sqrt(Dp);

    printf("Dp=%.2lf", Dp);

    return 0;
}