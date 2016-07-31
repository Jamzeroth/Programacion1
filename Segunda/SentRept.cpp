//Realice un programa que pida numeros hasta que ingrese un cero y imprima la suma de los numeros
//Ingresar n numeros cuantos son pares y cuantos son impares
//Ingrese un numero y muestra la suma de cada una de sus cifras

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum=0;
    int aux;
    cout<<"Ingrese un numero: ";
    cin>>num;
    aux=num;
    while(num>10){
        num=num/10*10;
        aux=aux-num;
        sum+=aux;
        num/=10;
        aux=num;
    }
    sum+=num;
    cout<<"La suma de los digitos es: "<<sum;
}
