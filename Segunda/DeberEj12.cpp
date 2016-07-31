#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    int op=1,cont=0;
    char cad[80],*p;
    do{
        cout<<"\tMENU\n1) Cuenta caracteres blancos\n2) Cuenta letras\n3) Cuenta digitos\n0) Salir\nIngrese opcion: ";
        cin>>op;
        cin.get();
        switch (op){
            case 1:
                cout<<"Ingrese una linea de texto: ";
                gets(cad);
                p=cad;
                for(p;*p;p++)
                    if(*p==32)
                        cont++;
                cout<<"En la linea se ingresaron "<<cont<<" espacios\n";
                cont=0;
            break;
            case 2:
                cout<<"Ingrese una linea de texto: ";
                gets(cad);
                p=cad;
                for(p;*p;p++)
                    if(*p>64 && *p<91 || *p>96 && *p<123)
                        cont++;
                cout<<"En la linea se ingresaron "<<cont<<" letras del alfabeto ingles\n";
                cont=0;
            break;
            case 3:
                cout<<"Ingrese una linea de texto: ";
                gets(cad);
                p=cad;
                for(p;*p;p++)
                    if(*p>47 && *p<58)
                        cont++;
                cout<<"En la linea se ingresaron "<<cont<<" digitos\n";
                cont=0;
            break;
        }
    }while(op!=0);
}
