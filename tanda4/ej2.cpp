#include <iostream>
using namespace std;
/* Salida:
Te dibujaré un rectángulo con *
Dime el ancho: 6
Y ahora el alto: 2
******
******
Voila!
*/

int ej2(){
    cout<<"Te dibujaré un rectángulo con *" <<endl;
    int ancho, alto;
    cout<<"Dime el ancho: ";
    cin>>ancho;
    cout<<"Y ahora el alto: ";
    cin>>alto;
    for(int i=0;i<alto;i++){
        for(int j=0;j<ancho;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Voila!"<<endl;
    return 0;
}
