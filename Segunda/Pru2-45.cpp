#include <iostream>

using namespace std;

int suma(int num){
    if (num==1)
        return 1;
    else
        return num*num+suma(num-1);
}

main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"La suma de los cuadrados es: "<<suma(num);
}
