#include <stdio.h>

int main (){
// processador + placadevideo + 20%pv + placamae
int proc, PV;
float orcam, auxiliar;
char Ti, PM;

scanf("%d %d %c %c %f", &proc, &PV, &Ti, &PM, &auxiliar);


if (proc == 3){
    orcam += 300.99;
}
if (proc == 5){
    orcam += 549.09;
}
if (proc == 7){
    orcam += 899.99;
}
if (proc == 9){
    orcam += 1299.99;
}

if (PV == 0){
    auxiliar = 0;
    orcam += 0;
}
if (PV == 1050){
    auxiliar = 768.50;
    orcam += 768.50;
}
if (PV == 1060){
    auxiliar = 1397.00;
    orcam += 1397.00;
}
if (PV == 1070){
    auxiliar = 2550.99;
    orcam += 2550.99;
}
if (PV == 1080){
    auxiliar = 3050.00;
    orcam += 3050.00;
}

if (Ti=='S' || Ti=='s'){
   orcam += 0.2*auxiliar;
}
if (Ti=='N' || Ti=='n'){
    orcam += 0;
}
if (PM=='A' || PM=='a'){
   orcam += 405.86;
}

if (PM=='R' || PM=='r'){
   orcam += 460.40;
}

if (PM=='M' || PM=='m'){
   orcam += 703.46;
}
if (PM=='S' || PM=='s'){
   orcam += 935.25;
}

printf("%.2f\n", orcam);

	return (0);
}