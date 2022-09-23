#include <iostream>
#include <locale.h>
using namespace std;

int pg120ej1(){
    setlocale(LC_ALL, "es_ES");
    int a,b;
    cout<<"Este programa te dirá si los números que metas son positivos"<<endl;
    cout << "Introduce un número: ";
    cin >> a;
    cout << "Introduce otro número: ";
    cin >> b;
    if(a>0||b>0){
        if(a>0&&b>0)
            cout<<"Los dos números son positivos"<<endl;
        else
            cout<<"Al menos uno de los números es positivo"<<endl;
    }
    else
        cout<<"Ninguno de los números es positivo"<<endl;

    return 0;
}