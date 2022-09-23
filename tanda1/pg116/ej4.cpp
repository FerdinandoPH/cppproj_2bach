#include <iostream>
#include <locale.h>
#include<string>
using namespace std;
bool esUnNumero(string cadena){
    for(int i=0;i<cadena.length();i++){
        if(isdigit(cadena[i])==false){
            return false;
        }
    }
    return true;
}
int ej4(){
    setlocale(LC_ALL, "es_ES");
    double n=0,t=0;
    int c=0;
    string a="hola";
    int op=0;
    cout<<"Elige una opción:\n1: Media de 5 números\n2: Media de números ilimitados (mejora)"<<endl;
    cin>>op;
    if(op==1){
        for(int i=0;i<5;i++){
            cout<<"Introduce un número: ";
            cin>>a;
            if(esUnNumero(a)==true){
                n=stod(a);
                t+=n;
            }
        }
        cout<<"La media es: "<<t/5<<endl;
    }else if(op==2){
        while (a!="fin"){
            cout<<"Introduce un número (escribe fin para finalizar): ";
            cin>>a;
            if(a!="fin"&&esUnNumero(a)){
                n=stod(a);
                t+=n;
                c++;
            }
        }
        if(c<1){
            cout<<"No has introducido ningún número"<<endl;
        }else{
            cout<<"La media es: "<<t/c<<endl;
        }
    }else{
        cout<<"Opción inválida"<<endl;
    }


    return 0;
}