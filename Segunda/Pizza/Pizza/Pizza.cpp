// Pizza.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Ingrediente{
private:
	float precio;
	string descripcion;
public:
	Ingrediente();
	Ingrediente(string des, float pre);
	float get_precio();
	void Mostrar();
};

class Pizza{
private:
	float costo = 5.50;
	string tipo;
public:
	Pizza();
	Pizza(string tip);
	string get_tipo();
	void Calcular_costo(Ingrediente Ing[], int c);
	void Mostrar(Ingrediente Ing[], int c);
};

Ingrediente::Ingrediente(){}

Ingrediente::Ingrediente(string des, float pre){
	descripcion = des;
	precio = pre;
}

float Ingrediente::get_precio(){
	return precio;
}

void Ingrediente::Mostrar(){
	cout << descripcion<<endl;
}

Pizza::Pizza(){}

Pizza::Pizza(string tip){
	tipo = tip;
}

void Pizza::Calcular_costo(Ingrediente Ing[], int c){
	for (int i = 0; i < c; i++)
		costo+=Ing[i].get_precio();
}

string Pizza::get_tipo(){
	return tipo;
}

void Pizza::Mostrar(Ingrediente Ing[],int c){
	cout << "\nSu pizza tiene los siguientes ingredientes:"<<endl;
	for (int i = 0; i < c; i++)
		Ing[i].Mostrar();
	cout<<"Y tiene un precio de : $" << costo<<endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Ingrediente Ing[10];
	Pizza Piz;
	string des;
	float pre;
	int op, c = 0;
	do{
		cout << "\tMENU\n1) Pizza de Jamon y Salami\n2) Pizza de Peperoni y Salami\n3) Pizza de Jamon y Peperoni\n0) Salir\nOpcion: ";
		cin >> op;
		switch (op)
		{
		case 1:
			Piz = Pizza("Pizza de Jamon y Salami");
			Ing[c] = Ingrediente("Jamon", 1.75);
			c++;
			Ing[c] = Ingrediente("Salami", 2.25);
			c++;
			break;
		case 2:
			Piz = Pizza("Pizza de Peperoni y Salami");
			Ing[c] = Ingrediente("Peperoni", 3);
			c++;
			Ing[c] = Ingrediente("Salami", 2.25);
			c++;
			break;
		case 3:
			Piz = Pizza("Pizza de Jamon y Peperoni");
			Ing[c] = Ingrediente("Jamon", 1.75);
			c++;
			Ing[c] = Ingrediente("Peperoni", 3);
			c++;
			break;
		}
		if (op != 0){
			cout << Piz.get_tipo();
			do{
				cout << "\nDesea aniadir un ingrediente?\n1) Si\t0)No\nOpcion: ";
				cin >> op;
				if (op == 1){
					cout << "Ingrese una descripcion: ";
					cin >> des;
					cout << "Ingrese precio: ";
					cin >> pre;
					Ing[c] = Ingrediente(des, pre);
					c++;
				}
			} while (op != 0);
			Piz.Calcular_costo(Ing, c);
			Piz.Mostrar(Ing,c);
			op = 1;
			c = 0;
		}
	} while (op != 0);
	return 0;
}

