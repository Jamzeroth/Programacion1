#include <stdio.h>
#include <stdlib.h>
void perfecto(int num){
    int sum=0,i=2;
    for(i; i<=num; i++)
        if(num%i==0)
            sum=sum+num/i;
    if(num==sum)
        printf("\n%d",num);
}
void main(){
    int num,i=1;
    do{
        printf("Ingrese el numero tope: ");
        scanf("%d",&num);
    }while(num<=0);
    printf("Lista de numeros perfectos hasta el %d",num);
    for(i;i<=num;i++)
        perfecto(i);
}
