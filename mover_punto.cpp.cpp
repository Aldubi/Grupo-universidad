#include <iostream>
#include <conio.h> // Para _getch() en Windows
#include <windows.h> // Para system("cls")

using namespace std;

const int ANCHO = 20;
const int ALTO = 10;

void dibujarPantalla(int x, int y) {
    system("cls");
    for (int i = 0; i < ALTO; ++i) {
        for (int j = 0; j < ANCHO; ++j) {
            if (i == y && j == x) {
                cout << "O";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << "Usa WASD para mover, Q para salir\n";
}

int main() {
    int x = ANCHO / 2;
    int y = ALTO / 2;
    char input;
    
    do {
        dibujarPantalla(x, y);
        input = _getch();
        
        switch (tolower(input)) {
            case 'w': if (y > 0) y--; break;
            case 'a': if (x > 0) x--; break;
            case 's': if (y < ALTO - 1) y++; break;
            case 'd': if (x < ANCHO - 1) x++; break;
        }
    } while (tolower(input) != 'q');
    
    return 0;
}
