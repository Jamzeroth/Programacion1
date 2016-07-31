#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char cad[21], *ptr;
    int lon;
    printf("Introduce una linea de texto: \n");
    gets(cad);
    lon = strlen(cad); //Calcula la longitud de la cadena
    printf("El tamaño de la cadena de caracteres es: %d\n",lon);
    ptr=(char*)malloc((lon+1)*sizeof(char));//Devuelve un puntero
    strcpy(ptr,cad); //Copia cad a nueva area de memoria
    printf("ptr-->%s\n\n",ptr); //cad esta ahora en ptr
    free(ptr); //Libera memoria apuntada por ptr
}
