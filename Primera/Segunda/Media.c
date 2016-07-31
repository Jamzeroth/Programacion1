#include <stdio.h>
#include <stdlib.h>

float mediados(float a, float b){
    float med=(a+b)/2;
    return med;
}

void main(){
    float a,b;
    do{
    printf("Ingrese el primer valor: ");
    scanf("%f",&a);
    do{
    printf("Ingrese el segundo valor: ");
    scanf("%f",&b);
    while(tam<=0);
    printf("La media de los dos numeros es: %f",mediados(a,b));
}
