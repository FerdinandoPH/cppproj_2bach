#include <iostream>
#include <locale.h>
using namespace std;

int pg120ej2(){
    setlocale(LC_ALL, "es_ES");
    int a,b,c,mayor;
    cout<<"Este programa te dirá cual de los tres números que metas es mayor"<<endl;
    cout << "Introduce un número: ";
    cin >> a;
    cout << "Introduce otro número: ";
    cin >> b;
    cout << "Introduce un número más: ";
    cin >> c;
    if(a==b&&b==c)
        cout<<"Los tres números son iguales"<<endl;
    else{
        mayor=a>b?a:b;
        mayor=mayor>c?mayor:c;
        cout << "El mayor es " << mayor << endl;
    }

    return 0;
}