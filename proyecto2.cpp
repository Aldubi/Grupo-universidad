#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Palabra {
    string cpp;
    string traduccion;
    string funcionalidad;
};

const string ARCHIVO = "diccionario_cpp.txt";

// ================= FUNCIONES AUXILIARES =================

vector<Palabra> cargarDiccionario() {
    vector<Palabra> diccionario;
    ifstream archivo(ARCHIVO.c_str());
    string linea;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string cpp, traduccion, funcionalidad;

        getline(ss, cpp, '|');
        getline(ss, traduccion, '|');
        getline(ss, funcionalidad);

        if (!cpp.empty()) {
            Palabra p;
            p.cpp = cpp;
            p.traduccion = traduccion;
            p.funcionalidad = funcionalidad;
            diccionario.push_back(p);
        }
    }

    return diccionario;
}

void guardarDiccionario(const vector<Palabra>& diccionario) {
    ofstream archivo(ARCHIVO.c_str());
    for (size_t i = 0; i < diccionario.size(); ++i) {
        archivo << diccionario[i].cpp << "|" << diccionario[i].traduccion << "|" << diccionario[i].funcionalidad << endl;
    }
}

// ================= CRUD =================

void agregarPalabra() {
    string cpp, traduccion, funcionalidad;

    cout << "Ingrese Palabra en C++: ";
    getline(cin, cpp);
    cout << "Ingrese Traducción: ";
    getline(cin, traduccion);
    cout << "Ingrese Funcionalidad: ";
    getline(cin, funcionalidad);

    ofstream archivo(ARCHIVO.c_str(), ios::app);
    archivo << cpp << "|" << traduccion << "|" << funcionalidad << endl;

    cout << "? Palabra agregada correctamente.\n";
}

void leerDiccionario() {
    vector<Palabra> diccionario = cargarDiccionario();
    cout << "\n=== LISTA DE PALABRAS ===\n";
    for (size_t i = 0; i < diccionario.size(); ++i) {
        cout << diccionario[i].cpp << " ? " << diccionario[i].traduccion << " | " << diccionario[i].funcionalidad << endl;
    }
}

void actualizarPalabra() {
    vector<Palabra> diccionario = cargarDiccionario();
    string buscar;
    cout << "Ingrese la palabra a actualizar: ";
    getline(cin, buscar);

    bool encontrado = false;
    for (size_t i = 0; i < diccionario.size(); ++i) {
        if (diccionario[i].cpp == buscar) {
            cout << "Nueva Traducción: ";
            getline(cin, diccionario[i].traduccion);
            cout << "Nueva Funcionalidad: ";
            getline(cin, diccionario[i].funcionalidad);
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        guardarDiccionario(diccionario);
        cout << "? Palabra actualizada.\n";
    } else {
        cout << "? Palabra no encontrada.\n";
    }
}

void eliminarPalabra() {
    vector<Palabra> diccionario = cargarDiccionario();
    string buscar;
    cout << "Ingrese la palabra a eliminar: ";
    getline(cin, buscar);

    bool eliminado = false;
    for (vector<Palabra>::iterator it = diccionario.begin(); it != diccionario.end(); ++it) {
        if (it->cpp == buscar) {
            diccionario.erase(it);
            eliminado = true;
            break;
        }
    }

    if (eliminado) {
        guardarDiccionario(diccionario);
        cout << "? Palabra eliminada.\n";
    } else {
        cout << "? Palabra no encontrada.\n";
    }
}

// ================= TRADUCTOR =================

string traducirLinea(string linea, const vector<Palabra>& diccionario, string& estructuraActual) {
    string resultado = linea;

    for (size_t i = 0; i < diccionario.size(); ++i) {
        size_t pos = resultado.find(diccionario[i].cpp);
        while (pos != string::npos) {
            resultado.replace(pos, diccionario[i].cpp.length(), diccionario[i].traduccion);
            pos = resultado.find(diccionario[i].cpp, pos + diccionario[i].traduccion.length());
        }
    }

    if (resultado.find("{") != string::npos) {
        if (resultado.find("si") != string::npos) {
            estructuraActual = "si";
            return resultado.substr(0, resultado.find("{")) + " inicio si";
        }
        if (resultado.find("mientras") != string::npos) {
            estructuraActual = "mientras";
            return resultado.substr(0, resultado.find("{")) + " inicio mientras";
        }
        if (resultado.find("para") != string::npos) {
            estructuraActual = "para";
            return resultado.substr(0, resultado.find("{")) + " inicio para";
        }
        if (resultado.find("entonces") != string::npos || resultado.find("sino") != string::npos) {
            estructuraActual = "entonces";
            return resultado.substr(0, resultado.find("{")) + " inicio entonces";
        }
        return resultado.substr(0, resultado.find("{")) + " inicio función";
    }

    if (resultado.find("}") != string::npos && !estructuraActual.empty()) {
        string temp = "fin " + estructuraActual;
        estructuraActual = "";
        return temp;
    }

    return resultado;
}

void traducirCodigo() {
    vector<Palabra> diccionario = cargarDiccionario();
    string linea, estructuraActual;

    cout << "\nPega el código C++ (termina con una línea vacía):\n";
    while (true) {
        getline(cin, linea);
        if (linea.empty()) break;

        string traducida = traducirLinea(linea, diccionario, estructuraActual);
        cout << traducida << endl;
    }
}

// ================= MENÚ =================

void menuCRUD() {
    while (true) {
        cout << "\n=== CRUD DEL DICCIONARIO ===\n";
        cout << "1. Agregar palabra\n";
        cout << "2. Leer palabras\n";
        cout << "3. Actualizar palabra\n";
        cout << "4. Eliminar palabra\n";
        cout << "5. Volver al menú principal\n";
        cout << "Seleccione una opción: ";
        string opcion;
        getline(cin, opcion);

        if (opcion == "1") agregarPalabra();
        else if (opcion == "2") leerDiccionario();
        else if (opcion == "3") actualizarPalabra();
        else if (opcion == "4") eliminarPalabra();
        else if (opcion == "5") break;
        else cout << "? Opción inválida.\n";
    }
}

int main() {
    while (true) {
        cout << "\n==============================\n";
        cout << "???  TRADUCTOR DE C++ A ESPAÑOL\n";
        cout << "==============================\n";
        cout << "1. Administrar diccionario (CRUD)\n";
        cout << "2. Traducir código C++\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        string opcion;
        getline(cin, opcion);

        if (opcion == "1") menuCRUD();
        else if (opcion == "2") traducirCodigo();
        else if (opcion == "3") {
            cout << "?? ¡Hasta luego!\n";
            break;
        } else {
            cout << "? Opción inválida.\n";
        }
    }

    return 0;
}

