#include <iostream>
#include <cmath> // Necesario para la función pow
#include <string> // Necesario para usar string
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "\n  " << num1 << endl;
    cout << "x " << num2 << endl;
    cout << "-----" << endl;
    
    int temp = num2;
    int pos = 0;
    int total = 0;
    
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
    
    return 0;
}