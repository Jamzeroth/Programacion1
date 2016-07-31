//Imprime el intermedio de tres numeros
#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Ingrese primer numero: ";
    cin>>a;
    cout<<"Ingrese segundo numero: ";
    cin>>b;
    cout<<"Ingrese tercer numero: ";
    cin>>c;
    if(a>b)
        if(a>c)
            if(b>c)
                cout<<"El numero intermedio es: "<<b;
            else
                cout<<"El numero intermedio es: "<<c;
        else
            cout<<"El numero intermedio es: "<<a;
    else
        if(b>c)
            if(a>c)
                cout<<"El numero intermedio es: "<<a;
            else
                cout<<"El numero intermedio es: "<<c;
        else
            cout<<"El numero intermedio es: "<<b;
}
