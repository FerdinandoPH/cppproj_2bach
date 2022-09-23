#include <iostream>
#include <locale.h>
using namespace std;

int pg118ej1(){
    setlocale(LC_ALL, "es_ES");
    int n;
    cout<<"Este programa te dirá si el número que metas es par o impar"<<endl;
    cout << "Introduce un número: ";
    cin >> n;
    if (n % 2 == 0){
        cout << "El número es par" << endl;
    } else {
        cout << "El número es impar" << endl;
    }
    return 0;
}