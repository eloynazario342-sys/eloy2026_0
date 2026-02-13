#include <iostream>
using namespace std;

// Función que crea el arreglo dinámico
int* crearArreglo(int n) {

    int* arr = new int[n];  // reservar memoria

    // llenar con números pares: 2,4,6...
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 2;
    }

    return arr; // retornar puntero
}

int main() {

    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;

    int* arreglo = crearArreglo(n); // llamar función

    cout << "Elementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    delete[] arreglo; // liberar memoria

    return 0;
}
