#include <iostream>
#include <stdio.h>

using namespace std;

struct Producto{
    int cod;
    char nombre[80];
    float precio;
};

Producto IngresarDatos(struct Producto P[],int c){
    cout<<"Ingrese codigo: ";
    cin>>P[c].cod;
    cin.get();
    cout<<"Ingrese nombre: ";
    gets(P[c].nombre);
    cout<<"Ingrese precio: ";
    cin>>P[c].precio;
    cin.get();
    return *P;
}

Producto Modificar(struct Producto P[],int c){
    int auxi;
    float auxf;
    char auxc;
    cout<<"Nuevo codigo: ";
    cin>>P[c].cod;
    cin.get();
    cout<<"Nuevo nombre: ";
    gets(P[c].nombre);
    cout<<"Nuevo precio: ";
    cin>>P[c].precio;
    cin.get();
    return *P;
}

int BuscarCod(struct Producto P[],int cod,int c){
    for(int i=0;i<c;i++)
        if(P[i].cod==cod)
            return i;
    return -1;
}

void Imprimir(struct Producto P[], int c){
    cout<<P[c].cod<<"\t\t";
    char *q=P[c].nombre;
    for(q;*q;q++)
        cout<<*q;
    cout<<"\t\t"<<P[c].precio<<endl;
}

main(){
    int op=0,c=0;
    Producto P[100];
    do{
        cout<<"\n\tMENU\n1) Ingresar Producto\n2) Modificar Producto\n3) Buscar Producto\n0) Salir\nIngrese opcion: ";
        cin>>op;
        cin.get();
        switch (op){
        case 1:
            cout<<"\n\tPRODUCTO "<<c+1<<endl;
            *P=IngresarDatos(P,c);
            c++;
            break;
        case 2:
            cout<<"\n\tMODIFICAR\nCodigo\t\tNombre\t\tPrecio"<<endl;
            for(int i=0;i<c;i++){
                    cout<<i+1<<") ";
                    Imprimir(P,i);
            }
            cout<<"0) Atras\nIngrese opcion: ";
            cin>>op;
            cin.get();
            op--;
            if(op>=0 && op<c)
                Modificar(P,op);
            op=1;
            break;
        case 3:
            cout<<"\nIngrese el codigo del producto que desea buscar: ";
            cin>>op;
            cin.get();
            op=BuscarCod(P,op,c);
            if(op!=-1){
                    cout<<"\nProducto Encontrado\nCodigo\t\tNombre\t\tPrecio"<<endl;
                    Imprimir(P,op);
            }
            else
                cout<<"\nProducto NO Encontrado";
            op=1;
            break;
        }
    }while(op!=0);
}
