#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // 1) Pedir tamaño
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    // 2) Crear vector
    vector<int> arreglo(n);

    // 3) Llenar vector
    for (int i = 0; i < n; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    // 4) Mostrar vector
    cout << "\nArreglo ingresado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    // 5) Calcular promedio
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    float promedio = (float)suma / n;
    cout << "\nPromedio: " << promedio << endl;

    return 0;
}
