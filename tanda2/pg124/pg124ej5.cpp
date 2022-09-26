#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int pg124ej5(){
    srand((unsigned) time(0));
    int n = rand() % 100 + 1;
    int r=0;
    int v=6;
    string s="";
    cout<<"Serás capaz de adivinar el número del 1 al 100 en el que estoy pensando?"<<endl;
    while(v>0&&r!=n){
        s=v!=1?"intentos":"intento";
        cout<<"Tienes "<<v<<" "<<s<<endl;
        cout << "Introduce un número: ";
        cin >> r;
        if(r>n){
            cout<<"Ups, ese no es"<<endl;
            cout<<"Prueba con un número más pequeño"<<endl;
            v--;
        }
        else if(r<n){
            cout<<"Ups, ese no es"<<endl;
            cout<<"Prueba con un número más grande"<<endl;
            v--;
        }
        else{
            cout<<"Has acertado :D"<<endl;
        }
    }
    if(v<=0){
        cout<<"Has perdido :("<<endl;
        cout<<"El número era "<<n<<endl;
    }
    return 0;
}