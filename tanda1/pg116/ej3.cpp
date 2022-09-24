#include <iostream>
using namespace std;
#include<cmath>
int ej3(){
    double km,mi=0;
    int op=0;
    cout<<"Introduce una opción:\n1. Convertir de km a millas\n2. Convertir de millas a km\n ";
    cin>>op;
    if(op==1){
        cout<<"Introduce los km\n ";
        cin>>km;
        mi=km/1.609;
        cout<<km<<" km son "<<mi<<" millas"<<endl;
    }else if(op==2){
        cout<<"Introduce las millas\n ";
        cin>>mi;
        km=mi*1.609;
        cout<<mi<<" millas son "<<km<<" km"<<endl;
    }else{  
        cout<<"Opción inválida"<<endl;
    }
    return 0;
}