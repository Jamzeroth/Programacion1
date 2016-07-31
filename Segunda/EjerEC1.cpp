#include <iostream>

using namespace std;

class Operaciones{
    public:
    void Metodo1(int num){
        if(num>0)
            cout<<"El numero es positivo"<<endl;
        else if(num<0)
            cout<<"El numero es negativo"<<endl;
    }
    void Metodo2(int num){
        if(num%10==1)
            cout<<"El numero termina en uno"<<endl;
        else
            cout<<"El numero NO termina en uno"<<endl;
    }
};

main(){
    int num;
    Operaciones O1;
    do{
    cout<<"Ingrese un numero: ";
    cin>>num;
    O1.Metodo1(num);
    }while(num!=0);
    do{
        cout<<"Ingrese un numero entre 1 y 10000: ";
        cin>>num;
    }while(num<1 || num>10000);
    O1.Metodo2(num);
}
