#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int A[] = {5,7,3,9,8,8,4,7};
    int aux,pos,i;

    for(i=0;i<8;i++){
        pos = i;
        aux = A[i];

        while((pos>0) && (A[pos-1]>aux)){
            A[pos] = A[pos-1];
            pos--;
        }
        A[pos] = aux;
    }
    cout<<"Orden Ascendente: ";
    for(i=0;i<8;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

system("pause");
return 0;
}
