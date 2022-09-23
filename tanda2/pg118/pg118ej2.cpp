#include <iostream>
#include <locale.h>
using namespace std;

int pg118ej2(){
    setlocale(LC_ALL, "es_ES");
    int a,b,mayor;
    cout<<"Este programa te dirá cual de los dos números que metas es mayor"<<endl;
    cout << "Introduce un número: ";
    cin >> a;
    cout << "Introduce otro número: ";
    cin >> b;
    if(a==b)
        cout<<"Los dos números son iguales"<<endl;
    else{
        mayor=a>b?a:b;
        cout << "El mayor es " << mayor << endl;
    }
    return 0;
}