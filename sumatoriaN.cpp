//sumatoria de un arreglo

#include <iostream>
using namespace std;

int main(){
    int n,S;
    cin>>n;
    int A[n];
    S=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        S+=A[i];
    }

    cout<<S;
    return 0;
}