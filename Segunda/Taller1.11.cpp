#include <iostream>
#include <math.h>
#define PI 3.1416

using namespace std;

float tiemposc(float l,float g){
    float t;
    return t=PI*sqrt(l/g);
}

int main(){
    float longitud,gravedad;
    cout<<"Ingrese longitud del pendulo: ";
    cin>>longitud;
    cout<<"Ingrese aceleracion gravitacional: ";
    cin>>gravedad;
    cout<<"El tiempo de oscilacion del pendulo es de "<<tiemposc(longitud,gravedad);
}
