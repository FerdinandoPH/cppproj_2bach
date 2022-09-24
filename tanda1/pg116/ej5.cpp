#include <iostream>
using namespace std;
#include <cmath>
double sing(double x)
{
    return sin(x*3.14159265358979323846/180);
}
double cosg(double x)
{
    return cos(x*3.14159265358979323846/180);
}
double tang(double x)
{
    return tan(x*3.14159265358979323846/180);
}
int ej5(){
    double angulosdemo[4] = {30,45,60,90};
    cout<<"Bienvenido al programa trigonométrico"<<endl;
    cout<<"Estas son las razones trigonométricas de cuatro ángulos comunes: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"El seno de "<<angulosdemo[i]<<"º es "<<sing(angulosdemo[i])<<endl;
        cout<<"El coseno de "<<angulosdemo[i]<<"º es "<<cosg(angulosdemo[i])<<endl;
        cout<<"La tangente de "<<angulosdemo[i]<<"º es "<<tang(angulosdemo[i])<<endl;
    }
    cout<<"El seno de "<<angulosdemo[3]<<"º es "<<sing(angulosdemo[3])<<endl;
    cout<<"El coseno de "<<angulosdemo[3]<<"º es 0"<<endl;
    cout<<"La tangente de "<<angulosdemo[3]<<"º es indefinida"<<endl;
    cout<<"Y ahora, demostraré cuatro identidades trigonométricas: "<<endl;
    double a1,a2=0;
    cout<<"Dime un ángulo (en grados)\n ";
    cin>>a1;
    cout<<"Dime otro ángulo (en grados)\n ";
    cin>>a2;
    cout<<"--------------------------------------"<<endl;
    cout<<"Identidad 1: sen(a^2)+cos(a^2)=1"<<endl;
    cout<<"El seno al cuadrado de "<<a1<<"º es "<<pow(sing(a1),2)<<" y el coseno al cuadrado de "<<a1<<"º es "<<pow(cosg(a1),2)<<endl;
    cout<<pow(sing(a1),2)<<"+"<<pow(cosg(a1),2)<<"="<<pow(sing(a1),2)+pow(cosg(a1),2)<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Identidad 2: sen(a+b)=sen(a)cos(b)+cos(a)sen(b)"<<endl;
    cout<<"El seno de "<<a1<<"º es "<<sing(a1)<<" y el coseno de "<<a2<<"º es "<<cosg(a2)<<endl;
    cout<<sing(a1)<<"*"<<cosg(a2)<<"="<<sing(a1)*cosg(a2)<<endl;
    cout<<"El coseno de "<<a1<<"º es "<<cosg(a1)<<" y el seno de "<<a2<<"º es "<<sing(a2)<<endl;
    cout<<cosg(a1)<<"*"<<sing(a2)<<"="<<cosg(a1)*sing(a2)<<endl;
    cout<<sing(a1)*cosg(a2)<<"+"<<cosg(a1)*sing(a2)<<"="<<sing(a1)*cosg(a2)+cosg(a1)*sing(a2)<<endl;
    cout<<"El seno de "<<a1<<"º más "<<a2<<"º ("<<a1+a2<<"º) es "<<sing(a1+a2)<<endl;
    cout<<sing(a1+a2)<<"="<<sing(a1)*cosg(a2)+cosg(a1)*sing(a2)<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Identidad 3: cos(a+b)=cos(a)cos(b)-sen(a)sen(b)"<<endl;
    cout<<"El coseno de "<<a1<<"º es "<<cosg(a1)<<" y el coseno de "<<a2<<"º es "<<cosg(a2)<<endl;
    cout<<cosg(a1)<<"*"<<cosg(a2)<<"="<<cosg(a1)*cosg(a2)<<endl;
    cout<<"El seno de "<<a1<<"º es "<<sing(a1)<<" y el seno de "<<a2<<"º es "<<sing(a2)<<endl;
    cout<<sing(a1)<<"*"<<sing(a2)<<"="<<sing(a1)*sing(a2)<<endl;
    cout<<cosg(a1)*cosg(a2)<<"-"<<sing(a1)*sing(a2)<<"="<<cosg(a1)*cosg(a2)-sing(a1)*sing(a2)<<endl;
    cout<<"El coseno de "<<a1<<"º más "<<a2<<"º ("<<a1+a2<<"º) es "<<cosg(a1+a2)<<endl;
    cout<<cosg(a1+a2)<<"="<<cosg(a1)*cosg(a2)-sing(a1)*sing(a2)<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Identidad 4: tan(a+b)=tan(a)+tan(b)/(1-tan(a)tan(b))"<<endl;
    cout<<"La tangente de "<<a1<<"º es "<<tang(a1)<<" y la tangente de "<<a2<<"º es "<<tang(a2)<<endl;
    cout<<tang(a1)<<"+"<<tang(a2)<<"="<<tang(a1)+tang(a2)<<endl;
    cout<<"1-"<<tang(a1)<<"*"<<tang(a2)<<"="<<1-tang(a1)*tang(a2)<<endl;
    cout<<tang(a1)+tang(a2)<<"/"<<1-tang(a1)*tang(a2)<<"="<<(tang(a1)+tang(a2))/(1-tang(a1)*tang(a2))<<endl;
    cout<<"La tangente de "<<a1<<"º más "<<a2<<"º ("<<a1+a2<<"º) es "<<tang(a1+a2)<<endl;
    cout<<tang(a1+a2)<<"="<<(tang(a1)+tang(a2))/(1-tang(a1)*tang(a2))<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Eso es todo, espero que hayas descubierto lo guay que es la trigonometría"<<endl;
    return 0;
}