// ObjetosParametros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Complejo{
private:
	float entero, imaginario;
public:
	Complejo();
	Complejo(float e, float i);
	void suma(Complejo c1, Complejo c2);
	void resta(Complejo c1, Complejo c2);
	void multiplicaion(Complejo c1, Complejo c2);
	void division(Complejo c1, Complejo c2);
	void mostrar();
};

Complejo::Complejo(){}

Complejo::Complejo(float e, float i){
	entero = e;
	imaginario = i;
}

void Complejo::suma(Complejo c1, Complejo c2){
	entero = c1.entero + c2.entero;
	imaginario = c1.imaginario + c2.imaginario;
	mostrar();
}

void Complejo::resta(Complejo c1, Complejo c2){
	entero = c1.entero - c2.entero;
	imaginario = c1.imaginario - c2.imaginario;
	mostrar();
}

void Complejo::multiplicaion(Complejo c1, Complejo c2){
	entero = c1.entero*c2.entero;
	imaginario = c1.imaginario*c2.imaginario;
	mostrar();
}

void Complejo::division(Complejo c1, Complejo c2){
	entero = (c1.entero*c2.entero - c1.imaginario*c2.imaginario)/(c2.entero*c2.entero-c2.imaginario*c2.imaginario);
	imaginario = (c1.entero*c2.imaginario + c1.imaginario*c2.entero) / ((c2.entero*c2.entero - c2.imaginario*c2.imaginario));
	mostrar();
}

void Complejo::mostrar(){
	cout << "\nResultado: " << entero << " + " << imaginario << "i" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int op;
	float ent, ima;
	Complejo CR;
	Complejo C1;
	Complejo C2;
	do{
		cout << "\tMENU\n1) Suma de complejos\n2) Resta de complejos\n3) Multiplicacion de complejos\n4) Division de complejos\n0) Salir\nIngrese opcion: ";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "\nSuma de Complejos\nIngrese Primer numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C1 = Complejo(ent, ima);
			cout << "\nIngrese Segundo numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C2 = Complejo(ent, ima);
			CR.suma(C1, C2);
			break;
		case 2:
			cout << "\nResta de Complejos\nIngrese Primer numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C1 = Complejo(ent, ima);
			cout << "\nIngrese Segundo numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C2 = Complejo(ent, ima);
			CR.resta(C1, C2);
			break;
		case 3:
			cout << "\nMultiplicacion de Complejos\nIngrese Primer numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C1 = Complejo(ent, ima);
			cout << "\nIngrese Segundo numero\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C2 = Complejo(ent, ima);
			CR.multiplicaion(C1, C2);
			break;
		case 4:
			cout << "\nDivision de Complejos\nIngrese Numerador\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C1 = Complejo(ent, ima);
			cout << "\nIngrese Denominador\nEntero: ";
			cin >> ent;
			cout << "Imaginario: ";
			cin >> ima;
			C2 = Complejo(ent, ima);
			CR.division(C1, C2);
			break;
		}
	} while (op!=0);
	return 0;
}
