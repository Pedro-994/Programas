/*1. Realizar un programa con el siguiente menú:
* Leer el vector capturado por el usuario
* Llenar Vector B de manera aleatoria.
* Realizar C=A+B (sumar posición por posición)*/
#include<iostream>
#include<cstdlib>
#include<time.h>
#define TAM 100
using namespace std;
int main(){
int i=0,opc,a[TAM],tam,b[TAM],c[TAM];

do{
    setlocale(LC_ALL, "spanish");
    cout<<"=========================Menu========================="<<endl;
    cout<<"1) Leer el vector capturado por el usuario"<<endl<<"2) Llenar Vector B de manera aleatoria"<<endl<<"3) Realizar C=A+B (sumar posición por posición)"<<endl<<"Opción: ";
    cin>>opc;
    switch(opc){
    case 1:
        cout<<"Tamaño del vector: ";
        cin>>tam;
        for(int j = 0;j<tam;j++){
            cout<<"Ingrese el valor de la posición "<<j+1<<": ";
            cin>>a[j];
        }
        i++;
        break;
    case 2:
        cout<<"Tamaño del vector: ";
        cin>>tam;
        srand(time(NULL));
        for(int j = 0;j<tam;j++){
            a[j] = 1+rand()%(101-1);
        }
        i++;
        break;
    case 3:
        cout<<"Tamaño de los vectores A y B: ";
        cin>>tam;
        for(int j = 0;j<tam;j++){
            cout<<"Ingrese el valor de la posición "<<j+1<<" del vector A: ";
            cin>>b[j];
        }
        for(int j = 0;j<tam;j++){
            cout<<"Ingrese el valor de la posición "<<j+1<<" del vector B: ";
            cin>>c[j];
        }
        for(int j = 0;j<tam;j++){
            a[j]= c[j] + b[j];
        }
        i++;
        break;
    }
}while(i==0);
        for(int j = 0;j<tam;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
system("pause");
}
