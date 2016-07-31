#include <iostream>

using namespace std;

struct direccion{
    char ciudad[30];
    char calle[30];
    char NoCasa[10];
};

struct contacto{
    char nombre[30];
    char telefono[10];
    struct direccion dir;
};

void ingreso(struct contacto *datos){
    for(int i=0;0<=2;i++){
        cin.getline(datos[i].nombre,30);
        cin.getline(datos[i].telefono,10);
        cin.getline(datos[i].dir.ciudad,30);
        cin.getline(datos[i].dir.calle,30);
        cin.getline(datos[i].dir.NoCasa,10);
    }
}

void imprimir(struct contacto *datos){
    for(int i=0;i<=2;i++){
        cout<<datos[i].nombre<<endl;
        cout<<datos[i].telefono<<endl;
        cout<<datos[i].dir.ciudad<<endl;
        cout<<datos[i].dir.calle<<endl;
        cout<<datos[i].dir.NoCasa<<endl;
    }
}

main(){
    contacto C[3];
    ingreso(&C[3]);
    imprimir(&C[3]);
}
