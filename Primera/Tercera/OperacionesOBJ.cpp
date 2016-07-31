#include <iostream>

using namespace std;

class Operaciones{
    private:
        double a,b;
    public:
        double suma(){
            cout<<"Ingrese el primer numero: ";
            cin>>a;
            cout<<"Ingrese el segundo numero: ";
            cin>>b;
            return a+b;
        }
        double resta(){
            cout<<"Ingrese el minuendo: ";
            cin>>a;
            cout<<"Ingrese el sustraendo: ";
            cin>>b;
            return a-b;
        }
        double multi(){
            cout<<"Ingrese el primer numero: ";
            cin>>a;
            cout<<"Ingrese el segundo numero: ";
            cin>>b;
            return a*b;
        }
        double divi(){
            cout<<"Ingrese el dividendo: ";
            cin>>a;
            do{
            cout<<"Ingrese el divisor: ";
            cin>>b;
            }while(b==0);
            return a/b;
        }
};

int main(){
    int opc;
    double val;
    Operaciones res;
    while(opc!=0){
        do{
            cout<<"\n         MENU\n";
            cout<<"1)Suma\n2)Resta\n3)Multiplicacion\n";
            cout<<"4)Division\n0)Salir\nOpcion: ";
            cin>>opc;
        }while(opc<0 || opc>4);
        switch(opc){
        case 1:
            val=res.suma();
            cout<<"El resultado es: "<<val;
        break;
        case 2:
            val=res.resta();
            cout<<"El resultado es: "<<val;
        break;
        case 3:
            val=res.multi();
            cout<<"El resultado es: "<<val;
        break;
        case 4:
            val=res.divi();
            cout<<"El resultado es: "<<val;
        break;
        }
    }
}
