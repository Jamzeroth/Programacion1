#include <stdio.h>
#include <stdlib.h>
void piram(int x){
    int i=0,j=0;
    for(i;i<=x;i++){
        for(j;j<i;j++){
            printf("*");
        }
    j=0;
    printf("\n");
    }
}

void main(){
    int tam;
    do{
    printf("Ingrese el tamaño de la piramide: ");
    scanf("%d",&tam);
    }while(tam<=0);
    piram(tam);
}
