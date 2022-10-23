#include <iostream>
#include <fstream>
using namespace std;
/* Salida:
Elige una opción:
1. Leer "registrodeUsuario.txt"
2. Escribir "registrodeUsuario.txt"
2
Escribe lo que quieras en el archivo (escribe "fin" para terminar)
hola
me llamo Pepito
fin

Contenido del archivo:

hola
me llamo Pepito

*/

int ej13(){
    int opcion=0;
    cout<<"Elige una opción:"<<endl;
    cout<<"1. Leer \"registrodeUsuario.txt\""<<endl;
    cout<<"2. Escribir \"registrodeUsuario.txt\""<<endl;
    cin>>opcion;
    if (opcion==1){
        ifstream f("registrodeUsuario.txt");
        if (f.good()){
        string linea;
        cout<<"Contenido del archivo:"<<endl;
        while(getline(f,linea)){
            cout<<linea<<endl;
        }
        }
        else{
            cout<<"No se ha podido abrir el archivo"<<endl;
        }
        f.close();
    }
    else if(opcion==2){
        ifstream e("registrodeUsuario.txt");
        if (e.good()){
            string asentir="yYsSsiSISiyesYESYes";
            string respuesta;
            cout<<"El archivo ya existe"<<endl;
            cout<<"Puedes sobreescribirlo o seguir donde lo dejaste"<<endl;
            cout<<"¿Quieres sobreescribirlo? (s/n)"<<endl;
            cin>>respuesta;
            if(asentir.find(respuesta)!=string::npos){
                ofstream l("registrodeUsuario.txt");
                l.close();
            }
        }
        ofstream f("registrodeUsuario.txt",ios::app);
        string linea;
        cout<<"Escribe lo que quieras en el archivo (escribe \"fin\" para terminar)"<<endl;
        while(getline(cin,linea)){
            if(linea=="fin")
                break;
            f<<linea<<endl;
        }
        f.close();
    }
    else{
        cout<<"Opción no válida"<<endl;
    }
    return 0;
}