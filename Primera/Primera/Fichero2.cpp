# include <iostream>
# include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;

main (){
	ofstream archivo ("Datos5.txt,ios::app");
	int numero;
	cout<<"Introduzca un numero: "<<endl;
	cin>>numero;
	archivo<<"El valor introducido en base 10 es: "<<numero<<endl;
	archivo<<resetiosflags(ios::dec);
	archivo<<setiosflags(ios::oct);
	archivo<<"En base octal es:"<<numero<<endl;
	archivo<<resetiosflags(ios::oct);
	archivo<<setiosflags(ios::hex);
	archivo<<"En base hexadecimal es: "<<numero<<endl;
	archivo<<setiosflags(ios::uppercase|ios::showbase);
	archivo<<"Utilizando los los manipuladores uppercase y showcase"<<"el valor es: "<<numero<<endl;
	archivo<<resetiosflags(ios::uppercase|ios::showbase);
	archivo<<resetiosflags(ios::hex);
	archivo<<setiosflags(ios::showpos|ios::showpoint|ios::fixed);
	archivo<<"Utilizando los manipuladores showpos,"<<"Showpoint y fixed: "<<(float)numero<<endl;
	archivo<<resetiosflags(ios::showpos|ios::showpoint|ios::fixed);
	archivo<<"Finalmente el valor es "<<numero<<endl;
	archivo.close();
}
