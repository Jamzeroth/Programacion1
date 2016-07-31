#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    do{
        printf("Ingrese el numero tope: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("Numero\t  Cuadrado\tCubo\n");
    int i=1;
    for(i; i<=n; i++)
        printf(" %d\t   %d\t\t %d\n",i,i*i,i*i*i);
}
