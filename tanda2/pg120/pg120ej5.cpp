#include <iostream>
using namespace std;

int pg120ej5(){
    int n;
    cout<<"Este programa te dirá la nota correspondiente al número que metas"<<endl;
    cout << "Introduce un número: ";
    cin >> n;
    switch(n){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout<<"Suspenso :("<<endl;
            break;
        case 5:
            cout<<"Aprobado :/"<<endl;
            break;
        case 6:
            cout<<"Bien :)"<<endl;
            break;
        case 7:
        case 8:
            cout<<"Notable :D"<<endl;
            break;
        case 9:
        case 10:
            cout<<"Sobresaliente :DDD"<<endl;
            break;
        default:
            cout<<"No es un número del 1 al 10"<<endl;
    }

    return 0;
}