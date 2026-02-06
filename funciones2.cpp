#include <iostream>
using namespace std;

bool esPar(int num) {
    if (num % 2 == 0) {
        return true;   
        return false;  
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
