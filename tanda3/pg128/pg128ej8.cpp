#include <iostream>
using namespace std;
/* Salida:
Este programa transpone una matriz de 2x2
Introduce los valores de la matriz
Introduce el valor de la posición (1,1): 1
Introduce el valor de la posición (1,2): 2
Introduce el valor de la posición (2,1): 3
Introduce el valor de la posición (2,2): 4
La matriz transpuesta es:
1 3
2 4
*/

int pg128ej8(){
    int matriz[2][2];
    cout<<"Este programa transpone una matriz de 2x2"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Introduce el valor de la posición ("<<i+1<<","<<j+1<<"): ";
            cin>>matriz[i][j];
        }
    }
    cout<<"La matriz transpuesta es: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}