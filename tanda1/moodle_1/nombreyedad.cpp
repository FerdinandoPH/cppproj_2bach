#include <iostream>
using namespace std;
int nombreyedad(){
    int edad=0;
    string nombre;
    cout<<"¿Cómo te llamas?\n ";
    cin>>nombre;
    cout<<"¿Cuántos años tienes?\n ";
    cin>>edad;
    cout<<"Hola "<<nombre<<", de "<<edad<<" años"<<endl;
    return 0;
}
