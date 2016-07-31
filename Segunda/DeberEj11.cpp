#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    char cad[80],*p;
    int op,mul,cont;
    float val,aux;
    do{
        op=1;mul=0;cont=0;val=0;
        cout<<"Ingrese un numero en notacion cientifica: ";
        gets(cad);
        p=cad;
            if(*p!='\0'){
                for(p;*p;p++){
                        if(*p=='.' || *p==','){
                            cont=0;
                            p++;
                            op=-1;
                        }
                        if(*p=='E' || *p=='e')
                        break;
                        val+=(*p-48);
                        val*=10;
                        cont++;
                }
                val=val/10;
                if(op==-1){
                    for(int i=0;i<cont;i++)
                        val=val/10;
                    op=1;
                }
                p++;
                if(*p=='-')
                    op*=-1;
                else if(*p!='+')
                        mul+=(*p-48);
                p++;
                if(*p!='\0'){
                    mul*=10;
                    mul+=(*p-48);
                    p++;
                    if(*p!='\0'){
                        mul*=10;
                        mul+=(*p-48);
                    }
                }
                if(op==-1)
                    aux=0.1;
                else
                    aux=10;
                for(int i=0;i<mul;i++)
                    val*=aux;
                cout<<"El valor numerico es: "<<val<<endl;
            }
        p=cad;
    }while(*p!='\0');
}
