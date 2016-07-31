#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char cad[21], *p;
    int lon,i=0;
    printf("Introduce una linea de texto: \n");
    gets(cad);
    p=cad;
    for(p;*p;p++){
        if(*p>=48 && *p<=57)
            *p='0';
        else
        if(*p>=97 && *p<=122)
            *p=*p-32;
        else
        if(*p>=65 && *p<=90)
            *p=*p+32;
        else
            *p='*';
    }
    p=cad;
    printf("%s",p);
    free(p);
    /*lon = strlen(cad);
    p=(char*)malloc((lon+1)*sizeof(char));
    strcpy(p,cad);
    for(i=0;i<(lon);i++){
        if(cad[i]>=48 && cad[i]<=57)
            p[i]='0';
        else
        if(cad[i]>=97 && cad[i]<=122)
            p[i]=cad[i]-32;
        else
        if(cad[i]>=65 && cad[i]<=90)
            p[i]=cad[i]+32;
        else
            p[i]='*';
    }
    p[i]='\0';
    printf("%s",p);
    free(p);*/
}
