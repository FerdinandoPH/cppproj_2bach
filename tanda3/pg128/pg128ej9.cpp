#include <iostream>
using namespace std;
/* Salida:
Este programa calcula el determinante de una matriz de 3x3
Introduce los valores de la matriz
Introduce el valor de la posición (1,1): 1
Introduce el valor de la posición (1,2): 2
Introduce el valor de la posición (1,3): 3
Introduce el valor de la posición (2,1): 4
Introduce el valor de la posición (2,2): 5
Introduce el valor de la posición (2,3): 6
Introduce el valor de la posición (3,1): 7
Introduce el valor de la posición (3,2): 8
Introduce el valor de la posición (3,3): 9
El determinante de la matriz es: 0
*/

int pg128ej9(){
    int matriz[3][3];
    cout<<"Este programa calcula el determinante de una matriz de 3x3"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Introduce el valor de la posición ("<<i+1<<","<<j+1<<"): ";
            cin>>matriz[i][j];
        }
    }
    cout<<"El determinante de la matriz es: "<<matriz[0][0]*matriz[1][1]*matriz[2][2]+matriz[0][1]*matriz[1][2]*matriz[2][0]+matriz[0][2]*matriz[1][0]*matriz[2][1]-matriz[0][2]*matriz[1][1]*matriz[2][0]-matriz[0][1]*matriz[1][0]*matriz[2][2]-matriz[0][0]*matriz[1][2]*matriz[2][1]<<endl;
    return 0;
}