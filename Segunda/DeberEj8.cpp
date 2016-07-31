#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cad1[80],cad2[80],*p,*q;
    cout<<"Ingrese una cadena: ";
    gets(cad1);
    cout<<"Ingrese una segunda cadena: ";
    gets(cad2);
    p=cad1;
    q=cad2;
    do{
        p++;
    }while(*p!='\0');
    do{
        *p=*q;
        p++;
        q++;
    }while(*q!='\0');
    p++;
    *p='\0';
    p=cad1;
    q=cad2;
    cout<<"Cadena 1: ";
    for(p;*p;p++)
        cout<<*p;
    cout<<"\nCadena 2: ";
    for(q;*q;q++)
        cout<<*q;
}
