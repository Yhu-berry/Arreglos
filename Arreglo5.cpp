#include <iostream>
#include <string>

using namespace std;

int main() {
    int numEst;
    cout << "Cantidad de estudiantes: ";
    cin >> numEst;

    string FP[numEst];
    string PG[numEst];
    string com[numEst]; // Almacena los nombres comunes

    // Solicitar nombres de los estudiantes de Fundamentos de Programación
    cout << "FP: " << endl;
    for (int i = 0; i < numEst; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> FP[i];
    }

    // Solicitar nombres de los  estudiantes de Programación Gráfica
    cout << "PG: " << endl;
    for (int i = 0; i < numEst; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> PG[i];
    }

    // Encontrar estudiantes comunes
    int EstCom = 0;
    for (int i = 0; i < numEst; ++i) {
        for (int j = 0; j < numEst; ++j) {
            if (FP[i] == PG[j]) {
                com[EstCom] = FP[i];
                ++EstCom;
            }
        }
    }

    // Mostrar estudiantes comunes
    cout << "\nEstudiantes comunes:" << endl;
    for (int i = 0; i < EstCom; ++i) {
        cout << com[i] << endl;
    }

    cout << "Total de estudiantes comunes: " << EstCom << endl;

    return 0;
}
