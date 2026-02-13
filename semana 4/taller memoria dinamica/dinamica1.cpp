#include <iostream>
using namespace std;

int main() {
    int n;

    // Pedir tamaño
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    // Crear arreglo dinamico
    int *arreglo = new int[n];

    // Llenar arreglo
    for (int i = 0; i < n; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    // Mostrar arreglo
    cout << "\nArreglo ingresado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    // Reto extra: promedio
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    
    float promedio = (float)suma / n;
    cout << "\nPromedio: " << promedio << endl;

    // Liberar memoria
    delete[] arreglo;

    return 0;
}
