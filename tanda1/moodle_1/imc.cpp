#include <iostream>
#include <locale.h>
using namespace std;

int imc(){
    setlocale(LC_ALL, "es_ES");
    float altura,peso,imc=0;
    string nombre;
    cout<<"¿Cuánto mides? (m)\n ";
    cin>>altura;
    cout<<"¿Cuánto pesas? (kg)\n ";
    cin>>peso;
    cout<<"¿Cómo te llamas?\n ";
    cin>>nombre;
    imc=peso/(altura*altura);
    cout<<"Hola "<<nombre<<", con "<<peso<<" kg y "<<altura<<" m tu IMC es de "<<imc<<endl;
    if(imc<18.5){
        cout<<"Tienes bajo peso"<<endl;
    }else if(imc<25){
        cout<<"Tienes peso normal"<<endl;
    }else if(imc<30){
        cout<<"Tienes sobrepeso"<<endl;
    }else{
        cout<<"Tienes obesidad"<<endl;
    }
    return 0;
}

