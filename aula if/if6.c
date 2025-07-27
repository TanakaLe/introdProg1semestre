#include <stdio.h>
int main (){

char at1, at2, at3, at4, at5;
scanf ("%c %c %c %c %c", &at1, &at2, &at3, &at4, &at5);

if (at1 == 'T'){
    if ((at2 == 'T' || at3 == 'T' || at4 == 'T' || at5 == 'T') && (at2 == 'A' || at3 == 'A' || at4 == 'A' || at5 == 'A') && (at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S'))
    {
        printf ("Essa reliquia eh boa para personagens ofensivos e eh um lixo para suportes.");
        return (0);  
    }
    if ((at2 == 'T' || at3 == 'T' || at4 == 'T' || at5 == 'T') && ((at2 == 'A' || at3 == 'A' || at4 == 'A' || at5 == 'A') || (at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S')))
    {
        printf ("Essa reliquia tem potencial para personagens ofensivos e eh um lixo para suportes.");
        return (0);
    }
}
if (at1 =='A' || at1 == 'S'){
    if ((at2 == 'T' || at3 == 'T' || at4 == 'T' || at5 == 'T') && (at2 == 'A' || at3 == 'A' || at4 == 'A' || at5 == 'A') && (at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S'))
    {
        if (at1 =='S'&&(at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S') && ((at2 == 'V' || at3 == 'V' || at4 == 'V' || at5 == 'V') || (at2 == 'D' || at3 == 'D' || at4 == 'D' || at5 == 'D')))
        {
            printf ("Essa reliquia tem potencial para personagens ofensivos e tem potencial para suportes.");
            return (0);
        }
        printf ("Essa reliquia tem potencial para personagens ofensivos e eh um lixo para suportes.");
        return (0);
    }
    
}
    if (at1 == 'S'){

        if ((at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S') && (at2 == 'V' || at3 == 'V' || at4 == 'V' || at5 == 'V') && (at2 == 'D' || at3 == 'D' || at4 == 'D' || at5 == 'D'))
        {
            printf ("Essa reliquia eh um lixo para personagens ofensivos e eh boa para suportes.");
            return (0);
        }
        if ((at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S') && ((at2 == 'V' || at3 == 'V' || at4 == 'V' || at5 == 'V') || (at2 == 'D' || at3 == 'D' || at4 == 'D' || at5 == 'D')))
        {
            printf ("Essa reliquia eh um lixo para personagens ofensivos e tem potencial para suportes.");
            return (0);
        }
       
    }        
if (at1 == 'V' || at1 == 'D'){
    if ((at2 == 'S' || at3 == 'S' || at4 == 'S' || at5 == 'S') && (at2 == 'V' || at3 == 'V' || at4 == 'V' || at5 == 'V') && (at2 == 'D' || at3 == 'D' || at4 == 'D' || at5 == 'D'))
        {
            printf ("Essa reliquia eh um lixo para personagens ofensivos e tem potencial para suportes.");
            return (0);
        }
        
}

printf ("Essa reliquia eh um lixo para personagens ofensivos e eh um lixo para suportes.");

return (0);
}