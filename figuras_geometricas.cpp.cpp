#include <iostream>
using namespace std;

void triangulo(int altura) {
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void cuadrado(int lado) {
    for (int i = 1; i <= lado; ++i) {
        for (int j = 1; j <= lado; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void rectangulo(int ancho, int alto) {
    for (int i = 1; i <= alto; ++i) {
        for (int j = 1; j <= ancho; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int opcion;
    cout << "Seleccione una figura:\n";
    cout << "1. Triangulo\n2. Cuadrado\n3. Rectangulo\n";
    cin >> opcion;
    
    switch (opcion) {
        case 1:
            int altura;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            triangulo(altura);
            break;
        case 2:
            int lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cuadrado(lado);
            break;
        case 3:
            int ancho, alto;
            cout << "Ingrese el ancho del rectangulo: ";
            cin >> ancho;
            cout << "Ingrese el alto del rectangulo: ";
            cin >> alto;
            rectangulo(ancho, alto);
            break;
        default:
            cout << "Opcion no valida.\n";
    }
    
    return 0;
}