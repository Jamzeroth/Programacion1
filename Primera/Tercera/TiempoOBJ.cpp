#include <iostream>

using namespace std;

class Tiempo{
private:
    int h,m,s;
public:
    void ini_tiempo(){
        h=0;
        m=0;
        s=0;
    }
    int ing_tiempo(){
        cout<<"Ingrese las horas: ";
        cin>>h;
        int aux=h;
        if(aux==0)
            return aux;
        cout<<"Ingrese los minutos: ";
        cin>>m;
        cout<<"Ingrese los segundos: ";
        cin>>s;
        dar_tiempo(h,m,s);
        return aux;
    }
    void dar_tiempo(int h,int m,int s){
        (s>59 || s<0)?this->s=0:this->s=s;
        (m>59 || m<0)?this->m=0:this->m=m;
        (h>23 || h<0)?this->h=0:this->h=h;
    }
    void imp_tiempo(){
        int aux=h;
        if(h>12)
            h=h-12;
        if(h<10)
            cout<<"0";
        cout<<h<<":";
        if(m<10)
            cout<<"0";
        cout<<m<<":";
        if(s<10)
            cout<<"0";
        cout<<s;
        imp_estandar(aux);
    }
    void imp_estandar(int h){
        if(h<13)
            cout<<" AM\n";
        else
            cout<<" PM\n";
    }
};

int main(){
    Tiempo hora;
    cout<<"Ingrese 0 en las horas para salir\n";
    hora.ini_tiempo();
    while(hora.ing_tiempo()!=0)
        hora.imp_tiempo();
}
