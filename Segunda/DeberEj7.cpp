#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cadena[80],cadena1[80],*p,*q;
    int cont=0;
    cout<<"Ingrese una linea de texto: ";
    gets(cadena);
    p=cadena;
    for(int i=0;i<80;i++)
        cadena1[i]=cadena[i];
    cout<<endl;
    for(p;*p;p++){
        cout<<*p;
        cont++;
    }
    printf(" Direccion: %p\n",cadena);
    q=cadena1;
    do{
        *q=*p;
        cout<<*q;
        q++;
        p--;
        cont--;
    }while(cont>=0);
    printf(" Direccion: %p",q);
}
