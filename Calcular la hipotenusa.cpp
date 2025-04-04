#include <iostream>
#include <cmath> // Para usar sqrt()

using namespace std;

int main() {
    double a, b, c;

    cout << "?? Calcular Hipotenusa\n";
    cout << "Ingrese el valor del primer cateto: ";
    cin >> a;

    cout << "Ingrese el valor del segundo cateto: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "La hipotenusa es: " << c << endl;

    return 0;
}

