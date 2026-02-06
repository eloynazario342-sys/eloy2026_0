#include <iostream>
using namespace std;

// Función que retorna el número mayor
int mayor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El numero mayor es: " << mayor(num1, num2);

    return 0;
}
