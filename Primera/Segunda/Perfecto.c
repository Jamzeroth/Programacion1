#include <stdio.h>
#include <stdlib.h>
void main(){
    int num,sum=0;
    do{
        printf("Ingrese el numero a verificar: ");
        scanf("%d",&num);
    }while(num<=0);
    int i=2;
    for(i; i<=num; i++)
        if(num%i==0)
            sum=sum+num/i;
    if(num==sum)
        printf("El numero es perfecto");
    else
        printf("El numero no es perfecto");
}
