#include <iostream>

using namespace std;

main(){
   long valor1=200000, valor2;
   long *Ptr;
   Ptr=&valor1;
   cout<<*Ptr<<endl;
   valor2=*Ptr;
   cout<<valor2<<endl;
   cout<<&valor1<<endl;
   cout<<Ptr<<endl;
}
