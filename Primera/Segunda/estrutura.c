#include <stdio.h>

struct vector{
    double x;
    double y;
};

struct vector sumar (struct vector v1, struct vector v2){
    struct vector vres;
    vres.x=v1.x+v2.x;
    vres.y=v1.y+v2.y;
    return vres;
}

void main(){
    struct vector va,vb,vc;
    va.x=0.5;
    va.y=1;
    vb.x=1;
    vb.y=0.5;
    vc=sumar(va,vb);
    printf("res: %.2lf,%.2lf\n",vc.x,vc.y);
}


