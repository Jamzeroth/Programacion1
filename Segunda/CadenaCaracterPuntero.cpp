#include <iostream>
#include <stdio.h>

using namespace std;

void buscar(char *p){
    int cont=0;
    for(p;*p;p++)
        if(*p=='a')
        cont++;
    cout<<"Existen "<<cont;
}

main(){
    int cuantos;
    char cadena[80];
    cout<<"Ingrese cadena: ";
    gets(cadena);
    buscar(cadena);
}
