#include <stdlib.h>

int factorial(int num){
    if(num<0)
        return 0;
    else if(num>1)
        return (num*factorial(num-1));
    else return 1;
}

void main(){
    int n;
    printf("Ingrese un numero para hallar su factorial: ");
    scanf("%d",&n);
    n=factorial(n);
    printf("El resultado es: %d",n);
}
