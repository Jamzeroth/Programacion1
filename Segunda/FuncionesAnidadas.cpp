//funcion valor_h, funcion que calcula sen
#include <iostream>
#define PI 3.14159

using namespace std;

float pot(float base,int ex){
    int i=1;
    float resul=base;
    for(i;i<ex;i++)
        resul*=base;
    return resul;
}

int fact(int num){
    if(num>1)
        return num*fact(num-1);
    else
        return 1;
}

float seno(float ang){
    ang=ang*PI/180;
    int i=1,aux=1;
    float resul=0;
    for(i;i<=9;i+=2){
            resul=resul+aux*(pot(ang,i)/fact(i));
            aux=aux*-1;
    }
    return resul;
}

float valor_h(float v,float ang,float g){
    return ((v*v*seno(ang)*seno(ang))/(2*g));
}

main(){
    float vel,ang,g;
    cout<<"Ingrese la velocidad de proyeccion: ";
    cin>>vel;
    cout<<"Ingrese angulo en grados: ";
    cin>>ang;
    cout<<"Ingrese aceleracion gravitacional: ";
    cin>>g;
    cout<<"La altura es: "<<valor_h(vel,ang,g);
}
