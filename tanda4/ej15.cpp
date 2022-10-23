#include <iostream>
#include <fstream>
using namespace std;
/* Salida:
Pon la ruta de un archivo y comprobaré si es un .exe
ej1.exe
Es un .exe
*/

int ej15(){
    cout<<"Escribiré la ruta de un archivo y comprobaré si es un .exe"<<endl;
    string ruta;
    cin>>ruta;
    ifstream f(ruta);
    char c1,c2;
    f.get(c1);
    f.get(c2);
    if(c1=='M' && c2=='Z'){
        cout<<"Es un .exe"<<endl;
    }else{
        cout<<"No es un .exe"<<endl;
    }
    return 0;
}