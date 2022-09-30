#include <iostream>
using namespace std;
/* Salida:
Número 1: 1
Número 2: 2
Número 3: 3
La suma de 1, 2 y 3 es 6
*/
int sumaTresNumeros(int a, int b, int c){
    return a+b+c;
}
int pg136ej1(){
    int a,b,c=0;
    cout<<"Introduce tres números y te diré su suma"<<endl;
    cout<<"Número 1: ";
    cin>>a;
    cout<<"Número 2: ";
    cin>>b;
    cout<<"Número 3: ";
    cin>>c;
    cout<<"La suma de "<<a<<", "<<b<<" y "<<c<<" es "<<sumaTresNumeros(a,b,c)<<endl;
    return 0;
}