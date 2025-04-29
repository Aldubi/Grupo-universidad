#include <iostream>

using namespace std;

class Cajero {
private:
    int pin_correcto = 1234;  // PIN de prueba
    double saldo = 1000.00;   // Saldo inicial

public:
    bool autenticar(int pin_ingresado) {
        return pin_ingresado == pin_correcto;
    }

    void mostrarSaldo() {
        cout << "?? Saldo actual: $" << saldo << endl;
    }

    void retirarDinero(double cantidad) {
        if (cantidad > saldo) {
            cout << "? Fondos insuficientes.\n";
        } else if (cantidad <= 0) {
            cout << "? Ingrese una cantidad v�lida.\n";
        } else {
            saldo -= cantidad;
            cout << "? Retiro exitoso. Nuevo saldo: $" << saldo << endl;
        }
    }

    void depositarDinero(double cantidad) {
        if (cantidad <= 0) {
            cout << "? Ingrese una cantidad v�lida.\n";
        } else {
            saldo += cantidad;
            cout << "? Dep�sito exitoso. Nuevo saldo: $" << saldo << endl;
        }
    }
};

int main() {
    Cajero cajero;
    int pin, opcion;
    double cantidad;

    cout << "?? Ingrese su PIN: ";
    cin >> pin;

    if (!cajero.autenticar(pin)) {
        cout << "? PIN incorrecto. Acceso denegado.\n";
        return 0;
    }

    do {
        cout << "\n?? MENU - CAJERO AUTOM�TICO\n";
        cout << "1?? Consultar Saldo\n";
        cout << "2?? Retirar Dinero\n";
        cout << "3?? Depositar Dinero\n";
        cout << "4?? Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cajero.mostrarSaldo();
                break;
            case 2:
                cout << "?? Ingrese la cantidad a retirar: ";
                cin >> cantidad;
                cajero.retirarDinero(cantidad);
                break;
            case 3:
                cout << "?? Ingrese la cantidad a depositar: ";
                cin >> cantidad;
                cajero.depositarDinero(cantidad);
                break;
            case 4:
                cout << "?? Gracias por usar el cajero autom�tico. �Hasta pronto!\n";
                break;
            default:
                cout << "? Opci�n inv�lida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}

