/*Ejercicio: Realice un programa que solicite al usuario que piense un n�mero entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100],
e indicarle al usuario si el numero que d�gito es menor o mayor al numero aleatorio,
as� hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int intento = 0, aleatorio, numero;
    srand(time(NULL));
    aleatorio = 1+rand() % (100);
    do{
        cout<<"Digita numero: ";
        cin>>numero;
        intento++;
        if(numero<aleatorio)
            cout<<"Intenta con un numero mayor"<<endl;
        else
            cout<<"Intenta con un numero menor"<<endl;


    }while(numero!=aleatorio);

    cout<<"Lo lograste en el intento: "<<intento<<endl;

return 0;
}
