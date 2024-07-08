//sumatoria de un arreglo y el porcentaje de la cantidada de ceros
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Cantidad de elementos:\t";
    cin>>n;
    int A[20];//Tiene 20 terminos como maximo
    int ceros=0;
    double S=0.0;
    double P=0.0;

    for(int i=0;i<n;i++){
        cout<<"Elemento "<<i+1<<": ";cin>>A[i];
        S+=A[i];
        if(A[i]==0){
            ceros++;
        }
    }
    if(ceros>0){
        P=(double(ceros)/n)*100;
    }
    cout<<"La suma de los elementos es: "<< S <<endl;
    cout<<"El porcentaje de ceros ingresados es: " << P <<"%"<<endl;
    return 0;
}