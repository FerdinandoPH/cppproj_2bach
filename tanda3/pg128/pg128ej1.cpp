#include <iostream>
using namespace std;
/* Salida:
Este programa calcula la media de 4 números
Introduce un número: 10
Introduce un número: 10
Introduce un número: 0
Introduce un número: 0
La media de 10, 10, 0, 0 es 5
*/
int pg128ej1(){
    int larr=4;
    int numeros[larr];
    float media=0;
    cout<<"Este programa calcula la media de 4 números"<<endl;
    for(int i=0;i<larr;i++){
        cout<<"Introduce un número: ";
        cin>>numeros[i];
        media+=numeros[i];
    }
    media/=larr;
    cout<<"La media de ";
    for(int i=0;i<larr;i++){
        cout<<numeros[i];
        if(i<larr-1){
            cout<<", ";
        }
    }
    cout<<" es "<<media<<endl;
    

    return 0;
}