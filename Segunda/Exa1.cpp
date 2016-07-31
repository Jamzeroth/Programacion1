//Simular el funcionamiento de un cajero automatico
#include <iostream>

using namespace std;

int main(){
    int valor;
    do{
    cout<<"Ingrese cantidad: ";
    cin>>valor;
    if(valor%10 != 0 || valor>500 || valor<0)
        cout<<"Error, dato no valido\n";
    }while(valor%10 != 0 || valor>500 || valor<0);
    while(valor>=150){
        cout<<"50"<<endl;
        valor-=50;
    }
    while(valor>20){
        cout<<"20"<<endl;
        valor-=20;
    }
    if(valor>10)
        cout<<"10\n10";
    else
        cout<<"10";
}
