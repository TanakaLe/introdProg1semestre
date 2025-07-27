#include <stdio.h>
#include <math.h>

int main (){

    int N, k=0, aux, digito=0;
        scanf("%d", &N);

//d1^k + d2^k ..... (k = quantid de dígitos)

//aux = n; cópia do valor de n para ele não ser alterado

    for (aux = N; aux > 0; aux /= 10) { //uso da auxiliar e não de n
        k++;                            //achar o quantidade de dígitos (k)
    }

    for(aux = N; aux > 0; aux /= 10){
        digito = digito + pow (aux % 10, k);
    }

    if(digito == N){
        printf("NUMERO DE ARMSTRONG");
    }
     else{  
        printf("NAO E NUMERO DE ARMSTRONG");
    }
    
	return (0);
}