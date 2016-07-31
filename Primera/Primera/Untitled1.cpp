#include <conio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

class persona
{
	protected:
		char nombre[25];
		char apellido[25];
		char cedula[50];
		char telef[10];
		char direcc[50];
	public:
		persona(char *nombre,char *apellido,char *cedula,char *telef,char *direcc)
		{
			strcpy(persona::nombre,nombre);
			strcpy(persona::cedula,cedula);
			strcpy(persona::telef,nombre);
			strcpy(persona::direcc,cedula);
			strcpy(persona::apellido,apellido);
		}
		void ingresar_personas()
		{
			cout<<"Ingrese el nombre: ";
			cin>>nombre;
			cout<<"Ingrese el apellido: ";
			cin>>apellido;
			cout<<"Ingrese la cedula: ";
			cin>>cedula;
			cout<<"Ingrese el telefono: ";
			cin>>telef;
			fflush(stdin);
			cout<<"Ingrese la direccion: ";
			gets(direcc);
		}
		void muestra_persona()
		{
			cout<<"Nombre:   "<<nombre<<" "<<apellido<<endl;
			cout<<"Cedula:   "<<cedula<<endl;
			cout<<"Telefono: "<<telef<<endl;
			cout<<"Direccion:"<<direcc<<endl;
		}
};
class cliente:public persona
{
	private:
		char ccliente[10];
	public:
		cliente(char *ccliente,char *nombre,char *apellido,char *cedula,char *telef,char *direcc):persona(nombre,apellido,cedula,telef,direcc)
		{
			strcpy(cliente::ccliente,ccliente);
		}
		void ingresar_cliente()
		{
			ingresar_personas();
			cout<<"Ingrese el codigo del cliente: ";
			cin>>ccliente;
		}

		void muestra_cliente()
		{
			muestra_persona();
			cout<<"Codigo de cliente:  "<<ccliente<<endl;
		}
		void copiar_persona()
		{
			fstream cliente; //objeto de la clase
			cliente.open("clientes.txt",ios::out|ios::app);
			cliente<<nombre<<" "<<apellido<<" "<<cedula<<" "<<telef<<" "<<direcc<<" "<<ccliente<<endl;
			cliente.close();
		}
		void ver_cliente()
		{
			ifstream lcliente;
			lcliente.open("clientes.txt",ios::out |ios::in);
			lcliente>>nombre;
			while(!lcliente.eof()){
				lcliente>>apellido;
				lcliente>>cedula;
				lcliente>>telef;
				lcliente>>direcc;
				lcliente>>ccliente;
				cout<<"Nombre: "<<nombre<<endl;
				cout<<"Apellido: "<<apellido<<endl;
				cout<<"Telefono: "<<telef<<endl;
				cout<<"Direccion: "<<direcc<<endl;
				cout<<"Codigo Cliente: "<<ccliente<<endl;
				lcliente>>nombre;
			}
			lcliente.close();
		}
};
class vendedor:public persona
{
	private:
		char id[50];
		char cargo[10];
		float salario;
	public:
		vendedor(char *id,char*cargo,float salario,char *nombre,char *apellido, char *cedula,char *telef,char *direcc):persona(nombre,apellido,cedula,telef,direcc)
		{
			strcpy(vendedor::cargo,cargo);
			vendedor::salario=salario;
			strcpy(vendedor::id,id);
		}
		void ingresar_vendedor()
		{
			ingresar_personas();
			cout<<"Ingrese el cargo que tiene: ";
			cin>>cargo;
			cout<<"Ingrese el salario del vendedor: ";
			cin>>salario;
			cout<<"Ingrese el ID del vendedor: ";
			cin>>id;
		}
		void muestra_vendedor()
		{
			muestra_persona();
			cout<<"ID:    "<<id<<endl;
			cout<<"Cargo: "<<cargo<<endl;
			cout<<"Salario:  "<<salario<<endl;
		}
		void copiar_vendedor()
		{
			fstream vendedor; //objeto de la clase
			vendedor.open("vendedores.txt",ios::out|ios::app);
			vendedor<<nombre<<" "<<apellido<<" "<<cedula<<" "<<telef<<" "<<direcc<<" "<<cargo<<" "<<salario<<" "<<id<<endl;
			vendedor.close();
		}
		void ver_vendedor()
		{
			ifstream lvendedor;
			lvendedor.open("vendedores.txt",ios::out |ios::in);
			lvendedor>>nombre;
			while(!lvendedor.eof()){
				lvendedor>>apellido;
				lvendedor>>cedula;
				lvendedor>>telef;
				lvendedor>>direcc;
				lvendedor>>cargo;
				lvendedor>>salario;
				lvendedor>>id;
				cout<<"Nombre: "<<nombre<<endl;
				cout<<"Apellido: "<<apellido<<endl;
				cout<<"Telefono: "<<telef<<endl;
				cout<<"Direccion: "<<direcc<<endl;
				cout<<"Cargo: "<<cargo<<endl;
				cout<<"Salario: "<<salario<<endl;
				cout<<"Id: "<<id<<endl;
				lvendedor>>nombre;
			}
			lvendedor.close();
		}
};
class producto
{
	private:
		char nproducto[50];
		char codproducto[50];
		int cantidadprod;
		float costo;
	public:
		producto(char *nombreproducto,char*codproducto,int cantidadprod, float costo)
		{
			strcpy(producto::nproducto,nproducto);
			producto::costo=costo;
			producto::cantidadprod=cantidadprod;
			strcpy(producto::codproducto,codproducto);
		}
		void ingresar_producto()
		{
			cout<<"Ingrese el nombre de producto: ";
			cin>>nproducto;;
			cout<<"Ingrese el codigo de producto: ";
			cin>>codproducto;
			cout<<"Ingrese la cantidad de productos : ";
			cin>>cantidadprod;
			cout<<"Ingrese el costo del producto: ";
			cin>>costo;
		}
		void muestra_producto()
		{
			cout<<"Nombre de producto:   "<<nproducto<<endl;
			cout<<"Codigo de producto:   "<<codproducto<<endl;
			cout<<"Cantidad de productos: "<<cantidadprod<<endl;
			cout<<"Ingrese el costo del producto: "<<costo<<endl;
		}
			void copiar_producto()
		{
			fstream producto; //objeto de la clase
			producto.open("productos.txt",ios::out|ios::app);
			producto<<nproducto<<" "<<codproducto<<" "<<cantidadprod<<" "<<costo<<endl;
			producto.close();
		}
			void ver_producto()
		{
			ifstream lectura;
			lectura.open("productos.txt",ios::out |ios::in);
			lectura>>nproducto;
			while(!lectura.eof()){
				lectura>>codproducto;
				lectura>>cantidadprod;
				lectura>>costo;
				cout<<"Nombre del producto:  "<<nproducto<<endl;
				cout<<"Codigo del producto: "<<codproducto<<endl;
				cout<<"Cantidad de producto: "<<cantidadprod<<endl;
				cout<<"Costo del producto: "<<costo<<endl;
				lectura>>nproducto;
			}
			lectura.close();
		}
};
main ()
{
	float cant,media;
	int i;
	cliente *cantobjcli;
	vendedor *cantobjvend;
	producto *cantobjprod;
	do{
		cout<<"Ingresar la cantidad de clientes que desea agregar: ";
		cin>>cant;
	}while(cant<0);
	cantobjcli=(cliente *) malloc(cant*sizeof(cliente));
	for(i=0;i<cant;i++){
		cout<<"Ingrese los datos del cliente: " <<i+1<<endl;
		cantobjcli[i].ingresar_cliente();
		cantobjcli[i].muestra_cliente();
		cantobjcli[i].copiar_persona();
		cantobjcli[i].ver_cliente();
	}

	/*int opcion=1;
	cout<<"\t\t\tSistema de control"<<endl;
	while(opcion==1){
		cout<<"\t\t\tI
	}*/
	free(cantobjcli);
	getch();
}
