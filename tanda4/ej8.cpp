#include <iostream>
#include <fstream>
using namespace std;
/* Salida:
Dime un número: crearé un triángulo de * cuya primera fila tendrá tantos * como el número que me des (y luego irá bajando)
5
*****
****
***
**
*
Te he creado un archivo llamado triangulo.txt con el triángulo que me has pedido
*/

int ej8(){
    int n=0;
    cout<<"Dime un número: crearé un triángulo de * cuya primera fila tendrá tantos * como el número que me des (y luego irá bajando)"<<endl;
    cin>>n;
    ofstream f("triangulo.txt");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
            f<<"*";
        }
        cout<<endl;
        f<<endl;
    }
    f.close();
    cout<<"Te he creado un archivo llamado triangulo.txt con el triángulo que me has pedido"<<endl;
    return 0;
}