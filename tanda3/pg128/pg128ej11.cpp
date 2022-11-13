#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
/* Salida:
Este programa calcula el producto de 2 matrices
Dime el número de filas de la primera matriz
3
Dime el número de columnas de la primera matriz
3
Dime el número de filas de la segunda matriz
3
Dime el número de columnas de la segunda matriz
3
Vamos a rellenar la primera matriz
Dime el elemento 1,1
1
Dime el elemento 1,2
2
Dime el elemento 1,3
3
Dime el elemento 2,1
4
Dime el elemento 2,2
5
Dime el elemento 2,3
6
Dime el elemento 3,1
7
Dime el elemento 3,2
8
Dime el elemento 3,3
9
Ahora, vamos a rellenar la segunda matriz
Dime el elemento 1,1
1
Dime el elemento 1,2
2
Dime el elemento 1,3
3
Dime el elemento 2,1
4
Dime el elemento 2,2
5
Dime el elemento 2,3
6
Dime el elemento 3,1
7
Dime el elemento 3,2
8
Dime el elemento 3,3
9
El producto de esas dos matrices es:
30 36 42
66 81 96
102 126 150
*/
int main(){
    srand((unsigned) time(0));
    int modo=0;
    cout<<"Bienvenido al multiplicador de matrices"<<endl;
    cout<<"¿Qué modo quieres usar?"<<endl;
    cout<<"1. Producto de dos matrices"<<endl;
    cout<<"2. Producto de dos matrices aleatorias de 128x128"<<endl;
    cout<<"3. Elevar una matriz a un exponente"<<endl;
    cout<<"Elige un modo: ";
    cin>>modo;
    if (modo==1){
        int f1,c1,f2,c2;
        cout<<"Este programa calcula el producto de 2 matrices"<<endl;
        cout<<"Dime el número de filas de la primera matriz"<<endl;
        cin>>f1;
        cout<<"Dime el número de columnas de la primera matriz"<<endl;
        cin>>c1;
        cout<<"Dime el número de filas de la segunda matriz"<<endl;
        cin>>f2;
        cout<<"Dime el número de columnas de la segunda matriz"<<endl;
        cin>>c2;
        if(c1!=f2){
            cout<<"No se puede hacer el producto"<<endl;
            return 0;
        }
        int m1[f1][c1];
        int m2[f2][c2];
        int m3[f1][c2];
        
        cout<<"Vamos a rellenar la primera matriz"<<endl;
        for(int i=0;i<f1;i++){
            for(int j=0;j<c1;j++){
                cout<<"Dime el elemento "<<i+1<<","<<j+1<<endl;
                cin>>m1[i][j];
            }
        }
        cout<<"Ahora, vamos a rellenar la segunda matriz"<<endl;
        for(int i=0;i<f2;i++){
            for(int j=0;j<c2;j++){
                cout<<"Dime el elemento "<<i+1<<","<<j+1<<endl;
                cin>>m2[i][j];
            }
        }
        
        for(int i=0;i<f1;i++){
            for(int j=0;j<c2;j++){
                m3[i][j]=0;
                for(int k=0;k<c1;k++){
                    m3[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        

        
        for(int i=0;i<f1;i++){
            for(int j=0;j<c2;j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }else if (modo==2){
        int m1[128][128];
        int m2[128][128];
        int m3[128][128];
        for(int i=0;i<128;i++){
            for(int j=0;j<128;j++){
                m1[i][j]=rand()%100;
                m2[i][j]=rand()%100;
            }
        }
        cout<<"Matriz 1:"<<endl;
        for(int i=0;i<128;i++){
            for(int j=0;j<128;j++){
                cout<<m1[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Matriz 2:"<<endl;
        for(int i=0;i<128;i++){
            for(int j=0;j<128;j++){
                cout<<m2[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<128;i++){
            for(int j=0;j<128;j++){
                m3[i][j]=0;
                for(int k=0;k<128;k++){
                    m3[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        cout<<"Resultado:"<<endl;
        for(int i=0;i<128;i++){
            for(int j=0;j<128;j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }
    }else if (modo==3){
        int f,c,e;
        cout<<"Este programa calcula la potencia de una matriz"<<endl;
        cout<<"Dime el número de filas de la matriz"<<endl;
        cin>>f;
        cout<<"Dime el número de columnas de la matriz"<<endl;
        cin>>c;
        if(f!=c){
            cout<<"No se puede hacer la potencia"<<endl;
            return 0;
        }
        cout<<"Dime el exponente"<<endl;
        cin>>e;
        int m1[f][c];
        int m2[f][c];
        int m3[f][c];
        cout<<"Vamos a rellenar la matriz"<<endl;
        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                cout<<"Dime el elemento "<<i+1<<","<<j+1<<endl;
                cin>>m1[i][j];
            }
        }
        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                m2[i][j]=m1[i][j];
                m3[i][j]=m1[i][j];
            }
        }
        for (int i=1;i<e;i++){
            for(int i=0;i<f;i++){
                for(int j=0;j<c;j++){
                    m3[i][j]=0;
                    for(int k=0;k<c;k++){
                        m3[i][j]+=m1[i][k]*m2[k][j];
                    }
                }
            }
            for(int i=0;i<f;i++){
                for(int j=0;j<c;j++){
                    m1[i][j]=m3[i][j];
                }
            }
        }
        cout<<"Resultado:"<<endl;
        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else
        cout<<"Modo incorrecto"<<endl;

    return 0;
}