#include <iostream>
using namespace std;
/* Salida:
Dame un número y sumaré sus cifras
456
La suma de las cifras de 456 es 15
*/

int ej17(){
    string n;
    cout<<"Dame un número y sumaré sus cifras"<<endl;
    cin>>n;
    int suma=0;
    for(int i=0;i<n.length();i++){
        suma+=atoi(n.substr(i,1).c_str());
    }
    cout<<"La suma de las cifras de "<<n<<" es "<<suma<<endl;
    return 0;
}