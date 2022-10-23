#include <iostream>
using namespace std;
/* Salida:
¿Cuánto cuesta el producto?
46
¿Cuánto has pagado?
200
El cambio es de 154€: 100, 50, 2, 2
*/

int ej12(){
    int udcambiodisponible[]={100,50,20,10,5,2,1};
    int precio,pagado=0;
    cout<<"¿Cuánto cuesta el producto?"<<endl;
    cin>>precio;
    while(precio>pagado){
        cout<<"¿Cuánto has pagado?"<<endl;
        cin>>pagado;
        if(precio>pagado){
            cout<<"Te falta dinero"<<endl;
        }
    }
    int cambio=pagado-precio;
    int cambiobak=cambio;
    string cambiotxt;
    while(cambio>0){
        for(int i=0;i<7;i++){
            if(cambio>=udcambiodisponible[i]){
                cambio-=udcambiodisponible[i];
                cambiotxt+=to_string(udcambiodisponible[i]);
                if(cambio>0)
                    cambiotxt+=", ";
                break;
            }
        }
    }
    cout<<"El cambio es de "<<cambiobak<<"€: "<<cambiotxt<<endl;
    return 0;
}