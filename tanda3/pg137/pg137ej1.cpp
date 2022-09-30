#include <iostream>
using namespace std;
/* Salida:
Introduce dos números e intercambiaré sus valores
Número 1: 5
Número 2: 6
Ahora el número 1 vale 6 y el número 2 vale 5
*/
void intercambiar(int &a, int &b){
    int aux=a;
    a=b;
    b=aux;
}
int pg137ej1(){
    int a,b=0;
    cout<<"Introduce dos números e intercambiaré sus valores"<<endl;
    cout<<"Número 1: ";
    cin>>a;
    cout<<"Número 2: ";
    cin>>b;
    intercambiar(a,b);
    cout<<"Ahora el número 1 vale "<<a<<" y el número 2 vale "<<b<<endl;
    return 0;
}