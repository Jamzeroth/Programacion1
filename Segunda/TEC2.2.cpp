//Suma de numero impares desde 1 hasta n
#include <iostream>

using namespace std;

int main(){
    int num,sum=0;
    do{
        cout<<"Ingrese un numero: ";
        cin>>num;
        for(int i=1;i<=num;i+=2){
            sum+=i;
        }
        cout<<"La suma es: "<<sum;
        sum=0;
        cout<<endl;
    }while(num>0);
}
