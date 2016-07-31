#include <iostream>

using namespace std;

main(){
    int v=5;
    int *pv;
    pv=&v;
    cout<<"a)"<<endl;
    cout<<"*pv="<<*pv<<", v="<<v<<endl;
    *pv=0;
    cout<<"*pv="<<*pv<<", v="<<v<<endl;

    float v1=1.5;
    float *pv1;
    pv1=&v1;
    cout<<"b)"<<endl;
    cout<<"*pv="<<*pv1<<", v="<<v1<<endl;
    *pv1=0;
    cout<<"*pv="<<*pv1<<", v="<<v1<<endl;

    double v2=5;
    double *pv2;
    pv2=&v2;
    cout<<"c)"<<endl;
    cout<<"*pv="<<*pv2<<", v="<<v2<<endl;
    *pv2=0;
    cout<<"*pv="<<*pv2<<", v="<<v2<<endl;

    char v3='A';
    char *pv3;
    pv3=&v3;
    cout<<"d)"<<endl;
    cout<<"*pv="<<*pv3<<", v="<<v3<<endl;
    *pv3=0;
    cout<<"*pv="<<*pv3<<", v="<<v3<<endl;
}
