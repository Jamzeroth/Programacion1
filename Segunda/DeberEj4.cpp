#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cadena[80],*p;
    int dig=0,lmay=0,lmin=0;
    cout<<"Ingrese una linea de texto: ";
    gets(cadena);
    p=cadena;
    for(p;*p;p++){
        if(*p>47 && *p<58)
            dig++;
        if(*p>64 && *p<91)
            lmay++;
        if(*p>96 && *p<123)
            lmin++;
    }
    cout<<"Existen "<<dig<<" digitos, "<<lmay<<" mayusculas y "<<" minusculas "<<lmin;
}
