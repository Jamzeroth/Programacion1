//Menu y operaciones, suma de numeros, suma de pares, suma de serie
#include <iostream>

using namespace std;

int main(){
    int op=0,n,sum=0,aux;
    do{
        cout<<"\tMENU\n1)Suma de n enteros\n2)Suma de pares hasta n\n3)Suma de n numeros de una serie\n0)Salir\nOpcion: ";
        cin>>op;
        switch (op){
        case 1:
            do{
            cout<<"Cuantos numeros desea sumar: ";
            cin>>n;
            }while(n<0);
            for(int i=0;i<n;i++){
                cout<<"Ingrese valor "<<i+1<<" : ";
                cin>>aux;
                sum+=aux;
            }
            cout<<"La suma total es: "<<sum<<endl;
            sum=0;
        break;
        case 2:
            do{
            cout<<"Ingrese un numero: ";
            cin>>n;
            }while(n<0);
            for(int i=2;i<=n;i+=2){
                sum+=i;
            }
            cout<<"La suma es: "<<sum<<endl;
            sum=0;
        break;
        case 3:
            do{
            cout<<"Ingrese un numero: ";
            cin>>n;
            }while(n<0);
            aux=1;
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                        sum+=aux;
                }else{
                        sum+=aux*2;
                        aux++;
                }
            }
            cout<<"La suma de los primeros "<<n<<" numeros de la serie es: "<<sum<<endl;
            sum=0;
        break;
        }
    }while(op!=0);
}
