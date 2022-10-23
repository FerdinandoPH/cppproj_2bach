#include <iostream>
using namespace std;
/* Salida:
Dame una cadena de caracteres
Hola
¿Cuántas veces te lo repito (sin espacios ni \n)?
5
HolaHolaHolaHolaHola
*/
void EscribirNVeces(int veces, string texto){
    for (int i=0;i<veces;i++){
        cout<<texto;
    }
}
int ej10(){
    int veces=0;
    string texto;
    cout<<"Dame una cadena de caracteres"<<endl;
    cin>>texto;
    cout<<"¿Cuántas veces te lo repito (sin espacios ni \\n)?"<<endl;
    cin>>veces;
    EscribirNVeces(veces,texto);
    return 0;
}