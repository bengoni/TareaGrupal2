#include <iostream>

using namespace std;

void Opcion17() {
    // Declaraci�n de la matriz de 3x3
    int matriz[3][3];

    // Inicializaci�n de la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = i + j;  // Podr�as asignar cualquier valor aqu�
        }
    }

    // Imprimir la matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
}


