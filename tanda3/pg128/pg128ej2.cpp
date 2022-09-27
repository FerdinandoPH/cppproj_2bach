#include <iostream>
using namespace std;
/*Salida:
Este programa te dice el número de días de un mes
Introduce un mes (1-12): 9
El mes Septiembre tiene 30 días
*/
int pg128ej2(){
    int larr=12;
    int diasdecadames[larr]={31,28,31,30,31,30,31,31,30,31,30,31};
    string meses[larr]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    int mes=0;
    cout<<"Este programa te dice el número de días de un mes"<<endl;
    cout<<"Introduce un mes (1-12): ";
    cin>>mes;
    cout<<"El mes "<<meses[mes-1]<<" tiene "<<diasdecadames[mes-1]<<" días"<<endl;
    return 0;
}