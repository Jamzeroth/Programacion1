#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    int cont =0;
    char cadena[80],*p;
    cout<<"Ingrese una linea de texto: ";
    gets(cadena);
    cout<<"Cadena: ";
    p=cadena;
    for(p;*p;p++){
        if(*p>96 && *p<123){
            *p-=32;
            cont++;
            cout<<*p;
        }
        else
            break;
    }
    cout<<"\nSe ingresaron "<<cont<<" letras";
}
