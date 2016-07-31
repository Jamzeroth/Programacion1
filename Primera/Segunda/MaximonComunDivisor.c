#include <stdio.h>
int mcd(int a, int b){
    if(b==0)
        return a;
    else
        return mcd(b,a%b);
}

void main(){
    int a,b;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("El maximo comun divisor es: %d",mcd(a,b));
}
