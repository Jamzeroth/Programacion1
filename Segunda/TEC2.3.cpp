//Km/Galon y promedio
#include <iostream>

using namespace std;

int main(){
    float gal,km,prom=0;
    int cont=0;
    do{
        cout<<"Ingrese los galones usados (0 para fin): ";
        cin>>gal;
        if(gal>0){
        cout<<"Ingrese los kilometros conducidos: ";
        cin>>km;
        cout<<"Los Km/galon para este tanque fue: "<<(km/gal);
        cont+=1;
        prom+=km/gal;
        }
        cout<<endl<<endl;
    }while(gal>0);
    cout<<"El promedio de los Km/galon fue: "<<(prom/cont);
}
