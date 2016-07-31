#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    int u=3,v;
    int *pu,*pv;
    pu=&u;
    v=*pu;
    pv=&v;
    cout<<"a)"<<endl;
    cout<<"u="<<u<<", &u="<<&u<<", pu="<<pu<<", *pu="<<*pu<<endl;
    cout<<"v="<<v<<", &v="<<&v<<", pv="<<pv<<", *pv="<<*pv<<endl;

    float u1=0.3,v1;
    float *pu1,*pv1;
    pu1=&u1;
    v1=*pu1;
    pv1=&v1;
    cout<<"b)"<<endl;
    cout<<"u="<<u1<<", &u="<<&u1<<", pu="<<pu1<<", *pu="<<*pu1<<endl;
    cout<<"v="<<v1<<", &v="<<&v1<<", pv="<<pv1<<", *pv="<<*pv1<<endl;

    double u2=0.3E45,v2;
    double *pu2,*pv2;
    pu2=&u2;
    v2=*pu2;
    pv2=&v2;
    cout<<"c)"<<endl;
    cout<<"u="<<u2<<", &u="<<&u2<<", pu="<<pu2<<", *pu="<<*pu2<<endl;
    cout<<"v="<<v2<<", &v="<<&v2<<", pv="<<pv2<<", *pv="<<*pv2<<endl;

    char u3='C',v3;
    char *pu3,*pv3;
    pu3=&u3;
    v3=*pu3;
    pv3=&v3;
    cout<<"d)"<<endl;
    cout<<"u="<<u3<<", &u=";
    printf("%p",&u3);
    cout<<", pu=";
    printf("%p",pu3);
    cout<<", *pu="<<*pu3<<endl;
    cout<<"v="<<v3<<", &v=";
    printf("%p",&v3);
    cout<<", pv=";
    printf("%p",pv3);
    cout<<", *pv="<<*pv3<<endl;
}
