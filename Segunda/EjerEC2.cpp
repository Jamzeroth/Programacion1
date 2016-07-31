#include <iostream>>
#include <stdio.h>

using namespace std;

class Alumno{
private:
    char nombre[50],apellido[50];
    int edad;
public:
    Alumno(){
        cout<<"Ingrese nombre: ";
        gets(nombre);
        cout<<"Ingrese apellido: ";
        gets(apellido);
        cout<<"Ingrese edad: ";
        cin>>edad;
        cin.get();
    }
    float CalcularPromedio(float n1, float n2, float n3){
        n1=(n1+n2+n3)/3;
        return n1;
    }
    void Mostrar(float prom){
        cout<<"\tMOSTRAR DATOS"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Apellido: "<<apellido<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Promedio: "<<prom<<endl;
    }
};

main(){
    int n1,n2,n3;
    Alumno A1=Alumno();
    cout<<"Ingrese nota 1: ";
    cin>>n1;
    cout<<"Ingrese nota 2: ";
    cin>>n2;
    cout<<"Ingrese nota 3: ";
    cin>>n3;
    cin.get();
    A1.Mostrar(A1.CalcularPromedio(n1,n2,n3));
}
