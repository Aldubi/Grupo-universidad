#include <iostream>
using namespace std;

// Función para convertir números del 0 al 19
string convertirUnidad(int num) {
    switch (num) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        case 10: return "diez";
        case 11: return "once";
        case 12: return "doce";
        case 13: return "trece";
        case 14: return "catorce";
        case 15: return "quince";
        case 16: return "dieciséis";
        case 17: return "diecisiete";
        case 18: return "dieciocho";
        case 19: return "diecinueve";
        default: return "";
    }
}

// Función para convertir decenas (20, 30, ..., 90)
string convertirDecena(int num) {
    switch (num) {
        case 2: return "veinte";
        case 3: return "treinta";
        case 4: return "cuarenta";
        case 5: return "cincuenta";
        case 6: return "sesenta";
        case 7: return "setenta";
        case 8: return "ochenta";
        case 9: return "noventa";
        default: return "";
    }
}

// Función para convertir centenas (100, 200, ..., 900)
string convertirCentena(int num) {
    switch (num) {
        case 1: return "cien";
        case 2: return "doscientos";
        case 3: return "trescientos";
        case 4: return "cuatrocientos";
        case 5: return "quinientos";
        case 6: return "seiscientos";
        case 7: return "setecientos";
        case 8: return "ochocientos";
        case 9: return "novecientos";
        default: return "";
    }
}

// Función para convertir cualquier número entre 0 y 9999 a letras
string convertirNumeroALetras(int num) {
    if (num == 0) return "cero";

    string resultado = "";

    // Miles
    if (num >= 1000) {
        resultado += (num / 1000 == 1) ? "mil " : convertirUnidad(num / 1000) + " mil ";
        num %= 1000;
    }

    // Centenas
    if (num >= 100) {
        resultado += convertirCentena(num / 100) + " ";
        num %= 100;
    }

    // Decenas
    if (num >= 20) {
        resultado += convertirDecena(num / 10) + " ";
        num %= 10;
    }

    // Unidades
    if (num > 0) {
        if (num <= 19) {
            resultado += convertirUnidad(num);
        }
    }

    return resultado;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero (entre 0 y 9999): ";
    cin >> numero;

    // Verificar que el número esté en el rango válido
    if (numero < 0 || numero > 9999) {
        cout << "El numero debe estar entre 0 y 9999." << endl;
    } else {
        // Convertir el número a letras y mostrar el resultado
        string numeroEnLetras = convertirNumeroALetras(numero);
        cout << "El numero " << numero << " en letras es: " << numeroEnLetras << endl;
    }

    return 0;
}

