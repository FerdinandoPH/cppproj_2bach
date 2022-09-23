#include <iostream>
#include <locale.h>
using namespace std;

int pg120ej3(){
    setlocale(LC_ALL, "es_ES");
    int n;
    cout<<"Este programa te dirá si el número que metas (del 1 al 10) es múltiplo de 3"<<endl;
    cout << "Introduce un número (del 1 al 10): ";
    cin >> n;
    if(n>=1&&n<=10){
        if(n%3==0){
            cout<<n<<" es múltiplo de 3"<<endl;
            cout<<"3*"<<n/3<<"="<<n<<endl;
        }
        else{
            cout<<n<<" no es múltiplo de 3"<<endl;
        }
    }
    else{
        cout<<"Tiene que ser del 1 al 10"<<endl;
    }

    return 0;
}