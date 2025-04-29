#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Para manejo de archivos
#include <sstream> // Para parsear líneas y palabras
#include <limits>  // Para limpiar el buffer de entrada
#include <cctype>  // Para isalnum

using namespace std;

// Estructura para almacenar la información de cada palabra (compartida)
struct PalabraInfo {
    string palabra;
    string traduccion;
    string funcionalidad; // Aunque el traductor no la usa directamente
};

// --- Prototipos de Funciones Compartidas ---
void cargarDatos(vector<PalabraInfo>& diccionario, const string& nombreArchivo);
void guardarDatos(const vector<PalabraInfo>& diccionario, const string& nombreArchivo);
int buscarIndicePalabra(const vector<PalabraInfo>& diccionario, const string& palabraBuscar);
string traducirPalabra(const string& palabraOriginal, const vector<PalabraInfo>& diccionario);

// --- Prototipos de Funciones del Gestor de Diccionario ---
void gestionarDiccionario(vector<PalabraInfo>& diccionario);
void agregarPalabra(vector<PalabraInfo>& diccionario);
void mostrarPalabras(const vector<PalabraInfo>& diccionario);
void actualizarPalabra(vector<PalabraInfo>& diccionario);
void eliminarPalabra(vector<PalabraInfo>& diccionario);

// --- Prototipos de Funciones del Traductor ---
void traducirCodigo(const vector<PalabraInfo>& diccionario);

// --- Nombre del archivo (compartido) ---
const string NOMBRE_ARCHIVO = "palabras_cpp.txt";

int main() {
    vector<PalabraInfo> diccionario;
    cargarDatos(diccionario, NOMBRE_ARCHIVO); // Carga datos al iniciar para ambos módulos

    int opcionPrincipal;

    do {
        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Gestionar Diccionario (Agregar/Ver/Editar/Borrar Palabras)" << endl;
        cout << "2. Traducir Codigo C++ (usando diccionario)" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";

        while (!(cin >> opcionPrincipal)) {
            cout << "Entrada invalida. Por favor ingrese un numero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcionPrincipal) {
            case 1:
                gestionarDiccionario(diccionario);
                break;
            case 2:
                traducirCodigo(diccionario);
                break;
            case 3:
                guardarDatos(diccionario, NOMBRE_ARCHIVO);
                cout << "Datos guardados. Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcionPrincipal != 3);

    return 0;
}

// --- Implementación de Funciones Compartidas ---

void cargarDatos(vector<PalabraInfo>& diccionario, const string& nombreArchivo) {
    ifstream archivoEntrada(nombreArchivo);
    string linea;
    PalabraInfo temp;
    bool archivoAbierto = false;

    diccionario.clear();

    if (archivoEntrada.is_open()) {
        archivoAbierto = true;
        while (getline(archivoEntrada, linea)) {
            stringstream ss(linea);
            if (getline(ss, temp.palabra, ',') &&
                getline(ss, temp.traduccion, ',') &&
                getline(ss, temp.funcionalidad))
            {
                diccionario.push_back(temp);
            } else {
                 if (!linea.empty()) { // No mostrar advertencia para líneas vacías en el archivo
                    cerr << "Advertencia: Linea ignorada en '" << nombreArchivo << "' por formato incorrecto: " << linea << endl;
                 }
            }
        }
        archivoEntrada.close();
    } else {
         cout << "Advertencia: No se pudo abrir el archivo '" << nombreArchivo << "' para cargar." << endl;
         cout << "El diccionario estara vacio inicialmente. Use la opcion 1 para agregar palabras." << endl;
    }

    if (archivoAbierto && diccionario.empty() && !archivoEntrada.eof() && archivoEntrada.fail() && !archivoEntrada.bad()) {
        // Si se abrió pero está vacío (y no es por error de lectura)
         cout << "Archivo '" << nombreArchivo << "' encontrado pero esta vacio." << endl;
    } else if (archivoAbierto) {

