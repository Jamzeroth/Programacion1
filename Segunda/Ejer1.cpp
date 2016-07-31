//funcion que reciba n y determine si es v o f
#include <iostream>

using namespace std;

int relacion(float num){
    float a,b;
    int i=2;
    for(i;i<=num;i++){
        a=num-i+2;
    }
    a+=num;
    b=num*num/2+3*num/2-1;
    if(a==b)
        return 1;
    else
        return 0;
}

int main(){
    float num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(relacion(num))
        cout<<"La relacion se cumple ";
    else
        cout<<"No se cumple la relacion";
}
