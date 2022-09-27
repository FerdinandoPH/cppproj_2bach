#include <iostream>
using namespace std;
/* Salida:
Este programa te dice el número más grande de 10 números que introduzcas
Introduce un número: 1
Introduce un número: 10
Introduce un número: 21212
Introduce un número: 3
Introduce un número: 999999
Introduce un número: 2
Introduce un número: 01
Introduce un número: 10
Introduce un número: 2
Introduce un número: 3
El número más grande es 999999
*/

int pg128ej4(){
    int nums[10];
    cout<<"Este programa te dice el número más grande de 10 números que introduzcas"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Introduce un número: ";
        cin>>nums[i];
    }
    int max=nums[0];
    for(int i=1;i<10;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    cout<<"El número más grande es "<<max<<endl;
    return 0;
}