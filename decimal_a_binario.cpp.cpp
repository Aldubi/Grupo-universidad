//comentario
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;
    
    stack<int> binario;
    int temp = decimal;
    
    if (temp == 0) {
        binario.push(0);
    } else {
        while (temp > 0) {
            binario.push(temp % 2);
            temp /= 2;
        }
    }
    
    cout << decimal << " en binario es: ";
    while (!binario.empty()) {
        cout << binario.top();
        binario.pop();
    }
    cout << endl;
    
    return 0;
}
