#include <iostream>

using namespace std;

class vector{
private:
    int *p;
    int n_elementos;
public:
    vector(int ne){
        n_elementos=ne;
        p=new int [n_elementos]; //asignamos memoria
    }
    ~vector(void){delete p;}
    void escribir(){
        int i;
        cout<<"Los elementos son: \n";
        for(i=0;i<n_elementos;i++)
            cout<<i+1<<".- "<<p[i]<<endl;
    }
    friend void leer(vector &vec);
};

void leer (vector &vec){
    int i;
    cout<<"Ingreso de los elementos: \n";
    for(i=0;i<vec.n_elementos;i++){
        cout<<"Elemento "<<i+1<<": ";
        cin>>vec.p[i];
    }
}

int main(){
    vector V1(5);
    leer(V1);
    V1.escribir();
}
