//Identifica tipo de triangulo conociendo tres lados
#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Ingrese los tres lados del triangulo\n";
    cout<<"Ingrese primer lado: ";
    cin>>a;
    cout<<"Ingrese segundo lado: ";
    cin>>b;
    cout<<"Ingrese tercer lado: ";
    cin>>c;
    if(a==b)
        if(a==c)
            cout<<"El triangulo es equilatero";
        else
            cout<<"El triangulo es isoceles";
    else
        if(b==c)
            cout<<"El triangulo es isoceles";
        else
            if(a==c)
                cout<<"El triangulo es isoceles";
            else
                cout<<"El triangulo es escaleno";
}
