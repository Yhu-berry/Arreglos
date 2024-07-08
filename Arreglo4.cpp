//Programa que halla los multiplos de un numero
#include <iostream>
using namespace std;

void Llenar(int M[], int tam, int num); 

int main() { 
    int T, N;
     
    cout << "Tamaño del arreglo: ";    
    cin >> T;
  
    int Mul[T];

    cout << "Ingrese el número del cual desea obtener sus múltiplos: ";    
    cin >> N;
    // Llamar a la función
    Llenar(Mul,T, N);

    cout << "Los múltiplos de " << N << " son:" << endl;    
    for (int i = 0; i < T; ++i) 
    {  cout << Mul[i] << " ";    }    
    cout << endl;
    return 0;
}

void Llenar(int M[], int tam, int num){    
    for (int i = 0; i < tam ; ++i){
     M[i] = num * (i + 1);}
}