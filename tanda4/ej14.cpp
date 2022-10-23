#include <iostream>
#include <fstream>
using namespace std;
/* Salida:
Bienvenido a la calculadora más básica del mundo
Introduce el primer número
3
Introduce la operación que quieres realizar (+,-,*,/)
*
Introduce el segundo número
3
3*3=9
También te he guardado el resultado en calculadora.txt
*/

int ej14(){
    int op1,op2;
    char operador;
    cout<<"Bienvenido a la calculadora más básica del mundo"<<endl;
    cout<<"Introduce el primer número"<<endl;
    cin>>op1;
    cout<<"Introduce la operación que quieres realizar (+,-,*,/)"<<endl;
    cin>>operador;
    cout<<"Introduce el segundo número"<<endl; 
    cin>>op2;
    switch(operador){
        case '+':
            cout<<op1<<"+"<<op2<<"="<<op1+op2<<endl;
            break;
        case '-':
            cout<<op1<<"-"<<op2<<"="<<op1-op2<<endl;
            break;
        case '*':
            cout<<op1<<"*"<<op2<<"="<<op1*op2<<endl;
            break;
        case '/':
            cout<<op1<<"/"<<op2<<"="<<op1/op2<<endl;
            break;
        default:
            cout<<"Operación no válida"<<endl;
            break;
    }
    ofstream f("calculadora.txt",ios::app);
    f<<op1<<operador<<op2<<"="<<op1+op2<<endl;
    f.close();
    cout<<"También te he guardado el resultado en calculadora.txt"<<endl;
    return 0;
}