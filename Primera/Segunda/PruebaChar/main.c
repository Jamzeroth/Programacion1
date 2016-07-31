#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*char c1 = 'a';
    char c2 = '8';
    char c3 = '\n';
    char c4 = 64;
    char c5 = '0';
    char c6 = '1';
    char c7 = '2';
    printf("%c %c %c %c \n",c1,c2,c3,c4);
    printf("%i %i %i \n",c5,c6,c7);*/

    /*float a,b;
    a=5/2*4;
    b=5.0/2.0*4;
    printf("%f %f\n",a,b);*/

    /*int a=1, b=10, r=0;
    r=(a=b);
    printf("%d \n",r);
    r=(a==b);
    printf("%d \n",r);
    r=a=b=5;
    printf("%d %d %d\n",r,a,b);*/

    /*char c='A';
    int i=126;
    double d=12.0346;
    printf("La letra %c es el numero %d\n",c,c);
    printf("El numero decimal %d es el %x en hexadecimal\n",i,i);
    printf("El numero %f se redondea a %.3f \n",d,d);
    printf("Inserte aqui su mensaje: < %s >\n","Este es mi mensaje");
    printf ("El numero %d se ve mal\n",d);*/

    char c1,c2,c3;
    int i=0;
    float d=0;
    int n=0;
    printf("Tres caracteres ");
    n=n+scanf("%c%c%c",&c1,&c2,&c3);
    printf("Entero ");
    n=n+scanf("%d",&i);
    printf("Real ");
    n=n+scanf("%f",&d);
    printf("%c-%c-%c, %d, %f: %d\n",c1,c2,c3,i,d,n);
}

