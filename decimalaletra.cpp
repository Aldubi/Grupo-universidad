#include <iostream>
#include <string>
#include <sstream>

using namespace std;

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
        default: return "";
    }
}

string convertirDecena(int num) {
    if (num < 10) {
        return convertirUnidad(num);
    }
    if (num >= 10 && num < 20) {
        switch (num) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            default: return "dieci" + convertirUnidad(num - 10);
        }
    } else {
        int decena = num / 10;
        int unidad = num % 10;
        string decenaStr = "";

        switch (decena) {
            case 2: decenaStr = "veinte"; break;
            case 3: decenaStr = "treinta"; break;
            case 4: decenaStr = "cuarenta"; break;
            case 5: decenaStr = "cincuenta"; break;
            case 6: decenaStr = "sesenta"; break;
            case 7: decenaStr = "setenta"; break;
            case 8: decenaStr = "ochenta"; break;
            case 9: decenaStr = "noventa"; break;
        }

        if (unidad != 0) {
            return decenaStr + " y " + convertirUnidad(unidad);
        } else {
            return decenaStr;
        }
    }
}

string convertirCentena(int num) {
    if (num >= 100) {
        if (num == 100) return "cien";
        return convertirUnidad(num / 100) + "cientos " + convertirDecena(num % 100);
    } else {
        return convertirDecena(num);
    }
}

string convertirMiles(int num) {
    if (num >= 1000) {
        if (num == 1000) return "mil";
        return convertirUnidad(num / 1000) + " mil " + convertirCentena(num % 1000);
    } else {
        return convertirCentena(num);
    }
}

string convertirNumerosALetras(double num) {
    int parteEntera = (int)num;
    int parteDecimal = (num - parteEntera) * 100;

    stringstream resultado;
    resultado << convertirMiles(parteEntera);

    if (parteDecimal > 0) {
        resultado << " punto " << convertirDecena(parteDecimal);
    }

    return resultado.str();
}

int main() {
    double numero;
    cout << "Introduce un numero con decimales: ";
    cin >> numero;

    cout << "El numero " << numero << " en letras es: " << convertirNumerosALetras(numero) << endl;

    return 0;
}

