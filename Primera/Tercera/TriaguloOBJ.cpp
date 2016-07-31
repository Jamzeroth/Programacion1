#include <iostream>

using namespace std;

class Trian{
private:
    double bas,alt,sup;
public:
    void fijar_dim(){
        cout<<"Ingrese la base: ";
        cin>>bas;
        cout<<"Ingrese la altura: ";
        cin>>alt;
    }
    void mostrar_dim(){
        cout<<"Base: "<<bas<<endl;
        cout<<"Altura: "<<alt<<endl;
        cout<<"Superficie: "<<sup<<endl;
    }
    double area(){
        sup=bas*alt/2;
        return sup;
    }
};

int main(){
    Trian t1;
    double sum=0;
    t1.fijar_dim();
    sum=t1.area();
    t1.mostrar_dim();
    while(t1.area()!=0){
    t1.fijar_dim();
    sum=sum+t1.area();
    t1.mostrar_dim();
    }
    cout<<endl<<"La suma de las superficies es: "<<sum;
}
