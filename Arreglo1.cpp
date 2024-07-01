//sumatoria de un arreglo y el porcentaje de la cantidada de ceros

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingresa la cantidad de terminos:\t";
    cin>>n;
    int A[20];//Tiene 20 terminos como maximo
    int ceros=0;
    double S=0.0;
    double P=0.0;

    for(int i=0;i<n;i++){
        cin>>A[i];
        S+=A[i];
        if(A[i]==0){
            ceros++;
        }
    }
    if(ceros>0){
        P=(double(ceros)/n)*100;
    }
    cout<<S<<endl;
    cout<<P<<"%"<<endl;
    return 0;
}