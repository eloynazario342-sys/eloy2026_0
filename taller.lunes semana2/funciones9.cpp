#include <iostream>
using namespace std;

// Función que busca un valor en el arreglo
bool buscarValor(int arr[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor) {
            return true;  // Valor encontrado
        }
    }
    return false;  // Valor no encontrado
}

int main() {
    int n, valor;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    if (buscarValor(arreglo, n, valor)) {
        cout << "El valor existe en el arreglo";
    } else {
        cout << "El valor no existe en el arreglo";
    }

    return 0;
}
