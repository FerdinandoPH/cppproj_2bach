#include <iostream>
#include <locale.h>
using namespace std;
#include<cmath>
int main(){
    setlocale(LC_ALL, "es_ES");
    float n,r=0;
    cout<<"Introduce un número\n ";
    cin>>n;
    r=pow(n,(1.0/3.0));
    cout<<"La raíz cúbica de "<<n<<" es "<<r<<endl;
    return 0;
}