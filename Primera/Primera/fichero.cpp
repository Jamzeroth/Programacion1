#include<fstream>
using namespace std;
int main(){
    ofstream archivo;
    char nombre[25];
    char apellido[25];
	char cedula[25];
    archivo.open("datos.txt");
    archivo<<"Collaguazo"<<endl;
    archivo<<"segunda es todo"<<endl;
    archivo<<"firma: PseInt"<<endl;
    ifstream ar;
    ar.open("datos.txt",ios::out|ios::in);
    while(!archivo.eof()){
    archivo>>nombre;
    archivo>>apellido;
    archivo>>cedula;
    }
    cout<<nombre;
    cout<<apellido;
    cout<<cedula;
    archivo.close();
    ar.close();
    return 0;
}
