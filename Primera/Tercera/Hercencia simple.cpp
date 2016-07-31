#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class empleado{
    private:
        char nombre[50];
        char puesto[50];
        float salario;
    public:
    empleado (char *,char *,float);
    void muestra_empleado();
};

empleado :: empleado(char *nombre, char *puesto, float salario){
    strcpy(empleado::nombre,nombre);
    strcpy(empleado::puesto,puesto);
    empleado::salario=salario;
}
void empleado :: muestra_empleado(){
    cout<<"Empleado: "<<nombre<<endl;
    cout<<"Puesto: "<<puesto<<endl;
    cout<<"Salario: "<<salario<<endl<<endl;
}

class gerente : public empleado{
    private:
    float bono_anual;
    char automovil[50];
    int opc_acciones;
    public:
    gerente(char *,char *, char *, float, int);
    void muestra_gerente();
};

gerente::gerente(char *nombre, char *puesto, char *automovil, float salario, int opc_acciones){
    empleado::empleado (nombre,puesto,salario);
    strcpy (gerente::automovil, automovil);
    gerente :: opc_acciones = op_acciones;
    gerente :: bono_anual = 500*opc_acciones;
}

void gerente :: muestra_gerente(){
    muestra_empleado();
    cout<<"Automovil:   "<<automovil<<endl;
    cout<<"Bonificacion anual:   "<<bono_anual<<endl;
    cout<<"Acciones de la empresa:  "<<opc_acciones<<endl;
}

int main(){
    empleado trabajador ("Juan P","Programador",3600);
    gerente jefe("Peter G","Director General"," BMW ",35000,500);
    trabajador.muestra_empleado();
    jefe.muestra_gerente();
    getch();
}

