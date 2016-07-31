#include <stdlib.h>
#include <stdio.h>

int cociente(int a,int b){
    if(a<b)
        return 0;
    else
        return (cociente(a-b,b)+1);
}
int residuo(int a,int b){
    if(a<b)
        return a;
    else
        return (residuo(a-b,b));
}

void main(){
    int a, b,d;
    do{
    printf("Ingrese el numerador: ");
    scanf("%d",&a);
    printf("Ingrese el divisor: ");
    scanf("%d",&b);
    }while(a<b || b==0);
    printf("El cociente es: %d\n",cociente(a,b));
    printf("El residuo es: %d",residuo(a,b));
}
