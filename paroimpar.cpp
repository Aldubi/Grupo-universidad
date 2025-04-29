#include <iostream>
using namespace std;

int main() {
    int numero;

    // solicitar el carnet
    cout << "Ingrese los ultimos 2 digitos de tu carnet: "<<endl;
    cin >> numero;

    // Verificar si los ultimos 2 digitos del carnet es par o impar
    if (numero % 2 == 0) {
        cout << "tu numero de carnet " << numero << " es par." << endl;
    } else {
        cout << "tu numero de carnet " << numero << " es impar." << endl;
    }

    return 0;
}

