#include <iostream>
#include <cmath>  // Librería para funciones matemáticas
using namespace std;

int main() {
    // Definir dos ángulos en grados
    double angulo1, angulo2;

    // Pedir al usuario los ángulos en grados
    cout << "Ingresa el primer ángulo (en grados): ";
    cin >> angulo1;
    cout << "Ingresa el segundo ángulo (en grados): ";
    cin >> angulo2;

    // Convertir grados a radianes (ya que la función sin() usa radianes)
    double radianes1 = angulo1 * M_PI / 180.0;
    double radianes2 = angulo2 * M_PI / 180.0;

    // Calcular el seno de los ángulos
    double seno1 = sin(radianes1);
    double seno2 = sin(radianes2);

    // Sumar los senos
    double suma_senos = seno1 + seno2;

    // Mostrar el resultado
    cout << "La suma de los senos de los ángulos es: " << suma_senos << endl;

    return 0;
}

