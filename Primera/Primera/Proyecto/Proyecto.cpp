#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Persona{
private:
    char *ci,*nombre,*direccion,*tlf;
public:
    Persona(){
    }
    void IngresarP(){
    }
    void ImprimirP(){
    }
};

class Cliente:public Persona{
private:
    char *ci_v;
public:
    Cliente(){
    }
    void IngresarC(char ci[11]){
        ci_v=(char*)malloc(128*sizeof(char));
        strcpy(ci_v,(const char*)ci);
    }
    /*friend istream& operator>> (istream &in,Punto& p){
            ofstream archivo;  // objeto de la clase ofstream
            archivo.open("c:/ArchivosC/PuntoInfo.txt",ios::app);
            archivo << p.x;
            archivo << p.y << endl;
            archivo.close();
    }*/
    void descargar_archivos(){
    char linea[128],c[128];
    int i=0,dat=0;
    ifstream cl("Clientes.txt");
    if(cl.fail())
        ofstream cl("Clientes.txt");
    while(!cl.eof()){
        cl.getline(linea,sizeof(linea));
        for(i;i<sizeof(linea);i++){
            if(linea[i]!='#'){
                c[i]=linea[i];
            }else
            c[i]='\0';
        }
    }
    cout<<strlen(c)<<endl;
    cout<<c;
    //this->ci_v=(char*)malloc(256*sizeof(char));
    //strcpy(this->ci_v,(const char *)c);
    cl.close();
    //cout<<ci_v;
    }

    void cargar_archivos(){
    }

    char* getci_v(){
        return ci_v;
    }
};

class Vendedor:public Persona{
private:
    float salario;
public:
    Vendedor(){
    }
    void IngresarV(){
    }
    void ImprimirV(){
    }
};

class Producto{
private:
    char *nombrep;
    float precio;
    int id;
public:
    Producto(){
    }
    void IngresarD(){
    }
    void ImprimirD(){
    }
};

class Venta{
private:
    char *ci_c, ci_v;
    Producto *v;
public:
    Venta(){
    }
    void IngresarV(){
    }
    void ImprimirV(){
    }
};

int tam(char p[15]){ //listo
    ifstream C(p);
    int i=0;
    char s[128];
    while(!C.eof()){
            C.getline(s,128);
            i++;
    }
    C.close();
    return i;
}

void gestion(char fun[10],int per){
    int op,val=0;
    do{
            cout<<"\n1)Ingresar "<<fun<<endl;
            cout<<"2)Eliminar "<<fun<<endl;
            cout<<"3)Consultar "<<fun<<endl;
            cout<<"0)Regresar\n";
            cout<<"Opcion: ";
            cin>>op;
    }while(op<0 || op>3);
    if(op!=0)
    if(per==1){
        val=tam("Clientes.txt");
    }
    else{
        val=tam("Vendedores.txt");
    }
    switch (op){
    case 1:
        cout<<val;//cin>>P;
        break;
    case 2:
        break;
    case 3:
        break;
    }
}

int menu(){ //listo
    int op;
    do{
            cout<<"\n\t\tMENU\n";
            cout<<"1)Ingresar venta\n";
            cout<<"2)Reporte de cliente-vendedor\n";
            cout<<"3)Reporte total de ventas\n";
            cout<<"4)Reporte por vendedor\n";
            cout<<"5)Gestionar cliente\n";
            cout<<"6)Gestionar vendedor\n";
            cout<<"0)Salir\n";
            cout<<"Opcion: ";
            cin>>op;
    }while(op<0 || op>6);
    return op;
}

int main(){
    //Crear vectores
    Cliente *C;
    //Verificar archivos, si no crear; Descargar archivos en vectores
    C->descargar_archivos();
    //Operaciones
    int op=-1;
    do{
        op=menu();
        switch (op){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            gestion("cliente",1);
            break;
        case 6:
            gestion("vendedor",0);
            break;
        }
    }while(op!=0);
    //Cargar vectores a los archivos vectores
    //Borrar archivos de ventas?
}
