#include <iostream>
using namespace std;
class Punto{
    private:
        int x,y;
    public:
        friend ostream& operator<<(ostream& os, Punto& p){
                os<<"( "<<p.x<<" , "<<p.y<<" )";
        }
        friend istream& operator>> (istream &in,Punto& p){
            cout<<"Ingrese la componente x: ";
            in>>p.x;
            cout<<"Ingrese la componente y: ";
            in>>p.y;
        }
};
int main(){
    Punto P1,P2;
    cout<<"Ingresar el primer punto: ";
    cin>>P1;
    cout<<"Ingresar el segundo punto: ";
    cin>>P2;
    cout<<"Primer punto: ";
    cout<<P1<<endl;
    cout<<"Segundo punto: ";
    cout<<P2;
    return 0;
}
