#include <iostream>
using namespace std;
/* Salida:
Sumaré 10 números que me des
Dime un número: 1
Dime un número: 2
Dime un número: 3
Dime un número: 4
Dime un número: 5
Dime un número: 6
Dime un número: 7
Dime un número: 8
Dime un número: 9
Dime un número: 10
La suma es: 55
*/

int ej3(){
    int n,sum;
    cout<<"Sumaré 10 números que me des"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Dime un número: ";
        cin>>n;
        sum+=n;
    }
    cout<<"La suma es: "<<sum<<endl;
    return 0;
}