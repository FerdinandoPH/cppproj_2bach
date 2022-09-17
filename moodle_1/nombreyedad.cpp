#include <iostream>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "es_ES");
    int edad=0;
    string nombre;
    cout<<"¿Cómo te llamas?\n ";
    cin>>nombre;
    cout<<"¿Cuántos años tienes?\n ";
    cin>>edad;
    cout<<"Hola "<<nombre<<", de "<<edad<<" años"<<endl;
    return 0;
}
