#include <iostream>

using namespace std;

int compara(char a,char b){
    if(a>b)
    return 0;
    else
    return 1;
}

int main(){
    char ch1,ch2;
    cout<<"Ingrese los dos caracteres\n";
    cout<<"Ingrese ch1: ";
    cin>>ch1;
    cout<<"Ingrese ch2: ";
    cin>>ch2;
    while(ch1!='*' && ch2!='*'){
    cout<<"CARACTER 1\tCARACTER 2\tRESULTADO\n";
    cout<<ch1<<"\t"<<ch2<<"\t";
    if(compara(ch1,ch2))
        cout<<"verdadero\n";
    else
        cout<<"falso\n";
    cout<<"Ingrese los dos caracteres\n";
    cout<<"Ingrese ch1: ";
    cin>>ch1;
    cout<<"Ingrese ch2: ";
    cin>>ch2;
    }
}
