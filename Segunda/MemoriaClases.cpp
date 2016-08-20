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
    void mostrar();
};

Complejo::Complejo(){}

Complejo::Complejo(float e, float i){
    entero = e;
    imaginario = i;
}

void Complejo::suma(Complejo c1, Complejo c2){
    entero = c1.entero+c2.entero;
    imaginario = c1.imaginario+c2.imaginario;
}

void Complejo::resta(Complejo c1, Complejo c2){
    entero = c1.entero-c2.entero;
    imaginario = c1.imaginario-c2.imaginario;
}

void Complejo::multiplicaion(Complejo c1, Complejo c2){
    entero = c1.entero*c2.entero;
    imaginario = c1.imaginario*c2.imaginario;
}

void Complejo::mostrar(){
    cout<<"Resultado: "<<entero<<" + "<<imaginario<<"i"<<endl;
}

int main(){
    Complejo CR;
    Complejo C1 = Complejo(4,3);
    Complejo C2 = Complejo(3,2);
    CR.suma(C1,C2);
    CR.mostrar();
}

