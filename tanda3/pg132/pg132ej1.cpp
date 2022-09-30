#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* Salida:
Este programa graba en un archivo los números que introduzcas
Introduce un número (0 para terminar): 10
Introduce un número (0 para terminar): 5
Introduce un número (0 para terminar): 2
Introduce un número (0 para terminar): 3
Introduce un número (0 para terminar): 0

(numeros.txt)
10
5
2
3
*/

int pg132ej1(){
    ofstream f("numeros.txt");
    int n=1;
    cout<<"Este programa graba en un archivo los números que introduzcas"<<endl;
    while(n!=0){
        cout<<"Introduce un número (0 para terminar): ";
        cin>>n;
        if (n!=0){
            f<<n<<endl;
        }
    }
    f.close();
    return 0;
}