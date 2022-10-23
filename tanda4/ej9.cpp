#include <iostream>
#include <fstream>
using namespace std;
/* Salida:
Dime el nombre de un fichero (como prueba.txt), y te diré cuántas palabras tiene: prueba.txt
El fichero tiene 11 palabras (aproximadamente, he contado los espacios y los \n)
*/

int ej9(){
    string fich;
    cout<<"Dime el nombre de un fichero (como prueba.txt), y te diré cuántas palabras tiene: ";
    cin>>fich;
    ifstream f(fich);
    int palabras=0;
    string linea;
    bool abierto=false;
    if (!f.good()){
        cout<<"Error al abrir el fichero"<<endl;
    }
    while (!f.eof()&&f.good()){
        abierto=true;
        getline(f,linea);
        if(!linea.empty()||!f.eof()){
            for(int i=0;i<linea.length();i++){
                if(linea[i]==' '){
                    palabras++;
                }
            }
        }
        if(!f.eof()){
            palabras++;
        }
    }
    palabras++;
    if(abierto)
        cout<<"El fichero tiene "<<palabras<<" palabras (aproximadamente, he contado los espacios y los \\n)"<<endl;
    return 0;
}