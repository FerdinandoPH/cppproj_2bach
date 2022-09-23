#include <iostream>
#include <locale.h>
using namespace std;

int pg118ej4(){
    setlocale(LC_ALL, "es_ES");
    int a,b;
    cout<<"Este programa te dirá si el primer número que metas es múltiplo del segundo"<<endl;
    cout << "Introduce un número: ";
    cin >> a;
    cout << "Introduce otro número: ";
    cin >> b;
    if(a%b==0){
        cout<<a<<" es múltiplo de "<<b<<endl;
        cout<<b<<"*"<<a/b<<"="<<a<<endl;
    }
    else{
        cout<<a<<" no es múltiplo de "<<b<<endl;
    }
    return 0;
}