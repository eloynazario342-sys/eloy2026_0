#include <iostream>
using namespace std;

int main() {

    int capacidad = 2;
    int *arr = new int[capacidad];
    int n, contador = 0;
    int vecesCopiado = 0;

    cout << "Ingrese numeros (-1 para terminar):\n";

    while (true) {
        cin >> n;
        if (n == -1) break;

        // Si se llena la capacidad
        if (contador == capacidad) {
            int nuevaCap = capacidad * 2;
            int *nuevo = new int[nuevaCap];

            // Copiar elementos
            for (int i = 0; i < contador; i++) {
                nuevo[i] = arr[i];
            }

            delete[] arr; // borrar arreglo viejo
            arr = nuevo;  // apuntar al nuevo
            capacidad = nuevaCap;
            vecesCopiado++;
        }

        arr[contador] = n;
        contador++;
    }

    // Imprimir numeros
    cout << "\nNumeros guardados:\n";
    for (int i = 0; i < contador; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEl arreglo se copio: " << vecesCopiado << " veces" << endl;

    delete[] arr;
    return 0;
}
