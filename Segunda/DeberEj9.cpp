#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cad[80],*p;
    int num=0;
    do{
    cout<<"Ingrese un numero en romano: ";
    gets(cad);
    p=cad;
    for(p;*p;p++){
        switch(*p){
        case 'I':
            num+=1;
        break;
        case 'V':
            num+=5;
        break;
        case 'X':
            num+=10;
        break;
        case 'L':
            num+=50;
        break;
        case 'C':
            num+=100;
        break;
        }
    }
    cout<<"En numero en decimales es: "<<num<<endl;
    p=cad;
    }while(*p!='\0');
}
