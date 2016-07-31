//Calcula edad ingresando fecha actual y de nacimiento
#include <iostream>

using namespace std;

int main(){
    int dn,mn,an,da,ma,aa,de,me,ae;
    cout<<"Ingrese fecha de nacimiento\n";
    cout<<"Dia: ";
    cin>>dn;
    if(dn>31 || dn<0)
        cout<<"Error, los meses tienen entre 1 y 31 dias\n";
    cout<<"Mes: ";
    cin>>mn;
    if(mn>12 || dn<0)
        cout<<"Error, los meses se enumeran del 1 al 12\n";
    cout<<"A\xA4o: ";
    cin>>an;
    cout<<"Ingrese fecha actual\n";
    cout<<"Dia: ";
    cin>>da;
    if(da>31 || dn<0)
        cout<<"Error, los meses tienen entre 1 y 31 dias\n";
    cout<<"Mes: ";
    cin>>ma;
    if(ma>12 || dn<0)
        cout<<"Error, los meses se enumeran del 1 al 12\n";
    cout<<"A\xA4o: ";
    cin>>aa;
    if(an>aa)
        cout<<"Error, el a\xA4o de nacimiento no puede ser mayor que el actual";
    ae=aa-an;
    if(ma<mn){
        ae-=1;
        ma+=12;
    }
    me=ma-mn;
    if(da<dn){
        me-=1;
        da+=30;
    }
    de=da-dn;
    cout<<"Su edad es: ";
    cout<<ae<<" a\xA4os "<<me<<" meses y "<<de<<" dias";
}
