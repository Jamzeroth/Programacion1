#include <iostream>

using namespace std;

class Distancia{
private:
    double km,m;
public:
    void inicializar(double km, double m){
        this->km=km;
        this->m=m;
    }
    void leer_dis(){
        cout<<"Ingrese la cantidad de km: ";
        cin>>km;
        cout<<"Ingrese la cantidad de m: ";
        cin>>m;
    }
    void ver_dis(){
        cout<<endl<<"km: "<<km;
        cout<<endl<<"m: "<<m;
    }
    /*Distancia suma_dis(Distancia a, Distancia b){
        km=a.km+b.km;
        m=a.m+b.m;
        return (*this);
    }*/
    void suma_dis(Distancia a, Distancia b){
        km=a.km+b.km;
        m=a.m+b.m;
    }
};

int main(){
    Distancia d1,d2,d3;
    d1.inicializar(250,175);
    d2.leer_dis();
    d1.ver_dis();
    d2.ver_dis();
    d3.suma_dis(d1,d2);
    d3.ver_dis();
    d3.suma_dis(d3,d3);
    d3.ver_dis();
}
