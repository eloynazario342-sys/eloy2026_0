#include <iostream>
using namespace std;

// Función que calcula el promedio de un arreglo de notas
float promedioNotas(float notas[], int n) {
    float suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + notas[i];
    }

    float promedio = suma / n;
    return promedio;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    float notas[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << "El promedio de las notas es: " << promedioNotas(notas, n);

    return 0;
}
