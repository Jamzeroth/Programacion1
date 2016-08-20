#include <iostream>

using namespace std;

class Alumno{
private:
    string nombre;
    float nota[3];
public:
    void ingresar();
    void mostrar();
    string get_nombre();
};

void Alumno :: ingresar(){
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"parcial 1: ";
    cin>>nota[0];
    cout<<"parcial 2: ";
    cin>>nota[1];
    cout<<"parcial 3: ";
    cin>>nota[2];
}

void Alumno :: mostrar(){
    cout<<"Nombre: "<<nombre<<"\tNotas: ";
    for(int i=0; i<3; i++){
        cout<<nota[i]<<" ";
    }
    cout<<"\tPromedio: "<<((nota[0]+nota[1]+nota[2])/3);
}

string Alumno :: get_nombre(){
    return nombre;
}

int main(){
    int op,n,cont=0;;
    string nom;
    cout<<"Ingrese el numero de alumnos: ";
    cin>>n;
    Alumno a[n];
    do{
        cout<<"\tMENU\n1) Ingresar datos Alumnos\n2) Lista de alumnos matriculados\n3) Reporte de Alumnos";
        cout<<"\n0) Salir\nIngrese opcion: ";
        cin>>op;
        switch (op){
        case 1:
            for(int i=0;i<n;i++){
                cout<<"\n\tAlumno"<<(i+1)<<endl;
                a[i].ingresar();
            }
            break;
        case 2:
            cout<<"\nLISTA DE ALUMNOS"<<endl;
            for(int i=0;i<n;i++){
                cout<<(i+1)<<") "<<a[i].get_nombre()<<endl;
            }
            cout<<endl;
            break;
        case 3:
            cout<<"\nREPORTE DE ALUMNOS";
            for(int i=0;i<n;i++){
                cout<<endl<<(i+1)<<") ";
                a[i].mostrar();
            }
            cout<<endl;
            break;
        }

    }while(op!=0);
}
