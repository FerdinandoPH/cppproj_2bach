#include <iostream>
using namespace std;
/* Salida:
Te diré todos los divisores de un número
Dime un número: 80
Los divisores de 80 son: 1 2 4 5 8 10 16 20 40 80
*/

int ej1(){
    cout<<"Te diré todos los divisores de un número"<<endl;
    int n;
    cout<<"Dime un número: ";
    cin>>n;
    cout<<"Los divisores de "<<n<<" son: ";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}