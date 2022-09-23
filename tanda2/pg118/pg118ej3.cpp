#include <iostream>
#include <locale.h>
using namespace std;

int pg118ej3(){
    setlocale(LC_ALL, "es_ES");
    cout<<"Este programa te dejará dividir dos números si el divisor no es 0"<<endl;
    double a,b;
    cout << "Introduce el dividendo: ";
    cin >> a;
    cout << "Introduce el divisor: ";
    cin >> b;
    if(b==0)
        cout<<"No se puede dividir entre 0"<<endl;
    else
        cout << "El resultado es " << a/b << endl;

    return 0;
}