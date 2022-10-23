//Incluye 10 ejercicios de la página 128, los ejercicios 1 y 3 de la página 132, los ejercicios 1 y 2 de la página 135, los ejercicios 1 y 2 de la página 136, y el ejercicio 1 de la página 137.
#include "./pg128/pg128ej1.cpp"
#include "./pg128/pg128ej2.cpp"
#include "./pg128/pg128ej3.cpp"
#include "./pg128/pg128ej4.cpp"
#include "./pg128/pg128ej5.cpp"
#include "./pg128/pg128ej6.cpp"
#include "./pg128/pg128ej7.cpp"
#include "./pg128/pg128ej8.cpp"
#include "./pg128/pg128ej9.cpp"
#include "./pg128/pg128ej10.cpp"
#include "./pg128/pg128ej11.cpp"
#include "./pg132/pg132ej1.cpp"
#include "./pg132/pg132ej3.cpp"
#include "./pg135/pg135ej1.cpp"
#include "./pg135/pg135ej2.cpp"
#include "./pg136/pg136ej1.cpp"
#include "./pg136/pg136ej2.cpp"
#include "./pg137/pg137ej1.cpp"
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
void DisplayEjs(int indice){
    switch(indice){
        case 0:
            cout<<"Menú principal:"<<endl;
            cout<<"1. Ejercicios de la página 128"<<endl;
            cout<<"2. Ejercicios de la página 132"<<endl;
            cout<<"3. Ejercicios de la página 135"<<endl;
            cout<<"4. Ejercicios de la página 136"<<endl;
            cout<<"5. Ejercicios de la página 137"<<endl;
            break;
        case 1:
            cout<<"Ejercicios de la página 128:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            cout<<"3. Ejercicio 3"<<endl;
            cout<<"4. Ejercicio 4"<<endl;
            cout<<"5. Ejercicio 5"<<endl;
            cout<<"6. Ejercicio 6"<<endl;
            cout<<"7. Ejercicio 7"<<endl;
            cout<<"8. Ejercicio 8"<<endl;
            cout<<"9. Ejercicio 9"<<endl;
            cout<<"10. Ejercicio 10"<<endl;
            cout<<"11. Ejercicio 11"<<endl;
            break;
        case 2:
            cout<<"Ejercicios de la página 132:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 3"<<endl;
            break;
        case 3:
            cout<<"Ejercicios de la página 135:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            break;
        case 4:
            cout<<"Ejercicios de la página 136:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            cout<<"2. Ejercicio 2"<<endl;
            break;
        case 5:
            cout<<"Ejercicios de la página 137:"<<endl;
            cout<<"1. Ejercicio 1"<<endl;
            break;
        default:
            cout<<"Opción no válida"<<endl;
            break;
    }
}
int main(){
    cout<<"Bienvenido a los ejercicios de C++ de Fernando Pérez Holguín (tanda 3)"<<endl;
    int subindice=0;
    string input="";
    string nums="12345";
    string nums2="1234567891011";
    while(input!="salir"&&input!="exit"){
        DisplayEjs(subindice);
        if(subindice==0)
            cout<<"Introduce el número (1-5) de la página que quieres ver o escribe \"salir\" para cerrar el programa"<<endl;
        else
            cout<<"Introduce el número del ejercicio que quieres ejecutar (0 para volver atrás) o escribe salir para cerrar el programa"<<endl;
        cin>>input;
        input=lowerstring(input);
        if(input=="salir"||input=="exit")
            break;
        if(subindice==0){
            if(nums.find(input) != string::npos&&stoi(input)>=1&&stoi(input)<=5)
                subindice=stoi(input);
            else
                cout<<"El número tiene que ser del 1 al 5"<<endl;
        }
        else{
            int ej=0;
            if(nums2.find(input) != string::npos&&stoi(input)>=0&&stoi(input)<=11)
                ej=stoi(input);
            else
                cout<<"Error"<<endl;
            switch(ej){
                case 1:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej1();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 132"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg132ej1();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 135"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg135ej1();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 4:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 136"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg136ej1();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 5:
                            cout<<"Se va a ejecutar el ejercicio 1 de la página 137"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg137ej1();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 2:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej2();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 2:
                            cout<<"Se va a ejecutar el ejercicio 3 de la página 132"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg132ej3();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 3:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 135"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg135ej2();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        case 4:
                            cout<<"Se va a ejecutar el ejercicio 2 de la página 136"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg136ej2();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 3:
                  switch(subindice){
                    case 1:
                        cout<<"Se va a ejecutar el ejercicio 3 de la página 128"<<endl;
                        cout<<"------------------------------------------"<<endl;
                        pg128ej3();
                        cout<<"------------------------------------------"<<endl;
                        cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                        break;
                    case 2:
                        cout<<"Se va a ejecutar el ejercicio 3 de la página 132"<<endl;
                        cout<<"------------------------------------------"<<endl;
                        pg132ej3();
                        cout<<"------------------------------------------"<<endl;
                        cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                        break;
                    default:
                        cout<<"Error de subíndice"<<endl;
                        break; 
                  }  
                    break;
                case 4:
                    switch(subindice){
                        case 1: 
                            cout<<"Se va a ejecutar el ejercicio 4 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej4();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;

                    }
                    break;
                case 5:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 5 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej5();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 6:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 6 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej6();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 7:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 7 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej7();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 8:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 8 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej8();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 9:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 9 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej9();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 10:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 10 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej10();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 11:
                    switch(subindice){
                        case 1:
                            cout<<"Se va a ejecutar el ejercicio 11 de la página 128"<<endl;
                            cout<<"------------------------------------------"<<endl;
                            pg128ej11();
                            cout<<"------------------------------------------"<<endl;
                            cout<<"El ejercicio ha finalizado su ejecución"<<endl;
                            break;
                        default:
                            cout<<"Error de subíndice"<<endl;
                            break;
                    }
                    break;
                case 0:
                    subindice=0;
                    break;
                default:
                    cout<<"Error de índice"<<endl;
                    break;
            
            }
            subindice=0;
            cout<<endl;
        }   
    }
    return 0;
}