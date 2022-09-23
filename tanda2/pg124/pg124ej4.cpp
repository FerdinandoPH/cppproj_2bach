#include <iostream>
#include <locale.h>
using namespace std;

int pg124ej4(){
    setlocale(LC_ALL, "es_ES");
    int c=7890;
    int u=1024;
    int ru,rc=0;
    cout<<"Autenticación de usuario II"<<endl;
    while (u!=ru||c!=rc){
        cout<<"Introduce el usuario: ";
        cin>>ru;
        cout<<"Introduce la contraseña: ";
        cin>>rc;
        if(u!=ru||c!=rc)
            cout<<"Usuario o contraseña incorrectos"<<endl;
    }
    cout<<"Usuario y contraseña correctos :D"<<endl;
    return 0;
}