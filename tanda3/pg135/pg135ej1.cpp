#include <iostream>
using namespace std;
/* Salida:
6
Hola Hola Hola Hola Hola Hola 
*/
void saludarVariasVeces(int veces){
    for(int i=0;i<veces;i++){
        cout<<"Hola"<<" ";
    }
}
int pg135ej1(){
    int n;
    cout<<"¿Cuántas veces quieres que te salude?"<<endl;
    cin>>n;
    saludarVariasVeces(n);
    return 0;
}