#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cad[80],*p;
    cout<<"Introduce una linea de texto: ";
    gets(cad);
    p=cad;
    for(p;*p;p++){
        if(*p>=48 && *p<=57)
            *p='0';
        else
        if(*p>=97 && *p<=122)
            *p=*p-32;
        else
        if(*p>=65 && *p<=90)
            *p=*p+32;
        else
            *p='*';
        cout<<*p;
    }
}
