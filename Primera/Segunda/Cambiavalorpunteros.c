# include <stdio.h>

void orden(int *a, int *b, int *c){
    int aux;
    if (*a>*b)
        if(*a>*c)
            if(*b>*c){
                aux=*a;
                *a=*c;
                *c=aux;
            }else{
                aux=*a;
                *a=*b;
                *b=aux;
                aux=*b;
                *b=*c;
                *c=aux;
            }
        else{
            aux=*a;
            *a=*b;
            *b=aux;
        }
    else if(*a>*c){
            aux=*a;
            *a=*b;
            *b=aux;
            aux=*a;
            *a=*c;
            *c=aux;
        }else if(*b>*c){
                aux=*b;
                *b=*c;
                *c=aux;
        }
}

void main(){
    int a,b,c;
    printf("Ingrese a: ");
    scanf("%d",&a);
    printf("Ingrese b: ");
    scanf("%d",&b);
    printf("Ingrese c: ");
    scanf("%d",&c);
    orden(&a,&b,&c);
    printf("Los numeros de menor a mayor se muestran asi: %d %d %d\n",a,b,c);
}
