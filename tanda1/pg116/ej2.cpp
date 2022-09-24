#include <iostream>
using namespace std;
#include<cmath>
int ej2(){
    float n,r=0;
    cout<<"Introduce un número\n ";
    cin>>n;
    r=pow(n,(1.0/3.0));
    cout<<"La raíz cúbica de "<<n<<" es "<<r<<endl;
    return 0;
}