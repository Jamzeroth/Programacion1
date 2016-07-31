#include<iostream>

using namespace std;

void invertir(int num){
    cout<<num%10;
    if(num>10)
        invertir(num/10);
}

main(){
    //int e;
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    invertir(num);
    //cout<<"Ingrese el exponente: ";
    //cin>>e;
    //cout<<"El resultado de la potencia es: "<<pot(b,e);
}
