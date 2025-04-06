#include <iostream>
#include <stack>
#include <cmath>
#include <string>
#include <cctype>
#include <vector>
#include <sstream>
#include <map>
#include <iomanip>
#include <limits> // Para cin.ignore()
#include <cstdlib> // Para system()
using namespace ;

// Declaraciones de funciones
void decimal_a_binario();std
void todas_tablas();
void tabla_multiplicar();
void sumaImpares();
void operaciones_basicas();
void sumaCoseno();
void sumaSeno();
void paroimpar();
void palindromo();
void numaletra();
void decimal_a_hexadecimal();
void multiplicacion_manual();
void mover_punto();
void figuras_geometricas();
void magnitud();
void longitud();
void decimal_a_letras();
void conversion_unidades();
void cajero_automatico();
void arabigo_a_romano();
void calcular_hipotenusa();
void mostrar_menu();
void limpiar_pantalla();

// Función para limpiar pantalla compatible con Dev-C++
void limpiar_pantalla() {
    system("cls"); // Para Windows
    // system("clear"); // Para Linux/Mac
}

// Función principal
int main() {
    mostrar_menu();
    return 0;
}

// Implementación del menú
void mostrar_menu() {
    int opcion;
    do {
        limpiar_pantalla();
        cout << "=== MENU PRINCIPAL UNIFICADO ===" << endl;
        cout << "1. Convertir decimal a binario" << endl;
        cout << "2. Mostrar todas las tablas de multiplicar" << endl;
        cout << "3. Mostrar tabla de multiplicar especifica" << endl;
        cout << "4. Suma de numeros impares en un rango" << endl;
        cout << "5. Calculadora basica" << endl;
        cout << "6. Suma de cosenos" << endl;
        cout << "7. Suma de senos" << endl;
        cout << "8. Verificar par/impar" << endl;
        cout << "9. Verificar palindromos" << endl;
        cout << "10. Convertir numero a letras (0-9999)" << endl;
        cout << "11. Decimal a hexadecimal" << endl;
        cout << "12. Multiplicacion manual paso a paso" << endl;
        cout << "13. Mover punto en pantalla" << endl;
        cout << "14. Dibujar figuras geometricas" << endl;
        cout << "15. Magnitud de vector 2D" << endl;
        cout << "16. Longitud de vector 3D" << endl;
        cout << "17. Decimal con punto a letras" << endl;
        cout << "18. Conversion de unidades" << endl;
        cout << "19. Cajero automatico" << endl;
        cout << "20. Arabigo a romano" << endl;
        cout << "21. Calcular hipotenusa" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: decimal_a_binario(); break;
            case 2: todas_tablas(); break;
            case 3: tabla_multiplicar(); break;
            case 4: sumaImpares(); break;
            case 5: operaciones_basicas(); break;
            case 6: sumaCoseno(); break;
            case 7: sumaSeno(); break;
            case 8: paroimpar(); break;
            case 9: palindromo(); break;
            case 10: numaletra(); break;
            case 11: decimal_a_hexadecimal(); break;
            case 12: multiplicacion_manual(); break;
            case 13: mover_punto(); break;
            case 14: figuras_geometricas(); break;
            case 15: magnitud(); break;
            case 16: longitud(); break;
            case 17: decimal_a_letras(); break;
            case 18: conversion_unidades(); break;
            case 19: cajero_automatico(); break;
            case 20: arabigo_a_romano(); break;
            case 21: calcular_hipotenusa(); break;
            case 0: cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opcion no valida. Intente nuevamente." << endl;
        }

        if(opcion != 0) {
            cout << "\nPresione Enter para volver al menu...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        }
    } while(opcion != 0);
}

// Implementación de funciones

void decimal_a_binario() {
    limpiar_pantalla();
    cout << "=== DECIMAL A BINARIO ===" << endl;
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;
    
    stack<int> binario;
    int temp = decimal;
    
    if(temp == 0) binario.push(0);
    while(temp > 0) {
        binario.push(temp % 2);
        temp /= 2;
    }
    
    cout << decimal << " en binario es: ";
    while(!binario.empty()) {
        cout << binario.top();
        binario.pop();
    }
    cout << endl;
}

void todas_tablas() {
    limpiar_pantalla();
    cout << "=== TABLAS DE MULTIPLICAR (1-10) ===" << endl;
    for(int i = 1; i <= 10; ++i) {
        cout << "\nTabla del " << i << ":\n";
        for(int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i*j << endl;
        }
    }
}

void tabla_multiplicar() {
    limpiar_pantalla();
    cout << "=== TABLA DE MULTIPLICAR ESPECIFICA ===" << endl;
    int numero;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    
    cout << "\nTabla de multiplicar del " << numero << ":\n";
    for(int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero*i << endl;
    }
}

void sumaImpares() {
    limpiar_pantalla();
    cout << "=== SUMA DE NUMEROS IMPARES ===" << endl;
    int inicio, fin, suma = 0;
    cout << "Ingrese el numero inicial del rango: ";
    cin >> inicio;
    cout << "Ingrese el numero final del rango: ";
    cin >> fin;

    if(inicio > fin) {
        cout << "El numero inicial no puede ser mayor que el final." << endl;
        return;
    }

    for(int i = inicio; i <= fin; i++) {
        if(i % 2 != 0) suma += i;
    }

    cout << "La suma de los numeros impares entre " << inicio 
         << " y " << fin << " es: " << suma << endl;
}

void operaciones_basicas() {
    limpiar_pantalla();
    cout << "=== CALCULADORA BASICA ===" << endl;
    double num1, num2;
    int opcion;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nOperaciones disponibles:\n";
    cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
    cout << "Seleccione una operacion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: cout << "Resultado: " << num1 + num2 << endl; break;
        case 2: cout << "Resultado: " << num1 - num2 << endl; break;
        case 3: cout << "Resultado: " << num1 * num2 << endl; break;
        case 4: 
            if(num2 != 0) cout << "Resultado: " << num1 / num2 << endl;
            else cout << "Error: Division por cero" << endl;
            break;
        default: cout << "Opcion no valida" << endl;
    }
}

void sumaCoseno() {
    limpiar_pantalla();
    cout << "=== SUMA DE COSENOS ===" << endl;
    int cantidad;
    double numero, suma = 0;
    cout << "¿Cuantos numeros deseas ingresar? ";
    cin >> cantidad;

    for(int i = 1; i <= cantidad; i++) {
        cout << "Ingresa el numero #" << i << ": ";
        cin >> numero;
        suma += cos(numero);
    }

    cout << "La suma del coseno de los numeros es: " << suma << endl;
}

void sumaSeno() {
    limpiar_pantalla();
    cout << "=== SUMA DE SENOS ===" << endl;
    double angulo1, angulo2;
    cout << "Ingrese el primer angulo (grados): ";
    cin >> angulo1;
    cout << "Ingrese el segundo angulo (grados): ";
    cin >> angulo2;

    double radianes1 = angulo1 * M_PI / 180.0;
    double radianes2 = angulo2 * M_PI / 180.0;
    double suma_senos = sin(radianes1) + sin(radianes2);

    cout << "La suma de los senos es: " << suma_senos << endl;
}

void paroimpar() {
    limpiar_pantalla();
    cout << "=== PAR O IMPAR ===" << endl;
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero % 2 == 0) cout << "El numero " << numero << " es par." << endl;
    else cout << "El numero " << numero << " es impar." << endl;
}

void palindromo() {
    limpiar_pantalla();
    cout << "=== VERIFICADOR DE PALINDROMOS ===" << endl;
    int opcion;
    cout << "Seleccione la opcion: " << endl;
    cout << "1. Verificar si una palabra es un palindromo" << endl;
    cout << "2. Verificar si un numero es un palindromo" << endl;
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        string palabra;
        cout << "Ingrese una palabra: ";
        cin >> palabra;

        bool esPalindromo = true;
        int inicio = 0;
        int fin = palabra.length() - 1;
        
        while (inicio < fin) {
            if (tolower(palabra[inicio]) != tolower(palabra[fin])) {
                esPalindromo = false;
                break;
            }
            inicio++;
            fin--;
        }

        if (esPalindromo) {
            cout << "La palabra '" << palabra << "' es un palindromo." << endl;
        } else {
            cout << "La palabra '" << palabra << "' no es un palindromo." << endl;
        }
    } else if (opcion == 2) {
        int numero, original, invertido = 0, digito;
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        original = numero;
        
        while (numero > 0) {
            digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero /= 10;
        }
        
        if (original == invertido) {
            cout << "El numero " << original << " es un palindromo." << endl;
        } else {
            cout << "El numero " << original << " no es un palindromo." << endl;
        }
    } else {
        cout << "Opcion no valida. Intente de nuevo." << endl;
    }
}

void numaletra() {
    limpiar_pantalla();
    cout << "=== CONVERSION DE NUMERO A LETRAS (0-9999) ===" << endl;
    
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", 
                          "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", 
                       "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", 
                        "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    int numero;
    cout << "Ingrese un numero entre 0 y 9999: ";
    cin >> numero;
    
    if (numero < 0 || numero > 9999) {
        cout << "Numero fuera de rango." << endl;
        return;
    }
    
    if (numero == 0) {
        cout << "cero" << endl;
        return;
    }
    
    string resultado;
    int millares = numero / 1000;
    int resto = numero % 1000;
    
    if (millares > 0) {
        if (millares == 1) {
            resultado += "mil ";
        } else {
            resultado += unidades[millares] + " mil ";
        }
    }
    
    int centena = resto / 100;
    resto = resto % 100;
    
    if (centena > 0) {
        if (centena == 1 && resto == 0) {
            resultado += "cien ";
        } else {
            resultado += centenas[centena] + " ";
        }
    }
    
    if (resto >= 10 && resto <= 19) {
        resultado += especiales[resto - 10] + " ";
    } else {
        int decena = resto / 10;
        int unidad = resto % 10;
        
        if (decena > 1) {
            resultado += decenas[decena];
            if (unidad > 0) {
                resultado += " y " + unidades[unidad];
            }
            resultado += " ";
        } else if (unidad > 0) {
            resultado += unidades[unidad] + " ";
        }
    }
    
    cout << "El numero " << numero << " en letras es: " << resultado << endl;
}

void decimal_a_hexadecimal() {
    limpiar_pantalla();
    cout << "=== DECIMAL A HEXADECIMAL ===" << endl;
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;
    
    stack<char> hexadecimal;
    int temp = decimal;
    const char hexDigits[] = "0123456789ABCDEF";
    
    if(temp == 0) hexadecimal.push('0');
    while(temp > 0) {
        hexadecimal.push(hexDigits[temp % 16]);
        temp /= 16;
    }
    
    cout << decimal << " en hexadecimal es: 0x";
    while(!hexadecimal.empty()) {
        cout << hexadecimal.top();
        hexadecimal.pop();
    }
    cout << endl;
}

void multiplicacion_manual() {
    limpiar_pantalla();
    cout << "=== MULTIPLICACION MANUAL PASO A PASO ===" << endl;
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "\n  " << num1 << endl;
    cout << "x " << num2 << endl;
    cout << "-----" << endl;
    
    int temp = num2, pos = 0, total = 0;
    while (temp > 0) {
        int digito = temp % 10;
        int parcial = num1 * digito;
        cout << " " << parcial << string(pos, ' ') << endl;
        total += parcial * pow(10, pos);
        temp /= 10;
        pos++;
    }
    
    cout << "-----" << endl;
    cout << " " << total << endl;
}

void mover_punto() {
    limpiar_pantalla();
    cout << "=== MOVER PUNTO EN PANTALLA ===" << endl;
    const int ANCHO = 20;
    const int ALTO = 10;
    int x = ANCHO / 2, y = ALTO / 2;
    char input;
    
    do {
        limpiar_pantalla();
        for (int i = 0; i < ALTO; ++i) {
            for (int j = 0; j < ANCHO; ++j) {
                if (i == y && j == x) cout << "O";
                else cout << ".";
            }
            cout << endl;
        }
        cout << "Usa WASD para mover, Q para salir\n";
        
        input = tolower(getchar());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        switch(input) {
            case 'w': if (y > 0) y--; break;
            case 'a': if (x > 0) x--; break;
            case 's': if (y < ALTO-1) y++; break;
            case 'd': if (x < ANCHO-1) x++; break;
        }
    } while(input != 'q');
}

void figuras_geometricas() {
    limpiar_pantalla();
    cout << "=== FIGURAS GEOMETRICAS ===" << endl;
    int opcion;
    cout << "Seleccione una figura:\n1. Triangulo\n2. Cuadrado\n3. Rectangulo\nOpcion: ";
    cin >> opcion;
    
    switch(opcion) {
        case 1: {
            int altura;
            cout << "Altura del triangulo: ";
            cin >> altura;
            for(int i = 1; i <= altura; ++i) {
                cout << string(i, '*') << endl;
            }
            break;
        }
        case 2: {
            int lado;
            cout << "Lado del cuadrado: ";
            cin >> lado;
            for(int i = 0; i < lado; ++i) {
                cout << string(lado, '*') << endl;
            }
            break;
        }
        case 3: {
            int ancho, alto;
            cout << "Ancho del rectangulo: ";
            cin >> ancho;
            cout << "Alto del rectangulo: ";
            cin >> alto;
            for(int i = 0; i < alto; ++i) {
                cout << string(ancho, '*') << endl;
            }
            break;
        }
        default: cout << "Opcion no valida" << endl;
    }
}

void magnitud() {
    limpiar_pantalla();
    cout << "=== MAGNITUD DE VECTOR 2D ===" << endl;
    double x, y;
    cout << "Componente x: ";
    cin >> x;
    cout << "Componente y: ";
    cin >> y;
    cout << "Magnitud: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
}

void longitud() {
    limpiar_pantalla();
    cout << "=== LONGITUD DE VECTOR 3D ===" << endl;
    double x, y, z;
    cout << "Componente x: ";
    cin >> x;
    cout << "Componente y: ";
    cin >> y;
    cout << "Componente z: ";
    cin >> z;
    cout << "Longitud: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
}

void decimal_a_letras() {
    limpiar_pantalla();
    cout << "=== DECIMAL CON PUNTO A LETRAS ===" << endl;
    
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", 
                          "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", 
                       "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", 
                        "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    double numero;
    cout << "Ingrese un numero con decimales: ";
    cin >> numero;
    
    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100);
    
    if (parte_entera < 0 || parte_entera > 9999) {
        cout << "Numero fuera de rango (0-9999.99)." << endl;
        return;
    }
    
    string resultado;
    
    // Convertir parte entera
    if (parte_entera == 0) {
        resultado = "cero";
    } else {
        int millares = parte_entera / 1000;
        int resto = parte_entera % 1000;
        
        if (millares > 0) {
            if (millares == 1) {
                resultado += "mil ";
            } else {
                resultado += unidades[millares] + " mil ";
            }
        }
        
        int centena = resto / 100;
        resto = resto % 100;
        
        if (centena > 0) {
            if (centena == 1 && resto == 0) {
                resultado += "cien ";
            } else {
                resultado += centenas[centena] + " ";
            }
        }
        
        if (resto >= 10 && resto <= 19) {
            resultado += especiales[resto - 10] + " ";
        } else {
            int decena = resto / 10;
            int unidad = resto % 10;
            
            if (decena > 1) {
                resultado += decenas[decena];
                if (unidad > 0) {
                    resultado += " y " + unidades[unidad];
                }
                resultado += " ";
            } else if (unidad > 0) {
                resultado += unidades[unidad] + " ";
            }
        }
    }
    
    // Convertir parte decimal
    if (parte_decimal > 0) {
        resultado += "punto ";
        
        if (parte_decimal < 10) {
            resultado += unidades[parte_decimal];
        } else if (parte_decimal >= 10 && parte_decimal <= 19) {
            resultado += especiales[parte_decimal - 10];
        } else {
            int decena = parte_decimal / 10;
            int unidad = parte_decimal % 10;
            
            if (decena > 1) {
                resultado += decenas[decena];
                if (unidad > 0) {
                    resultado += " y " + unidades[unidad];
                }
            } else if (unidad > 0) {
                resultado += unidades[unidad];
            }
        }
    }
    
    cout << "El numero " << numero << " en letras es: " << resultado << endl;
}

void conversion_unidades() {
    limpiar_pantalla();
    cout << "=== CONVERSION DE UNIDADES ===" << endl;
    int opcion;
    double cantidad;

    cout << "Seleccione la conversion:" << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Metros a Pulgadas" << endl;
    cout << "3. Libras a Kilos" << endl;
    cout << "4. Millas a Kilometros" << endl;
    cout << "5. Pulgadas a Metros" << endl;
    cout << "6. Kilos a Libras" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Kilometros: ";
            cin >> cantidad;
            cout << cantidad << " km = " << cantidad * 0.621371 << " millas" << endl;
            break;
        case 2:
            cout << "Metros: ";
            cin >> cantidad;
            cout << cantidad << " m = " << cantidad * 39.3701 << " pulgadas" << endl;
            break;
        case 3:
            cout << "Libras: ";
            cin >> cantidad;
            cout << cantidad << " lb = " << cantidad * 0.453592 << " kg" << endl;
            break;
        case 4:
            cout << "Millas: ";
            cin >> cantidad;
            cout << cantidad << " millas = " << cantidad * 1.60934 << " km" << endl;
            break;
        case 5:
            cout << "Pulgadas: ";
            cin >> cantidad;
            cout << cantidad << " pulg = " << cantidad * 0.0254 << " m" << endl;
            break;
        case 6:
            cout << "Kilos: ";
            cin >> cantidad;
            cout << cantidad << " kg = " << cantidad * 2.20462 << " lb" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
}

void cajero_automatico() {
    limpiar_pantalla();
    cout << "=== CAJERO AUTOMATICO ===" << endl;
    
    const int PIN_CORRECTO = 1234;
    double saldo = 1000.0;
    int pin;
    
    cout << "Ingrese su PIN: ";
    cin >> pin;
    
    if(pin != PIN_CORRECTO) {
        cout << "PIN incorrecto. Acceso denegado." << endl;
        return;
    }
    
    int opcion;
    do {
        limpiar_pantalla();
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Depositar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2: {
                double cantidad;
                cout << "Cantidad a retirar: $";
                cin >> cantidad;
                if(cantidad > saldo) {
                    cout << "Fondos insuficientes" << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                }
                break;
            }
            case 3: {
                double cantidad;
                cout << "Cantidad a depositar: $";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                break;
            }
            case 4:
                cout << "Gracias por usar el cajero" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
        
        if(opcion != 4) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        }
    } while(opcion != 4);
}

void arabigo_a_romano() {
    limpiar_pantalla();
    cout << "=== CONVERSION ARABIGO A ROMANO ===" << endl;
    int numero;
    cout << "Ingrese un numero (1-3999): ";
    cin >> numero;
    
    if(numero < 1 || numero > 3999) {
        cout << "Numero fuera de rango" << endl;
        return;
    }
    
    string valores[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int numeros[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romano = "";
    
    for(int i = 0; i < 13; i++) {
        while(numero >= numeros[i]) {
            romano += valores[i];
            numero -= numeros[i];
        }
    }
    
    cout << "Numero romano: " << romano << endl;
}

void calcular_hipotenusa() {
    limpiar_pantalla();
    cout << "=== CALCULO DE HIPOTENUSA ===" << endl;
    double a, b;
    cout << "Cateto a: ";
    cin >> a;
    cout << "Cateto b: ";
    cin >> b;
    
    double c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hipotenusa = " << c << endl;
}
