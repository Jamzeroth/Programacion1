//Transformar decimal a binario
#include <iostream>

using namespace std;

int main(){
    int dec;
    do{
    cout<<"Ingrese numero a convertir: ";
    cin>>dec;
    if(dec<0)
        cout<<"Error el numero debe ser positivo\n";
    }while(dec<0);
    cout<<"El numero en binario es: ";
    while(dec/2>=1){
            if(dec%2==0)
            cout<<"0";
            else
            cout<<"1";
        dec/=2;
    }
    if(dec==1)
        cout<<"1";
    else
        cout<<"0";
}
