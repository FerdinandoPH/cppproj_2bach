#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* Salida:
Este programa te muestra la suma de los números de numeros.txt, creado en el ejercicio 1 de la página 132
10+5+2+3+=20
*/

int pg132ej3(){
    cout<<"Este programa te muestra la suma de los números de numeros.txt, creado en el ejercicio 1 de la página 132"<<endl;
    ifstream f("numeros.txt");
    int n=0;
    string linea;
    int suma=0;
    while(!f.eof()){
        getline(f,linea);
        if(!f.eof()){
            try{
            n=stoi(linea);
            cout<<n<<"+";
            suma+=n;
            }catch(...){
                cout<<"Error. ¿Has ejecutado el ejercicio 1 de la página 132 primero?"<<endl;
                return 0;
            }
        }
    }
    cout<<"="<<suma<<endl;

    return 0;
}