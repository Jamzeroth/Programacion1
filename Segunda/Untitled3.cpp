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
            cout<<"El numero mayor es: "<<a;
        else
            cout<<"El numero mayor es: "<<c;
    else
        if(b>c)
            cout<<"El numero mayor es: "<<b;
        else
            cout<<"El numero mayor es: "<<c;
}
