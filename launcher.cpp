#include <iostream>
#include <locale.h>
using namespace std;
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
        cout<<"1. Ejericio 1 de la pagina 116"<<endl;
        cout<<"2. Ejericio 2 de la pagina 116"<<endl;
        cout<<"3. Ejericio 3 de la pagina 116"<<endl;
        cout<<"4. Ejericio 4 de la pagina 116"<<endl;
        cout<<"5. Ejericio 5 de la pagina 116"<<endl;
        cout<<"6. Ejericio 6 de la pagina 116"<<endl;
        cout<<"7. Hola Mundo"<<endl;
        cout<<"8. Ejercicio 0 Nombre y Edad"<<endl;
        cout<<"9. IMC"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
}
int main(){
    setlocale(LC_ALL, "es_ES");
    cout<<"Bienvenido a los ejercicios de C++ de Fernando Pérez Holguín (2ºN)"<<endl;
    string respuesta="";
    ejsDisponibles();
    while(respuesta!="salir"&&respuesta!="exit"){
        cout<<"Esrcibe h si quieres ver la lista de ejercicios de nuevo"<<endl;
        cout<<"Escribe el numero del ejercicio (1-9) que quieres ejecutar o escribe \"salir\" para salir: "<<endl;
        cin>>respuesta;
        respuesta=lowerstring(respuesta);
        if(respuesta=="1"){
            cout<<"Ejecutando ejercicio 1 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej1();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 1 de la pagina 116"<<endl;
        }else if(respuesta=="2"){
            cout<<"Ejecutando ejercicio 2 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej2();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 2 de la pagina 116"<<endl;
        }else if(respuesta=="3"){
            cout<<"Ejecutando ejercicio 3 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej3();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 3 de la pagina 116"<<endl;
        }else if(respuesta=="4"){
            cout<<"Ejecutando ejercicio 4 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej4();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 4 de la pagina 116"<<endl;
        }else if(respuesta=="5"){
            cout<<"Ejecutando ejercicio 5 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej5();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 5 de la pagina 116"<<endl;
        }else if(respuesta=="6"){
            cout<<"Ejecutando ejercicio 6 de la pagina 116"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            ej6();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 6 de la pagina 116"<<endl;
        }else if(respuesta=="7"){
            cout<<"Ejecutando ejercicio Hola Mundo"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            holamundo();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio Hola Mundo"<<endl;
        }else if(respuesta=="8"){
            cout<<"Ejecutando ejercicio 0 Nombre y Edad"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            nombreyedad();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio 0 Nombre y Edad"<<endl;
        }else if(respuesta=="9"){
            cout<<"Ejecutando ejercicio IMC"<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            imc();
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"Se ha ejecutado el ejercicio IMC"<<endl;
        }else if(respuesta=="h"){
            ejsDisponibles();
        }else if(respuesta=="salir"||respuesta=="exit"){
            cout<<"¡Hasta luego!"<<endl;
        }else{
            cout<<"No se ha encontrado el ejercicio que has escrito"<<endl;
        }
    }

    return 0;
}