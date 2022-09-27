#include <iostream>
using namespace std;
/* Salida:
Este programa calcula la diferencia entre dos vectores de dos coordenadas
Introduce las coordenadas del primer vector
Introduce la coordenada x: 5
Introduce la coordenada y: 5
Ahora, las coordenadas del segundo vector
Introduce la coordenada x: 2
Introduce la coordenada y: 1
La diferencia entre los dos vectores (a-b) es: (3,4)
*/

int pg128ej5(){
    int a[2],b[2];
    cout<<"Este programa calcula la diferencia entre dos vectores de dos coordenadas"<<endl;
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
    cout<<"La diferencia entre los dos vectores (a-b) es: ("<<a[0]-b[0]<<","<<a[1]-b[1]<<")"<<endl;
    return 0;
}