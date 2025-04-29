#include <iostream>
#include <cmath>  // Para usar sqrt() y pow()
using namespace std;

int main() {
    // Definir las componentes del vector en 2D
    double x, y;

    // Pedir al usuario las componentes del vector
    cout << "Ingresa la componente x del vector: ";
    cin >> x;
    cout << "Ingresa la componente y del vector: ";
    cin >> y;

    // Calcular la magnitud del vector
    double magnitud = sqrt(pow(x, 2) + pow(y, 2));

    // Mostrar el resultado
    cout << "La magnitud del vector es: " << magnitud << endl;

    return 0;
}

