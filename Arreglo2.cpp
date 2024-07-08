#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int A[n], I[n] = {0}, P[n] = {0}; 
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        if (A[i] % 2 == 0) {
            P[i] = A[i];
        } else {
            I[i] = A[i];
        }
    }
    cout<<"---ELEMENTOS---"<<endl;
    cout << "Impares: ";
    for (int j = 0; j < n; ++j) {
        if (I[j]) {
            cout << I[j] << " ";
        }
    }

    cout << "\nPares: ";
    for (int j = 0; j < n; ++j) {
        if (P[j]) {
            cout << P[j] << " ";
        }
    }

    return 0;
}
