#include <iostream>

using namespace std;

class clase_1{
private:
        int n;
public:
        void leer(void){cin>>n;}
        friend class clase_2;
};

class clase_2{
private:
    int n;
public:
    void leer(void){cin>>n;}
    void escribir(clase_1 &c);
};

void clase_2::escribir(clase_1 &c){
    cout<<"Dato de la clase_1: "<<c.n<<"\nDato de la clase_2: "<<n<<"\n";
}

int main(){
    clase_1 c1;
    clase_2 c2;
    cout<<"Numero entero para la clase_1: ";
    c1.leer();
    cout<<"Numero entero para la clase_2: ";
    c2.leer();
    cout<<"Resultados:\n\n";
    c2.escribir(c1);
}
