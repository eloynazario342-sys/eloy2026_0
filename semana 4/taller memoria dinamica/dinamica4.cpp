#include <iostream>
#include <vector>
using namespace std;

int main() {

    int f, c;

    // 1) Pedir filas y columnas
    cout << "Ingrese filas: ";
    cin >> f;
    cout << "Ingrese columnas: ";
    cin >> c;

    // 2) Crear matriz dinamica
    vector<vector<int>> matriz(f, vector<int>(c));

    // 3) Llenar matriz
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    // 4) Imprimir matriz
    cout << "\nMatriz:\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Reto extra: suma por fila
    cout << "\nSuma de cada fila:\n";
    for (int i = 0; i < f; i++) {
        int suma = 0;
        for (int j = 0; j < c; j++) {
            suma += matriz[i][j];
        }
        cout << "Fila " << i << ": " << suma << endl;
    }

    return 0;
}
