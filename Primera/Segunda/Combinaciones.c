# include <stdio.h>
void combinaciones(int *n, int *r,int *s){
    fact(n);
    fact(r);
    fact(s);
    *n=(*n/(*r*(*s)));
}

int fact(int x){
    if(x==1 || x==0)
        return 0;
    else
        return (fact(x)*fact(x-1));
}

void main(){
    int opc,n,r,aux;
    do{
    printf("\n1)Calcular combinaciones");
    printf("\n2)Calcular factorial");
    printf("\nOpcion: ");
    scanf("%d",&opc);
    }while(opc!=1 && opc!=2);
    switch (opc){
        case 1:
            printf("Ingrese n:");
            scanf("%d",&n);
            printf("Ingrese r:");
            scanf("%d",&r);
            aux=n-r;
            printf("El numero de combinaciones de n: %d\n",n);
            combinaciones(&n,&r,&aux);
            printf("objetos tomados de r:%d en r:%d es: %d\n",r,r,n);
        break;
        case 2:
            printf("\nIngrese un numero: ");
            scanf("%d",&n);
            fact(&n);
            printf("\nEl resultado es: %d",n);
        break;
        default: break;
    }
}
