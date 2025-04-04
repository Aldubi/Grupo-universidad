void sumaImpares() {
    int inicio, fin, suma = 0;

    cout << "Ingrese el n�mero inicial del rango: ";
    cin >> inicio;
    cout << "Ingrese el n�mero final del rango: ";
    cin >> fin;

    if (inicio > fin) {
        cout << "El n�mero inicial no puede ser mayor que el final." << endl;
        return;
    }

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }

    cout << "La suma de los n�meros impares entre " << inicio << " y " << fin << " es: " << suma << endl;
}

