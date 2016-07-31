/*Realizar un programa orientado a objetos que defina una clase notas, la cual permita ingresar varias notas de varios alumnos
luego dichas notas se sumaran en una variable estatica suma_notas e ira contando la cantidad de alumnos ingresados en otras
variable estatica num_alumnos el sentinela que usaremos para terminar el ingreso de las notas se considerara cualquier nota negativa.
Finalmente se mostrara el promedio de todas la notas ingresadas.*/
#include <iostream>
#include <iomanip>

using namespace std;

class notas{
private:
    int nota;
    static float suma_notas;
    static float num_alumnos;
public:
    notas(int n){
        if((n>=0)&&(n<=20)){
            nota=n;
            suma_notas+=nota;
            num_alumnos++;
        }
    }
    void visualizar();
    static float media_notas(){
        return (suma_notas/num_alumnos);
    }
};

void notas::visualizar(){
    cout<<"Suma Total: "<<suma_notas<<", Total alumnos: "<<num_alumnos-1<<"\n";
}

float notas::suma_notas=0;
float notas::num_alumnos=0;

int main(){
    int n=0,cont=0;
    notas Nota(n);
    cout<<"Ingreso de notas <ingrese un valor negativo para salir\n";
    while(n>=0){
        cont++;
        cout<<"Ingrese la nota del estudiante "<<cont<<": ";
        cin>>n;
        notas Nota(n);
    }
    Nota.visualizar();
    cout<<"El promedio de notas es: "<<notas::media_notas();
}

