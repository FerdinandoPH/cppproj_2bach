#include <iostream>
using namespace std;

int pg124ej1(){
    int c=7890;
    int r=0;
    cout<<"Autenticación de usuario"<<endl;
    while(c!=r){
        cout<<"Introduce la contraseña: ";
        cin>>r;
        if(c!=r)
            cout<<"Contraseña incorrecta"<<endl;
    }
    cout<<"Contraseña correcta :D"<<endl;
    return 0;
}