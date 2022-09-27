#include <iostream>
using namespace std;
/*Salida:
Este programa te dice el número del día del año a partir de un mes y un día
Introduce un mes (1-12): 9
Introduce un día (1-30): 27
El 27 de septiembre es el día 270 del año
*/
int pg128ej3(){
    int larr=12;
    int diasdecadames[larr]={31,28,31,30,31,30,31,31,30,31,30,31};
    string pregunta;
    string meses[larr]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    int mes,dia,diabak=0;
    cout<<"Este programa te dice el número del día del año a partir de un mes y un día"<<endl;
    cout<<"Introduce un mes (1-12): ";
    cin>>mes;
    pregunta="Introduce un día (1-"+to_string(diasdecadames[mes-1])+"): ";
    cout<<pregunta;
    cin>>dia;
    diabak=dia;
    for(int i=0;i<mes-1;i++){
        dia+=diasdecadames[i];
    }
    cout<<"El "<<diabak<<" de "<<meses[mes-1]<<" es el día "<<dia<<" del año"<<endl;
    return 0;
}