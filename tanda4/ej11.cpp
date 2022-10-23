#include <iostream>
using namespace std;
/* Salida:
Encontraré el número (entero) más grande de una lista de números que me des
¿Cuántos números vas a introducir?
6
Mete el número 1: (que sea un entero)
1
Mete el número 2: (que sea un entero)
9
Mete el número 3: (que sea un entero)
8
Mete el número 4: (que sea un entero)
2
Mete el número 5: (que sea un entero)
3
Mete el número 6: (que sea un entero)
6
El número más grande es 9
*/
int ObtenerMaximo (int lista[], int cantidad){
    int maximo=lista[0];
    for(int i=1;i<cantidad;i++){
        if(lista[i]>maximo){
            maximo=lista[i];
        }
    }
    return maximo;
}
int ej11(){
    int cantidad=0;
    cout<<"Encontraré el número (entero) más grande de una lista de números que me des"<<endl;
    cout<<"¿Cuántos números vas a introducir?"<<endl;
    cin>>cantidad;
    int lista[cantidad];
    for(int i=0;i<cantidad;i++){
        cout<<"Mete el número "<<i+1<<": (que sea un entero)"<<endl;
        cin>>lista[i];
    }
    cout<<"El número más grande es "<<ObtenerMaximo(lista,cantidad)<<endl;
    return 0;
}