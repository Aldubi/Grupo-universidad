#include <iostream>
using namespace std;

int main() {
    int opcion;
    double cantidad;

    cout << "Seleccione la conversion que desea realizar: " << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Metros a Pulgadas" << endl;
    cout << "3. Libras a Kilos" << endl;
    cout << "4. Millas a Kilometros" << endl;
    cout << "5. Pulgadas a Metros" << endl;
    cout << "6. Kilos a Libras" << endl;
    cout << "Ingrese el numero de la opcion: "<<endl;
    cin >> opcion;

    switch (opcion) {
        case 1: // Kilometros a Millas
            cout << "Ingrese la cantidad en kilometros: ";
            cin >> cantidad;
            cout << cantidad << " kilometros son " << cantidad * 0.621371 << " millas." << endl;
            break;

        case 2: // Metros a Pulgadas
            cout << "Ingrese la cantidad en metros: ";
            cin >> cantidad;
            cout << cantidad << " metros son " << cantidad * 39.3701 << " pulgadas." << endl;
            break;

        case 3: // Libras a Kilos
            cout << "Ingrese la cantidad en libras: ";
            cin >> cantidad;
            cout << cantidad << " libras son " << cantidad * 0.453592 << " kilos." << endl;
            break;

        case 4: // Millas a Kilometros
            cout << "Ingrese la cantidad en millas: ";
            cin >> cantidad;
            cout << cantidad << " millas son " << cantidad * 1.60934 << " kilometros." << endl;
            break;

        case 5: // Pulgadas a Metros
            cout << "Ingrese la cantidad en pulgadas: ";
            cin >> cantidad;
            cout << cantidad << " pulgadas son " << cantidad * 0.0254 << " metros." << endl;
            break;

        case 6: // Kilos a Libras
            cout << "Ingrese la cantidad en kilos: ";
            cin >> cantidad;
            cout << cantidad << " kilos son " << cantidad * 2.20462 << " libras." << endl;
            break;

        default:
            cout << "Opción no valida. Intente de nuevo." << endl;
    }

    return 0;
}

