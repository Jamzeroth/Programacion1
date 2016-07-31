#include <iostream>

using namespace std;

int primo(int num){
    int i=2;
    for(i;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}

int main(){
    cout<<"Numeros primos entre 1 y 10000\n";
    int i=1;
    for(i;i<=10000;i++)
        if(primo(i))
            cout<<i<<"\t";
}
