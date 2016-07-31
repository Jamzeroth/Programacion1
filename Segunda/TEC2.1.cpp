//Convertir de binario a decimal
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num,aux=0,cont=0;
    do{
    cout<<"Ingrese un numero en binario: ";
    cin>>num;
    while(num>0){
        if(num%10 != 0){
            num-=1;
            if(num%10 == 0){
                num=num/10;
                aux+=pow(2,cont);
            }
            else{
                cout<<"Error, debe ingresar un numero binario\n";
                num=-1;
                aux=0;
                cont=0;
            }
        }
        else
            num=num/10;
    cont+=1;
    }
    }while(num<0);
    cout<<"El numero en decimal es: "<<aux;
}
