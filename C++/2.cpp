/*3. Leer un arreglo e imprimirlo de manera inversa*/
#include<iostream>
#include<cstdlib>
#define TAM 100
using namespace std;
int main(){
    int a[TAM],tam;
    setlocale(LC_ALL, "spanish");
    cout<<"Ingresa el tamaño del arreglo: ";
    cin>>tam;
    for(int j = 0;j<tam;j++){
        cout<<"Ingrese el valor de la posición "<<j+1<<": ";
        cin>>a[j];
    }
    for(int j = (tam-1);j>=0;j--){
        cout<<a[j]<<", ";
    }
    cout<<endl;

    system("pause");
}
