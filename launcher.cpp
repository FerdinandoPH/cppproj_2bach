#include <iostream>
#include <locale.h>
using namespace std;
//Include all the other c++ programs of this directory here
#include "./moodle_1/holamundo.cpp"
#include "./moodle_1/nombreyedad.cpp"
#include "./moodle_1/imc.cpp"
#include "./pg116/ej1.cpp"
#include "./pg116/ej2.cpp"
#include "./pg116/ej3.cpp"
#include "./pg116/ej4.cpp"
#include "./pg116/ej5.cpp"
#include "./pg116/ej6.cpp"
string lowerstring(string s){
    string r="";
    for(int i=0;i<s.length();i++){
        r+=tolower(s[i]);
    }
    return r;
}
void ejsDisponibles(){
        cout<<"Estos son los ejercicios disponibles: "<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"1. Hola Mundo"<<endl;
        cout<<"2. Nombre y edad (ejercicio0)"<<endl;
        cout<<"3. IMC"<<endl;
        cout<<"4. Ejercicio 1 de la pagina 116"<<endl;
        cout<<"5. Ejercicio 2 de la pagina 116"<<endl;
        cout<<"6. Ejercicio 3 de la pagina 116"<<endl;
        cout<<"7. Ejercicio 4 de la pagina 116"<<endl;
        cout<<"8. Ejercicio 5 de la pagina 116"<<endl;
        cout<<"9. Ejercicio 6 de la pagina 116"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
}
int main(){
    setlocale(LC_ALL, "es_ES");
    cout<<"Bienvenido a los ejercicios de C++ de Fernando Perez Holguin (2ºN)"<<endl;
    string respuesta="";
    ejsDisponibles();
    while(respuesta!="salir"){
        cout<<"Esrcibe h si quieres ver la lista de ejercicios de nuevo"<<endl;
        cout<<"Escribe el numero del ejercicio que quieres ejecutar o escribe salir para salir: "<<endl;
        cin>>respuesta;
        respuesta=lowerstring(respuesta);
        if(respuesta=="1"){
            cout<<"Se va a ejectuar holamundo"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            holamundo();
            cout<<"Se ha ejecutado holamundo"<<endl;
        }else if(respuesta=="2"){
            cout<<"Se va a ejectuar el ejercicio 0 nombreyedad"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            nombreyedad();
            cout<<"Se ha ejecutado nombreyedad(ejercicio 0)"<<endl;
        }else if(respuesta=="3"){
            cout<<"Se va a ejectuar imc"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            imc();
            cout<<"Se ha ejecutado imc"<<endl;
        }else if(respuesta=="4"){
            cout<<"Se va a ejectuar ej1"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej1();
            cout<<"Se ha ejecutado ej1"<<endl;
        }else if(respuesta=="5"){
            cout<<"Se va a ejectuar ej2"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej2();
            cout<<"Se ha ejecutado ej2"<<endl;
        }else if(respuesta=="6"){
            cout<<"Se va a ejectuar ej3"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej3();
            cout<<"Se ha ejecutado ej3"<<endl;
        }else if(respuesta=="7"){
            cout<<"Se va a ejectuar ej4"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej4();
            cout<<"Se ha ejecutado ej4"<<endl;
        }else if(respuesta=="8"){
            cout<<"Se va a ejectuar ej5"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej5();
            cout<<"Se ha ejecutado ej5"<<endl;
        }else if(respuesta=="9"){
            cout<<"Se va a ejectuar ej6"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej6();
            cout<<"Se ha ejecutado ej6"<<endl;
        }else if(respuesta=="salir"){
            cout<<"Hasta luego!"<<endl;
        }else if(respuesta=="h"){
            ejsDisponibles();
        }else{
            cout<<"No se ha encontrado el ejercicio"<<endl;
        }
        cout<<"------------------------------------------------------------"<<endl;
    }

    return 0;
}