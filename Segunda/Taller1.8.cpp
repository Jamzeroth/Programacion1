#include <iostream>

using namespace std;

int perfecto(int num){
    int i=2,sum=0;
    for(i; i<=num; i++)
        if(num%i==0)
            sum=sum+num/i;
    if(num==sum)
        return 1;
    else
        return 0;
}

int main(){
    int i=1,j;
    cout<<"Numeros perfectos entre 1 y 1000\n";
    for(i;i<=1000;i++){
        if(perfecto(i)){
            cout<<i<<" = ";
            j=2;
            for(j; j<=i; j++)
            if(i%j==0)
            if(i/j!=1)
                cout<<i/j<<"+";
            else
                cout<<i/j;
            cout<<"\n";
        }
    }
}
