# include <stdio.h>
float partes(int *a,int *b,float c){
    int aux,j=0;
    *b=0;
    aux=c;
    *a=aux;
    c=c-aux+0.000002;
    do{
            c=c*10;
            aux=c;
            j++;
            while(aux==0){
                c=c*10;
                aux=c;
                j++;
            }
    }while(aux%10!=0);
    *b=aux/10;
    c=j-1;
    return c;
}

void main(){
    int ent,dent;
    float n;
    printf("Ingrese un numero decimal: ");
    scanf("%f",&n);
    n=partes(&ent,&dent,n);
    printf("Parte entera: %d, parte decimal: %d, numero de decimales: %.0f",ent,dent,n);
}
