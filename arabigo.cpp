#include <iostream>
#include <string>
using namespace std;

// Función para convertir un número arábigo a romano
string convertirARomano(int numero) {
    string romano = "";

    // Definir los valores y símbolos romanos en orden descendente
    string valores[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int numeros[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Recorremos los valores romanos y vamos restando del número original
    for (int i = 0; i < 13; i++) {
        while (numero >= numeros[i]) {
            romano += valores[i];  // Añadir el símbolo romano correspondiente
            numero -= numeros[i];  // Restar el valor al número
        }
    }
    
    return romano;
}

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número arábigo
    cout << "Ingrese un numero arabigo: ";
    cin >> numero;

    // Verificar que el número sea válido
    if (numero >= 1000) {
        cout << "El numero no debe ser  mayor a 1000." << endl;
    } else {
        // Convertir el numero a romano y mostrar el resultado
        string romano = convertirARomano(numero);
        cout << "El numero " << numero << " en numeros romanos es: " << romano << endl;
    }

    return 0;
}

