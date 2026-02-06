#include <iostream>
using namespace std;

// Función que valida una opción de menú
bool validarOpcion(int opcion, int minimo, int maximo) {
    if (opcion >= minimo && opcion <= maximo) {
        return true;   // Opción válida
    } else {
        return false;  // Opción inválida
    }
}

int main() {
    int opcion;

    cout << "MENU" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Salir" << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    if (validarOpcion(opcion, 1, 4)) {
        cout << "Opcion valida";
    } else {
        cout << "Opcion invalida";
    }

    return 0;
}
