#include <iostream>
#include <cmath> // para cos()
using namespace std;

void sumaCoseno() {
    int cantidad;
    double numero, suma = 0;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingresa el número #" << i << ": ";
        cin >> numero;

        // coseno en radianes
        suma += cos(numero);
    }

    cout << "La suma del coseno de los números ingresados es: " << suma << endl;
}

