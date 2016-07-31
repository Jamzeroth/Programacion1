//Determinar factorial de un numero
//Determinar si un numero es primo

#include <iostream>

using namespace std;

int main(){
    int num,cont=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num%i==0)
            cont++;
    }
    if(cont>2)
    cout<<"El numero no es primo";
    else
    cout<<"El numero es primo";
}
