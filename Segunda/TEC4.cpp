//Convertir calificaciones
#include <iostream>

using namespace std;

int main(){
    int cal;
    cout<<"Ingrese una calificacion: ";
    cin>>cal;
    if(cal>18)
        cout<<"Calificacion: A";
    else if(cal>15)
        cout<<"Calificacion: B";
    else if(cal>12)
        cout<<"Calificacion: C";
    else if(cal>9)
        cout<<"Calificacion: D";
    else
        cout<<"Calificacion: E";
}
