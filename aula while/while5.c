#include <stdio.h>

int main () {

char instrucao1, instrucao2, lixo;
int  funct = -1, registradorDestino, registrador1, registrador2, lixoNum;
unsigned int instrucao = 0;

do {
    scanf("%c", &lixo);

} while (lixo != 'a' && lixo != 's' && lixo != 'o');

instrucao1 = lixo;

do {
    scanf("%c", &lixo);

} while (lixo != 'd' && lixo != 'u' && lixo != 'n' && lixo != 'r' && lixo != 'l');

instrucao2 = lixo;

do {
    scanf("%c", &lixoNum);

} while (lixoNum != '$');

scanf ("s%d", &registradorDestino);

do {
    scanf("%c", &lixoNum);

} while (lixoNum != '$');

scanf ("s%d", &registrador1);

do {
    scanf("%c", &lixoNum);

} while (lixoNum != '$');

scanf ("s%d", &registrador2);

switch (instrucao1)
{
case 'a':
    if (instrucao2 == 'd'){
        funct = 32;
    }
    else{ funct = 36; }
    break;
    
case 's':
if (instrucao2 == 'u'){
    funct = 34;
}
else{funct = 42; }
    break;

case 'o':
    funct = 37;
    break;

default:
    break;
}

instrucao |= (0 << 26);
instrucao |= (registrador1 << 21);
instrucao |= (registrador2 << 16);
instrucao |= (registradorDestino << 11);
instrucao |= (0 << 6);
instrucao |= funct; 

    printf("%08X\n", instrucao);

    return (0);
}