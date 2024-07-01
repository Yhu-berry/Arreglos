//segumda forma de hallar el elemento mayor de un arreglo
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n]; //n es la cantidad de componentes del arreglo A
    int max=-9999; //se da inicialmente un valor muy peque;o para poder comparar
    cout<<"--HALLAR AL ELEMENTO MAYOR--"<<endl;
    cout<<"Ingrese los elementos del arreglo: "<<endl;

    /*se leen y se compara cada elemento con el máximo hasta ese entonces
    si el elemento es mayor, se actualiza el máximo en ese momento
    se repite este proceso para todos los elementos del arreglo A*/

    for(int i=0;i<n;i++){
        cin>> A[i];
        if(max<A[i]){
            max=A[i];
        }
    }
    cout<<"Elemento mayor: "<<max;
    return 0;
}