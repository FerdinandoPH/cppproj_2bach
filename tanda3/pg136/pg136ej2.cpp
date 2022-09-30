#include <iostream>
using namespace std;
/* Salida:
Introduce un número y te diré si es primo o no
Número: 79
El número 79 es primo
*/
int esPrimo(int n){
    for (int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int pg136ej2(){
    int n=0;
    cout<<"Introduce un número y te diré si es primo o no"<<endl;
    cout<<"Número: ";
    cin>>n;
    if (esPrimo(n)==1)
        cout<<"El número "<<n<<" es primo"<<endl;
    else
        cout<<"El número "<<n<<" no es primo"<<endl;
    
    return 0;
}