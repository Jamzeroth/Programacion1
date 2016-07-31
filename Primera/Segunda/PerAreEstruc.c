#include <stdio.h>
#include <math.h>
#define PI 3.1416

struct punto{
    double x;
    double y;
};

struct circunferencia{
    struct punto centro;
    double radio;
};

double perimetro (struct circunferencia c){
    return 2*PI*c.radio;
}

double area(struct circunferencia c){
    return PI*c.radio*c.radio;
}

double distancia (struct punto p1, struct punto p2){
    return sqrt(pow(p2.x+p1.x,2)+pow(p2.y+p1.y,2));
}

int intersectan (struct circunferencia c1, struct circunferencia c2){
    double dist = distancia(c1.centro, c2.centro);
    printf("%.2f vs %.2f\n",dist,c1.radio+c2.radio);
    return (dist < c1.radio+c2.radio);
}

void main(){
    struct circunferencia ca,cb;
    ca.centro.x=0;
    ca.centro.y=0;
    ca.radio=1;
    cb.centro.x=1.9;
    cb.centro.y=0;
    cb.radio=1;
    printf("p: %.2f, a:%.2f,int?%s\n",perimetro(ca),area(ca),(intersectan(ca,cb)?"Si":"No"));
}
