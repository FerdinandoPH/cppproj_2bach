#include <iostream>
using namespace std;

int pg124ej3(){
    int n,r=0;
    cout<<"Este programa te calculará la suma de todos los números positivos que metas"<<endl;
    do{
        cout << "Introduce un número: ";
        cin >> n;
        if(n>0)
            r+=n;
    }
    while(n>0);
    cout << "La suma de los números positivos es " << r << endl;
    return 0;
}