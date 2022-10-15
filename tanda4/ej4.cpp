#include <iostream>
using namespace std;
/* Salida:
Te guardo 10 números que me des
Dime un número (que no sea 0 porfi): 9
Dime un número (que no sea 0 porfi): 5
Dime un número (que no sea 0 porfi): 3
Dime un número (que no sea 0 porfi): 6
Dime un número (que no sea 0 porfi): 3
Dime un número (que no sea 0 porfi): 8
Dime un número (que no sea 0 porfi): 77
Dime un número (que no sea 0 porfi): 44
Dime un número (que no sea 0 porfi): 3
Dime un número (que no sea 0 porfi): 1
Y ahora, dime uno de los números que has metido y te diré dónde está: 
Dime un número (0 para salir): 3
Se ha encontrado el número 3 en la posición 3
Se ha encontrado el número 3 en la posición 5
Se ha encontrado el número 3 en la posición 9
Dime un número (0 para salir): 77
Se ha encontrado el número 77 en la posición 7
Dime un número (0 para salir): 0
Adiós!
*/

int ej4(){
    int nums[10];
    int n;
    cout<<"Te guardo 10 números que me des"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Dime un número (que no sea 0 porfi): ";
        cin>>n;
        nums[i]=n;
    }
    cout<<"Y ahora, dime uno de los números que has metido y te diré dónde está: "<<endl;
    do{
        cout<<"Dime un número (0 para salir): ";
        cin>>n;
        if(n!=0){
            for(int i=0;i<10;i++){
                if(nums[i]==n){
                    cout<<"Se ha encontrado el número "<<n<<" en la posición "<<i+1<<endl;
                }
            }
        }
        else{
            cout<<"Adiós!"<<endl;
        }
    }while(n!=0);
    return 0;
}