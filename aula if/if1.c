#include <stdio.h>

int main (){
    
int nivelFe, danoNivel;
double defesa, vidaInim, danoInfligido, vidaRestante;

scanf("%d%lf%lf", &nivelFe, &defesa, &vidaInim);

vidaRestante = vidaInim - danoInfligido;

if (defesa >= 100) {
    defesa = 100;
}
if ((nivelFe < 1) || (nivelFe > 5)){
 printf("Nivel invalido!\n");
return(0);
}

if (nivelFe == 1) {
    danoNivel = 5;
}

if (nivelFe == 2) {
    danoNivel = 9;
}

if (nivelFe == 3){
    danoNivel = 13;
}

if (nivelFe == 4){
    danoNivel = 17;
}

if (nivelFe == 5){
    danoNivel = 21;
}

danoInfligido = danoNivel - (defesa/100)*(danoNivel);

vidaRestante = vidaInim - danoInfligido;

printf("Dano infligido: %.2lf\n", danoInfligido);

if (vidaRestante <= 0){
    printf ("Inimigo derrotado!");
}
else{
   printf ("Inimigo nao derrotado! Vida restante: %.2lf", vidaRestante);
}
    return (0);    
}
