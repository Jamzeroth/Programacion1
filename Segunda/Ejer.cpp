//Realice un programa que evalue una ecuacion de segundo grado, considerando que el discriminante no debe ser menor a cero
//y que a no debe ser igual a cero
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c;
    float dis,x1,x2;
    cout<<"Evalua una ecuación de segundo grado, ingrese los valores de la ecuación";
    cout<<"\nIngrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    cout<<"Ingrese c: ";
    cin>>c;
    dis=pow(b,2)-4*a*c;
    if(a==0)
        cout<<"Error el primer termino no existe";
    else
        if(dis<0)
        cout<<"Error el determinante es menor que cero";
        else{
            x1=(-b+dis)/(2*a);
            x2=(-b-dis)/(2*a);
            cout<<"x1 es: "<<x1;
            cout<<"x2 es: "<<x2;
        }
}
