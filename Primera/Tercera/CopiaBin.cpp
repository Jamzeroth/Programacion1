#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    ifstream origen("Archivo.exe", ios::binary);
    char linea[1];
    if(origen.fail())
    cout<<"Error al abrir el archivo: Archivo.exe"<<endl;
    else{
        ofstream destino("Copia.exe", ios::binary);
        if(destino.fail())
        cout<<"Error al crear el archivo: Copia.exe"<<endl;
        else{
            while(!origen.eof()&&!origen.fail()){
                origen.read(linea, sizeof(linea));
                if(origen.good()){
                    destino.write(linea, sizeof(linea));
                    if(destino.fail()){
                        cout<<"Error en el archivo: Copia.exe"<<endl;
                        exit(1);
                    }
                }else if(!origen.eof()){
                    cout<<"Error en el archivo: Archivo.exe"<<endl;
                    exit(1);
                }
            }
        }
        destino.close();
    }
    origen.close();
    return 0;
}
