#include <iostream>
using namespace std;
/* Salida:
Este programa ordena 10 números que introduzcas usando el "bubble sort"
Introduce un número (1/10): 10
Introduce un número (2/10): 9
Introduce un número (3/10): 8
Introduce un número (4/10): 7
Introduce un número (5/10): 6
Introduce un número (6/10): 5
Introduce un número (7/10): 4
Introduce un número (8/10): 3
Introduce un número (9/10): 2
Introduce un número (10/10): 1
La lista ordenada es: 1 2 3 4 5 6 7 8 9 10
*/

int pg128ej10(){
    int larr=10;
    int nums[larr];
    cout<<"Este programa ordena "<<larr<<" números que introduzcas usando el \"bubble sort\""<<endl;
    for(int i=0;i<larr;i++){
        cout<<"Introduce un número ("<<i+1<<"/"<<larr<<"): ";
        cin>>nums[i];
    }
    bool todoOK=true;
    do{
        todoOK=true;
        for (int i=0;i<larr-1;i++){
            if (nums[i]>nums[i+1]){
                todoOK=false;
                int aux=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=aux;
            }
        }
    }while(!todoOK);
    cout<<"La lista ordenada es: ";
    for (int i=0;i<larr;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}