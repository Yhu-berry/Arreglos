//imprimir los elemntos menores al promedio
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    double A[n];
    double S = 0.0;

    for(int i = 0; i < n; i++){
        cin>>A[i];
        S += A[i];
    }

    double P=S / n;

    cout<<P<<endl;

    for(int i=0;i<n;i++){
        if(A[i] < P)
            cout<<A[i]<<" ";  //imprime los elementos menores al promedio
    }

}