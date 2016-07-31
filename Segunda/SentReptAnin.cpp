#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,num,deno;
    float fac,sum=0;
    cout<<"Ingrese numero de terminos: ";
    cin>>n;
    deno=n+1;
    for(num=1;num<=n;num++){
        fac=1;
        for(int i=1;i<=num;i++)
            fac=fac*i;
        cout<<pow(-1,num+1)*fac/(deno-num);
        if(pow(-1,num+1)>0&&num>1)
            cout<<"+";
        sum+=pow(-1,num+1)*(fac/(deno-num));
    }
    cout<<"\nSuma: "<<sum;
}
