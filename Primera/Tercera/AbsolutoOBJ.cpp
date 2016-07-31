#include <iostream>

using namespace std;

class Absoluto{
private:
    int dat;
public:
    int fijar_numero(){
        cout<<"Ingrese un numero: ";
        cin>>dat;
        return dat;
    }
    int obtener_numero(){
        if(dat<0)
            dat=dat*-1;
        return dat;
    }
};

int main(){
    Absoluto num;
    while(num.fijar_numero()!=0)
        cout<<"El valor absoluto del numero es: "<<num.obtener_numero()<<"\n";
}
