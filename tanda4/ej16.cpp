#include <iostream>
using namespace std;
/* Salida:
Dame un número y te diré cuántas cifras tiene
9999
El número 9999 tiene 4 cifras
*/

int ej16(){
    int n,nbak;
    cout<<"Dame un número y te diré cuántas cifras tiene"<<endl;
    cin>>n;
    nbak=n;
    int cifras=0;
    while(n>0){
        n/=10;
        cifras++;
    }
    cout<<"El número "<<nbak<<" tiene "<<cifras<<" cifras"<<endl;
    return 0;
}