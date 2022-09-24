#include "./pg118/pg118ej1.cpp"
#include "./pg118/pg118ej2.cpp"
#include "./pg118/pg118ej3.cpp"
#include "./pg118/pg118ej4.cpp"
#include "./pg120/pg120ej1.cpp"
#include "./pg120/pg120ej2.cpp"
#include "./pg120/pg120ej3.cpp"
#include "./pg120/pg120ej4.cpp"
#include "./pg120/pg120ej5.cpp"
#include "./pg124/pg124ej1.cpp"
#include "./pg124/pg124ej2.cpp"
#include "./pg124/pg124ej3.cpp"
#include "./pg124/pg124ej4.cpp"
#include "./pg124/pg124ej5.cpp"
#include <iostream>
#include <string>
using namespace std;
string lowerstring(string s){
    string r="";
    for(int i=0;i<s.length();i++){
        r+=tolower(s[i]);
    }
    return r;
}
void DisplayEjs(int subindice){
    switch(subindice){
        case 0:
            cout<<"Menu principal:"<<endl;
            cout<<"1. Ejercicios de la página 118"<<endl;
            cout<<"2. Ejercicios de la página 120"<<endl;
            cout<<"3. Ejercicios de la página 124"<<endl;
            break;
        case 1:
            cout<<"Ejercicios de la página 118:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            cout<<"3. Ejercicio 3"<<endl;
            cout<<"4. Ejercicio 4"<<endl;
            break;
        case 2:
            cout<<"Ejercicios de la página 120:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            cout<<"3. Ejercicio 3"<<endl;
            cout<<"4. Ejercicio 4"<<endl;
            cout<<"5. Ejercicio 5"<<endl;
            break;
        case 3:
            cout<<"Ejercicios de la página 124:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            cout<<"3. Ejercicio 3"<<endl;
            cout<<"4. Ejercicio 4"<<endl;
            cout<<"5. Ejercicio 5"<<endl;
            break;
        default:
            cout<<"Cómo ha pasado esto?"<<endl;
    }
}
int main(){
    cout<<"Bienvenido a los ejercicios de C++ de Fernando Pérez Holguín (tanda 2)"<<endl;
    int subindice=0;
    string input="";
    string nums="123";
    while(input!="salir"&&input!="exit"){
        DisplayEjs(subindice);
        if(subindice==0)
            cout<<"Introduce el número de la página que quieres ver (1, 2 o 3) o escribe salir para cerrar el programa"<<endl;
        else
            cout<<"Introduce el número del ejercicio que quieres ejecutar (0 para volver atrás) o escribe salir para cerrar el programa"<<endl;
        cin>>input;
        input=lowerstring(input);
        if(input=="salir"||input=="exit")
            break;
        if(subindice==0){
            if(nums.find(input) != string::npos&&stoi(input)>=1&&stoi(input)<=3)
                subindice=stoi(input);
            else
                cout<<"El número tiene que ser del 1 al 3"<<endl;
        }else{
            switch(input[0]){
                case '1':
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 118"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg118ej1();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 1 de la página 118 ejecutado"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 120"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg120ej1();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 1 de la página 120 ejecutado"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 124"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg124ej1();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 1 de la página 124 ejecutado"<<endl;
                            break;
                        default:
                            cout<<"Error: subindice no válido"<<endl;
                    }
                    break;
                case '2':
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 118"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg118ej2();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 2 de la página 118 ejecutado"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 120"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg120ej2();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 2 de la página 120 ejecutado"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 124"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg124ej2();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 2 de la página 124 ejecutado"<<endl;
                            break;
                        default:
                            cout<<"Error: subindice no válido"<<endl;
                    }
                    break;
                case '3':
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 3 de la página 118"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg118ej3();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 3 de la página 118 ejecutado"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 3 de la página 120"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg120ej3();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 3 de la página 120 ejecutado"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 3 de la página 124"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg124ej3();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 3 de la página 124 ejecutado"<<endl;
                            break;
                        default:
                            cout<<"Error: subindice no válido"<<endl;
                    }
                    break;
                case '4':
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 4 de la página 118"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg118ej4();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 4 de la página 118 ejecutado"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 4 de la página 120"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg120ej4();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 4 de la página 120 ejecutado"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 4 de la página 124"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg124ej4();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 4 de la página 124 ejecutado"<<endl;
                            break;
                        default:
                            cout<<"Error: subindice no válido"<<endl;
                    }
                    break;
                case '5':
                    switch(subindice){
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 5 de la página 120"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg120ej5();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 5 de la página 120 ejecutado"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 5 de la página 124"<<endl;
                            cout<<"----------------------------------------"<<endl;
                            pg124ej5();
                            cout<<"----------------------------------------"<<endl;
                            cout<<"Ejercicio 5 de la página 124 ejecutado"<<endl;
                            break;
                        default:
                            cout<<"Error: subindice no válido"<<endl;
                    }
                    break;
                case '0':
                    cout<<"Volviendo al menú principal"<<endl;
                    break;
                default:
                    cout<<"Error: indice no válido"<<endl;
                    break;
            }
            subindice=0;
        }
        

    }
    cout<<"Hasta luego"<<endl;
}