#include <iostream>
#include <locale.h>
using namespace std;
#include<cmath>
int ej1(){
    setlocale(LC_ALL, "es_ES");
    float n,r=0;
    cout<<"Introduce un número\n ";
    cin>>n;
    r=sqrt(n);
    cout<<"La raíz cuadrada de "<<n<<" es "<<r<<endl;
    return 0;
}