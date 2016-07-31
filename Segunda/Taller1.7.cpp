#include <iostream>

using namespace std;

int multiplo(int a,int b){
    if(b%a==0)
        return 1;
    else
        return 0;
}

int main(){
    int pri,seg;
    cout<<"Ingrese 0 para salir\n";
    cout<<"Ingrese primer entero: ";
    cin>>pri;
    cout<<"Ingrese segundo entero: ";
    cin>>seg;
    while(pri!=0 && seg!=0){
        if(multiplo(pri,seg))
            cout<<"Resultado: Verdadero\n";
        else
            cout<<"Resultado: Falso\n";
        cout<<"Ingrese primer entero: ";
        cin>>pri;
        cout<<"Ingrese segundo entero: ";
        cin>>seg;
    }
}
