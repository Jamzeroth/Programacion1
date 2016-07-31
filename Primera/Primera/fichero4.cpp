#include <fstream>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    ifstream origen("C:/Users/Administrador/Desktop/descarga.jpg", ios::binary);
    char linea[1];
    if(origen.fail())
    cerr << "Error al abrir el archivo: Archiv04.exe" << endl;
    else
    {
        ofstream destino("gato.jpg", ios::binary);
        if(destino.fail())
        cerr <<"Error al crear el archivo: Copia.exe" << endl;
        else
        {
            while(!origen.eof()&&!origen.fail())
            {
                origen.read(linea, sizeof(linea));
                if(origen.good())
                {
                    destino.write(linea, sizeof(linea));
                    if(destino.fail())
                    {
                        cerr << "Error en el archivo: Copia.exe" << endl;
                        exit(1);
                    }
                }
                else if(!origen.eof())
                {
                    cerr << "Error en el archivo: Archiv04.exe" << endl;
                    exit(1);
                }
            }
        }
        destino.close();
    }
    origen.close();
    return 0;
}
