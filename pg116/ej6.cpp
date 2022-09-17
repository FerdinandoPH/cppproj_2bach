#include <iostream>
#include <locale.h>
using namespace std;
#include<cmath>
int ej6(){
    setlocale(LC_ALL, "es_ES");
    double e,r;
    int n;
    cout<<"Bienvenido al programa calculador del interes compuesto"<<endl;
    cout<<"Ejemplo: 1000 euros a 5 años a un 5% de interes anual tras 10 años son "<<1000*pow(1.05,10)<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Introduce los euros: ";
    cin>>e;
    cout<<"Introduce el interés (sin %): ";
    cin>>r;
    cout<<"Introduce los periodos de tiempo: ";
    cin>>n;
    cout<<"El interés compuesto es: "<<e*pow((1+r/100),n)<<endl;
    return 0;
}