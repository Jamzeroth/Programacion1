#include <iostream>
#define PI 3.141592

using namespace std;

class Vehiculo{
private:
    string tipo_vehiculo;
    float carrera,calibre;
    int cilindros;
public:
    Vehiculo();
    Vehiculo(string tip,float car,int cil,float cal);
    float Cal_CilUni();
    float Cal_CilTot();
};

Vehiculo::Vehiculo(){}

Vehiculo::Vehiculo(string tip,float car,int cil,float cal){
    tipo_vehiculo=tip;
    carrera=car;
    cilindros=cil;
    calibre=cal;
}

float Vehiculo::Cal_CilUni(){
    return (PI*calibre*calibre*carrera/4);
}

float Vehiculo::Cal_CilTot(){
    return (PI*calibre*calibre*carrera*cilindros/4);
}
int main(){
    string tip;
    float car,cal;
    int cil;
    cout<<"Ingrese tipo de vehiculO: ";
    cin>>tip;
    cout<<"Ingrese carrera en mm: ";
    cin>>car;
    cout<<"Ingrese calibre en mm: ";
    cin>>cal;
    cout<<"Ingrese numero de cilindros: ";
    cin>>cil;
    Vehiculo V1 = Vehiculo(tip,car,cil,cal);
    cout<<"Cilindrada unitaria: "<<V1.Cal_CilUni()<<endl;
    cout<<"Cilindrada total: "<<V1.Cal_CilTot();
}
