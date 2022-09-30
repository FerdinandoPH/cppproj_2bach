#include <iostream>
using namespace std;
/* Salida:
Introduce un número y te diré su tabla de multiplicar: 12
12*1=12
12*2=24
12*3=36
12*4=48
12*5=60
12*6=72
12*7=84
12*8=96
12*9=108
12*10=120
*/
void TabladeMultiplicar(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}
int pg135ej2(){
    int num=0;
    cout<<"Introduce un número y te diré su tabla de multiplicar: ";
    cin>>num;
    TabladeMultiplicar(num);
    return 0;
}