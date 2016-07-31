#include <iostream>

using namespace std;

int main(){
    char d;
    cout<<"Ingrese un caracter: ";
    cin>>d;
    switch (d){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"es vocal";
    break;
    default:
    cout<<"No es una vocal";
    break;
    }
}
