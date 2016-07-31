#include <iostream>

using namespace std;

int par(int num);
void impr();
int suma(int a,int b);

int main(){
    int num,aux;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(par(num))
    cout<<"El numero es impar";
    else
    cout<<"El numero es par";
    aux=num;
    cout<<"\nIngrese un numero: ";
    cin>>num;
    if(par(num))
    cout<<"El numero es impar";
    else
    cout<<"El numero es par";
    num=suma(num,aux);
    cout<<"\nLa suma es: "<<num;
    impr();
}

int suma(int a, int b){
    return a+b;
}

void impr(){
    cout<<"\nJael\n";
}

int par(int a){
 return a%2;
}
