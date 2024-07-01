//promedio de un arreglo
#include<iostream>
using namespace std;

int main(){
    int n,S,P;
    cin>>n;
    int A[n];
    S=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        S+=A[i];
    }
    P=S/n;
    cout<<P<<endl;
    return 0;
}