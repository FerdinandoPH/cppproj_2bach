#include <iostream>
#include <locale.h>
using namespace std;

int pg120ej4(){
    setlocale(LC_ALL, "es_ES");
    int n;
    cout<<"Este programa te dirá si el número que metas (del 1 al 10) es múltiplo de 3, pero usando un switch"<<endl;
    cout << "Introduce un número (del 1 al 10): ";
    cin >> n;
    switch(n){
        case 1:
        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
        case 10:
            cout<<n<<" no es múltiplo de 3"<<endl;
            break;
        case 3:
        case 6:
        case 9:
            cout<<n<<" es múltiplo de 3"<<endl;
            cout<<"3*"<<n/3<<"="<<n<<endl;
            break;
        default:
            cout<<"El número tiene que ser del 1 al 10"<<endl;
    }

    return 0;
}