#include <iostream>
using namespace std;

long factorial(int n) {
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El factorial es: " << factorial(numero);

    return 0;
}
