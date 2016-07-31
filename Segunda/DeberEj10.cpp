#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cad[80],*p;
    cout<<"Ingresa una linea de texto: ";
    gets(cad);
    p=cad;
    for(p;*p;p++)
        *p-=30;
    p=cad;
    cout<<"Cadena codificada: ";
    for(p;*p;p++)
        cout<<*p;
    p=cad;
    for(p;*p;p++)
        *p+=30;
    p=cad;
    cout<<"\nCadena real: ";
    for(p;*p;p++)
        cout<<*p;
}
