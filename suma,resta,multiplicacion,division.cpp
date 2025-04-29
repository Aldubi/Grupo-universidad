#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    int opcion;

    // Solicita los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // menu de operaciones
    cout << "Que operacion desea realizar:"<<endl;
    cout << "1. Suma"<<endl;
    cout << "2. Resta"<<endl;
    cout << "3. Multiplicación"<<endl;
    cout << "4. Division"<<endl;
    cout << "Opcion: "<<endl;
    cin >> opcion;

    // permite al usuario elegir la operacion a realizar
    switch (opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicacion: " << num1 * num2 << endl;
            break;
        case 4:
            // Verificar si el divisor es cero
            if (num2 != 0) {
                cout << "Resultado de la division: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

