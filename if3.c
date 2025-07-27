#include <stdio.h>

int main (){

double precoC, precoMP, precoA, precoML, jurosC, jurosMP, jurosA, jurosML;
double Cabum, MercadoPreso, Amazonia, MagazineLuis;
scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &precoC, &precoMP, &precoA, &precoML, &jurosC, &jurosMP, &jurosA, &jurosML);

Cabum = precoC*(jurosC/100)*12 + precoC;
MercadoPreso = precoMP*(jurosMP/100)*12 + precoMP;
Amazonia = precoA*(jurosA/100)*12 + precoA;
MagazineLuis = precoML*(jurosML/100)*12 + precoML;

if ((Cabum < MercadoPreso) && (Cabum < Amazonia) && (Cabum < MagazineLuis)) {
 printf("Cabum, R$%.2lf", Cabum);
}

if((MercadoPreso < Cabum) && (MercadoPreso < Amazonia) && (MercadoPreso < MagazineLuis)) {
 printf("MercadoPreso, R$%.2lf", MercadoPreso);
}

if((Amazonia < MercadoPreso) && (Amazonia < Cabum) && (Amazonia < MagazineLuis)) {
 printf("Amazonia, R$%.2lf", Amazonia);
}

if((MagazineLuis < MercadoPreso) && (MagazineLuis < Amazonia) && (MagazineLuis < Cabum)) {
 printf("MagazineLuis, R$%.2lf", MagazineLuis);
}
return(0);
}