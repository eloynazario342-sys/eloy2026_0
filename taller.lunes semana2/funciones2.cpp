#include <iostream>
using namespace std;

// Función que determina si un número es par
bool esPar(int num) {
    if (num % 2 == 0) {
        return true;   // Es par
    } else {
        return false;  // Es impar
    }
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }

    return 0;
}
