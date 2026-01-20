#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a > b)
        cout << "El mayor es: " << a;
    else if (b > a)
        cout << "El mayor es: " << b;
    else
        cout << "Ambos numeros son iguales";

    return 0;
}
