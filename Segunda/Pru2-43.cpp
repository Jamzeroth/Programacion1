#include <iostream>

using namespace std;

void imprlineas(int num){
    if(num<0){
        cout<<"-"<<endl;
        num*=-1;
    }
    if(num>10)
        imprlineas(num%10);
    else
        cout<<num;
}

main(){
    int num;
    do{
        cout<<"Ingrese un numero: ";
        cin>>num;
        if(num!=0)
            imprlineas(num);
        cout<<endl;
    }while(num!=0);
}
