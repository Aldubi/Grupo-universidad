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
        cout << "\n----- MEN� PRINCIPAL -----\n";
        cout << "1. Suma, Resta, Multiplicaci�n y Divisi�n\n";
        cout << "2. Verificar si un n�mero es Par o Impar\n";
        cout << "3. Conversiones de Unidades\n";
        cout << "4. Verificar si una palabra o n�mero es Pal�ndromo\n";
        cout << "5. N�meros Ar�bigos a Romanos\n";
        cout << "6. Enteros a Letras\n";
        cout << "7. N�meros con Decimal a Letras\n";
        cout << "8. Tabla de Multiplicar\n";
        cout << "9. Tablas del 1 al 10\n";
        cout << "10. Multiplicaci�n Gr�fica Manual\n";
        cout << "11. Decimal a Binario\n";
        cout << "12. Decimal a Hexadecimal\n";
        cout << "13. Figuras Geom�tricas B�sicas\n";
        cout << "14. Mover un punto en pantalla\n";
        cout << "15. Simulaci�n de Cajero\n";
        cout << "16. Calcular Hipotenusa\n";
        cout << "17. Suma de N�meros Impares\n";
        cout << "18. Suma del Coseno\n";
        cout << "19. Longitud\n";
        cout << "20. Magnitud\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opci�n: ";
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
            default: cout << "Opci�n no v�lida\n";
        }
    } while (opcion != 0);

    return 0;
}

void sumaRestaMultiplicacionDivision() { cout << "Funci�n 1.\n"; }
void parImpar() { cout << "Funci�n 2.\n"; }
void conversionUnidades() { cout << "Funci�n 3.\n"; }
void esPalindromo() { cout << "Funci�n 4.\n"; }
void arabigoARomano() { cout << "Funci�n 5.\n"; }
void enteroALetras() { cout << "Funci�n 6.\n"; }
void decimalALetras() { cout << "Funci�n 7.\n"; }
void tablaMultiplicar() { cout << "Funci�n 8.\n"; }
void todasTablasMultiplicar() { cout << "Funci�n 9.\n"; }
void multiplicacionGrafica() { cout << "Funci�n 10.\n"; }
void decimalABinario() { cout << "Funci�n 11.\n"; }
void decimalAHexadecimal() { cout << "Funci�n 12.\n"; }
void figurasGeometricas() { cout << "Funci�n 13.\n"; }
void moverPunto() { cout << "Funci�n 14.\n"; }
void cajeroAutomatico() { cout << "Funci�n 15.\n"; }
void calcularHipotenusa() { cout << "Funci�n 16.\n"; }
void sumaImpares() { cout << "Funci�n 17.\n"; }
void sumaCoseno() { cout << "Funci�n 18.\n"; }
void longitud() { cout << "Funci�n 19.\n"; }
void magnitud() { cout << "Funci�n 20.\n"; }

