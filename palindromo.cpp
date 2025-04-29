#include <iostream>
using namespace std;

// Funcion para verificar si una cadena es un palíndromo
bool esPalindromo(string str) {
    int inicio = 0;
    int fin = str.length() - 1;
    
    while (inicio < fin) {
        if (str[inicio] != str[fin]) {
            return false;  // No es palindromo si no coinciden
        }
        inicio++;
        fin--;
    }
    return true;  // Es palíndromo si coinciden todos los caracteres
}

// Función para verificar si un número es un palíndromo
bool esPalindromo(int numero) {
    int original = numero, invertido = 0, digito;
    
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    
    return original == invertido;  // Es palíndromo si el número original es igual al invertido
}

int main() {
    int opcion;
    cout << "Seleccione la opcion: " <<endl;
    cout << "1. Verificar si una palabra es un palindromo" <<endl;
    cout << "2. Verificar si un numero es un palindromo" <<endl;
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        // Verificar palíndromo de palabra
        string palabra;
        cout << "Ingrese una palabra: ";
        cin >> palabra;

        if (esPalindromo(palabra)) {
            cout << "La palabra '" << palabra << "' es un palindromo." <<endl;
        } else {
            cout << "La palabra '" << palabra << "' no es un palindromo." <<endl;
        }
    } else if (opcion == 2) {
        // Verificar palíndromo de número
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (esPalindromo(numero)) {
            cout << "El numero " << numero << " es un palindromo." <<endl;
        } else {
            cout << "El numero " << numero << " no es un palindromo." <<endl;
        }
    } else {
        cout << "Opción no valida. Intente de nuevo." <<endl;
    }

    return 0;
}

