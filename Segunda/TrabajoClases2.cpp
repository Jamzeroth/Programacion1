#include <iostream>
#define Base 386.72

using namespace std;

class Empleado{
private:
    string cedula,nombre,apellido;
    float sueldo,cargo;
public:
    Empleado();
    Empleado(string ci,string nom,string ape,float car);
    float Cal_Sueldo();
    void Mostrar();
};

Empleado::Empleado(){}

Empleado::Empleado(string ci,string nom,string ape,float car){
    cedula=ci;
    nombre=nom;
    apellido=ape;
    cargo=car;
}

float Empleado::Cal_Sueldo(){
    return (Base + cargo*Base);
}

void Empleado::Mostrar(){
    cout<<"Cedula: "<<cedula<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
}

int main(){
    string ci,nom,ape;
    int op;
    cout<<"Ingrese cedula: ";
    cin>>ci;
    cout<<"Ingrese nombre: ";
    cin>>nom;
    cout<<"Ingrese apellido: ";
    cin>>ape;
    do{
    cout<<"\tMENU\n1) Jefe de taller\n2) Jefe de mantenimiento\n 3) Tecnico\n";
    cout<<"Ingrese cargo: ";
    cin>>op;
    }while(op<1 && op>3);
    Empleado E1;
    switch (op){
    case 1:
        E1 = Empleado(ci,nom,ape,0.3);
        break;
    case 2:
        E1 = Empleado(ci,nom,ape,0.2);
        break;
    case 3:
        E1 = Empleado(ci,nom,ape,0.1);
        break;
    }
    E1.Mostrar();
    cout<<"Sueldo de empleado: "<<E1.Cal_Sueldo()<<endl;
}
