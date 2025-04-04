#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void sumaRestaMultiplicacionDivision();
void parImpar();
void conversionUnidades();
void esPalindromo();
void arabigoARomano();
void enteroALetras();
void decimalALetras();
void tablaMultiplicar();
void todasTablasMultiplicar();
void multiplicacionGrafica();
void decimalABinario();
void decimalAHexadecimal();
void figurasGeometricas();
void moverPunto();
void cajeroAutomatico();
void calcularHipotenusa();
void sumaImpares();
void sumaCoseno();
void longitud();
void magnitud();

int main() {
    int opcion;
    do {
        cout << "\n----- MENÚ PRINCIPAL -----\n";
        cout << "1. Suma, Resta, Multiplicación y División\n";
        cout << "2. Verificar si un número es Par o Impar\n";
        cout << "3. Conversiones de Unidades\n";
        cout << "4. Verificar si una palabra o número es Palíndromo\n";
        cout << "5. Números Arábigos a Romanos\n";
        cout << "6. Enteros a Letras\n";
        cout << "7. Números con Decimal a Letras\n";
        cout << "8. Tabla de Multiplicar\n";
        cout << "9. Tablas del 1 al 10\n";
        cout << "10. Multiplicación Gráfica Manual\n";
        cout << "11. Decimal a Binario\n";
        cout << "12. Decimal a Hexadecimal\n";
        cout << "13. Figuras Geométricas Básicas\n";
        cout << "14. Mover un punto en pantalla\n";
        cout << "15. Simulación de Cajero\n";
        cout << "16. Calcular Hipotenusa\n";
        cout << "17. Suma de Números Impares\n";
        cout << "18. Suma del Coseno\n";
        cout << "19. Longitud\n";
        cout << "20. Magnitud\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: sumaRestaMultiplicacionDivision(); break;
            case 2: parImpar(); break;
            case 3: conversionUnidades(); break;
            case 4: esPalindromo(); break;
            case 5: arabigoARomano(); break;
            case 6: enteroALetras(); break;
            case 7: decimalALetras(); break;
            case 8: tablaMultiplicar(); break;
            case 9: todasTablasMultiplicar(); break;
            case 10: multiplicacionGrafica(); break;
            case 11: decimalABinario(); break;
            case 12: decimalAHexadecimal(); break;
            case 13: figurasGeometricas(); break;
            case 14: moverPunto(); break;
            case 15: cajeroAutomatico(); break;
            case 16: calcularHipotenusa(); break;
            case 17: sumaImpares(); break;
            case 18: sumaCoseno(); break;
            case 19: longitud(); break;
            case 20: magnitud(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opción no válida\n";
        }
    } while (opcion != 0);

    return 0;
}

void sumaRestaMultiplicacionDivision() { cout << "Función 1.\n"; }
void parImpar() { cout << "Función 2.\n"; }
void conversionUnidades() { cout << "Función 3.\n"; }
void esPalindromo() { cout << "Función 4.\n"; }
void arabigoARomano() { cout << "Función 5.\n"; }
void enteroALetras() { cout << "Función 6.\n"; }
void decimalALetras() { cout << "Función 7.\n"; }
void tablaMultiplicar() { cout << "Función 8.\n"; }
void todasTablasMultiplicar() { cout << "Función 9.\n"; }
void multiplicacionGrafica() { cout << "Función 10.\n"; }
void decimalABinario() { cout << "Función 11.\n"; }
void decimalAHexadecimal() { cout << "Función 12.\n"; }
void figurasGeometricas() { cout << "Función 13.\n"; }
void moverPunto() { cout << "Función 14.\n"; }
void cajeroAutomatico() { cout << "Función 15.\n"; }
void calcularHipotenusa() { cout << "Función 16.\n"; }
void sumaImpares() { cout << "Función 17.\n"; }
void sumaCoseno() { cout << "Función 18.\n"; }
void longitud() { cout << "Función 19.\n"; }
void magnitud() { cout << "Función 20.\n"; }

