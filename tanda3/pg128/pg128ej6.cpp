#include <iostream>
using namespace std;
/* Salida:
Este programa calcula el producto escalar de dos vectores de tres coordenadas
Introduce las coordenadas del primer vector
Introduce la coordenada x: 1
Introduce la coordenada y: 2
Introduce la coordenada z: 3
Ahora, las coordenadas del segundo vector
Introduce la coordenada x: 4
Introduce la coordenada y: 5
Introduce la coordenada z: 6
El producto escalar es: 32
*/

int pg128ej6(){
    int a[3],b[3];
    cout<<"Este programa calcula el producto escalar de dos vectores de tres coordenadas"<<endl;
    cout<<"Coordenadas del primer vector"<<endl;
    cout<<"Introduce la coordenada x: ";
    cin>>a[0];
    cout<<"Introduce la coordenada y: ";
    cin>>a[1];
    cout<<"Introduce la coordenada z: ";
    cin>>a[2];
    cout<<"Ahora, las coordenadas del segundo vector"<<endl;
    cout<<"Introduce la coordenada x: ";
    cin>>b[0];
    cout<<"Introduce la coordenada y: ";
    cin>>b[1];
    cout<<"Introduce la coordenada z: ";
    cin>>b[2];
    cout<<"El producto escalar es: "<<a[0]*b[0]+a[1]*b[1]+a[2]*b[2]<<endl;
    return 0;
}