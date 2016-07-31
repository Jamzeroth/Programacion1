//Modulo menor que 15
#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(num<0)
        num=num*-1;
    if(num<15)
        cout<<"El modulo del numero es menor de 15";
    else
        cout<<"El modulo del numero es mayor de 15";
}
