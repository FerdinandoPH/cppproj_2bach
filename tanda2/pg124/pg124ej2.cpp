#include <iostream>
#include <locale.h>
using namespace std;

int pg124ej2(){
    setlocale(LC_ALL, "es_ES");
    int i=26;
    cout<<"Este programa muestra los números pares del 26 al 10"<<endl;
    while(i>=10){
        if(i%2==0)
            cout<<i<<" ";
        i--;
    }
    cout<<endl;
    return 0;
}