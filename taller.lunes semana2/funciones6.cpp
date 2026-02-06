#include <iostream>
using namespace std;

// Función que retorna el valor mínimo de un arreglo
int minimoArreglo(int arr[], int n) {
    int minimo = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }

    return minimo;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "El valor minimo del arreglo es: " << minimoArreglo(arreglo, n);

    return 0;
}
