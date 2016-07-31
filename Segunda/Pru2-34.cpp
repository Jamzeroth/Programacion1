#include <iostream>

using namespace std;

int Redondeo_Entero(float num){
    return num +.5;
}

float Redondeo_Decima(float num){
    int aux = num*10+.5;
    return (float)aux/10;
}

float Redondeo_Centecima(float num){
    int aux=num*100+.5;
    return (float)aux/100;
}

float Redondeo_Milecima(float num){
    int aux = num*1000+.5;
    return (float)aux/1000;
}

main(){
    float num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Numero ingresado: "<<num<<endl;
    cout<<"Numero redondeado a entero: "<<Redondeo_Entero(num)<<endl;
    cout<<"Numero redondeado a decima: "<<Redondeo_Decima(num)<<endl;
    cout<<"Numero redondeado a centecima: "<<Redondeo_Centecima(num)<<endl;
    cout<<"Numero redondeado a milecima: "<<Redondeo_Milecima(num)<<endl;
}
