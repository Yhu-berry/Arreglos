#include <iostream>
using namespace std;
int main() {
    const string diasSemana[] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    const int numDias = 7;
    int Tmin[numDias];
    int Tmax[numDias];
    for (int i = 0; i < numDias; ++i) {
        cout << diasSemana[i] << endl;
        cin >> Tmin[i];
        cin >> Tmax[i];
    }
    
    for (int i = 0; i < numDias; ++i){
         int temMedia = (Tmin[i] + Tmax[i]) / 2;
         cout << "La Temperatura Media del dia "<<diasSemana[i]<<" es: " << temMedia << endl;
     }


    int diaconTmin = 0;
    for (int i = 1; i < numDias; ++i) {
        if (Tmin[i] <= Tmin[diaconTmin]) {
            diaconTmin = i;
        }
    }

    cout << "\nDía con menor temperatura: " << diasSemana[diaconTmin] << endl;
    int BuscandoTmax;
    cout << "Introduce una temperatura: ";
    cin >> BuscandoTmax;
    bool existeDiaConTmax = false;
    cout << "Días cuya temperatura maxima coincide con " << BuscandoTmax << ":\n";
    for (int i = 0; i < numDias; ++i) {
        if (Tmax[i] == BuscandoTmax) {
            cout << diasSemana[i] << endl;
            existeDiaConTmax = true;
        }
    }
    if (!existeDiaConTmax) {
        cout << "No hay ningún día con esa temperatura máxima.\n";
    }
    return 0;
}