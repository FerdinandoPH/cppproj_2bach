#include <iostream>
using namespace std;
/* Salida:
Te guardo 10 números que me des
Dime un número (que no sea 0 porfi): 2
Dime un número (que no sea 0 porfi): 3
Dime un número (que no sea 0 porfi): 4
Dime un número (que no sea 0 porfi): 5
Dime un número (que no sea 0 porfi): 6
Dime un número (que no sea 0 porfi): 7
Dime un número (que no sea 0 porfi): 8
Dime un número (que no sea 0 porfi): 9
Dime un número (que no sea 0 porfi): 1
Dime un número (que no sea 0 porfi): 3
Y ahora, dime uno de los números que has metido y te si está en el array:
Dime un número (0 para salir): 11
No está :(
Dime un número (0 para salir): 3
Sí está :)
Dime un número (0 para salir): 0
Adiós!
*/

int ej5(){
    int nums[10];
    int n;
    cout<<"Te guardo 10 números que me des"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Dime un número (que no sea 0 porfi): ";
        cin>>n;
        nums[i]=n;
    }
    cout<<"Y ahora, dime uno de los números que has metido y te si está en el array: "<<endl;
    do{
        cout<<"Dime un número (0 para salir): ";
        cin>>n;
        if(n!=0){
            bool encontrado=false;
            for(int i=0;i<10;i++){
                if(nums[i]==n){
                    cout<<"Sí está :)"<<endl;
                    encontrado=true;
                    break;
                }
            }
            if(!encontrado){
                cout<<"No está :("<<endl;
            }
        }
        else{
            cout<<"Adiós!"<<endl;
        }
    }while(n!=0);
    return 0;
}