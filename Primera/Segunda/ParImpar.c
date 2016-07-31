#include <stdio.h>
#include <stdlib.h>
int pad(int x){
    if(x%2)
        return 0;
    else
        return 1;
}

void main(){
    int num;
    do{
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    while(tam<=0);
    if(pad(num))
        printf("El numero es par\n");
    else
        printf("El numero es impar\n");
}
