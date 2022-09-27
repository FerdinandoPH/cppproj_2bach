#include <iostream>
using namespace std;
/* Salida:
Este programa comprueba si dos vectores son linealmente dependientes
Coordenadas del primer vector
Introduce la coordenada x: 10
Introduce la coordenada y: 1
Ahora, las coordenadas del segundo vector
Introduce la coordenada x: 2
Introduce la coordenada y: 10
Los vectores no son linealmente dependientes
*/

int pg128ej7(){
    int a[2],b[2];
    cout<<"Este programa comprueba si dos vectores son linealmente dependientes"<<endl;
    cout<<"Coordenadas del primer vector"<<endl;
    cout<<"Introduce la coordenada x: ";
    cin>>a[0];
    cout<<"Introduce la coordenada y: ";
    cin>>a[1];
    cout<<"Ahora, las coordenadas del segundo vector"<<endl;
    cout<<"Introduce la coordenada x: ";
    cin>>b[0];
    cout<<"Introduce la coordenada y: ";
    cin>>b[1];
    if(a[0]*b[1]==a[1]*b[0]){
        cout<<"Los vectores son linealmente dependientes"<<endl;
    }else{
        cout<<"Los vectores no son linealmente dependientes"<<endl;
    }

    return 0;
}