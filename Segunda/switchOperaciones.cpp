//Programa que solicite dos numero enteros y que permita seleccionar suma,resta,div,mul
#include <iostream>

using namespace std;

int main()
{
    int a,b,op=0;
    cout<<"Ingrese primer numero: ";
    cin>>a;
    cout<<"Ingrese segundo numero: ";
    cin>>b;
    cout<<"\tMENU\n1) Sumar\n2) Restar\n3) Multiplicacion\n4) Division\nIngrese opcion: ";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<"\nSuma\n";
        a=a+b;
        break;
    case 2:
        cout<<"\nResta\n";
        a=a-b;
        break;
    case 3:
        cout<<"\nMultiplicacion\n";
        a=a*b;
        break;
    case 4:
        cout<<"\nDivision\n";
        a=a/b;
        break;
    }
    cout<<"Resultado: "<<a;
}
