#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;
    
    stack<char> hexadecimal;
    int temp = decimal;
    const char hexDigits[] = "0123456789ABCDEF";
    
    if (temp == 0) {
        hexadecimal.push('0');
    } else {
        while (temp > 0) {
            hexadecimal.push(hexDigits[temp % 16]);
            temp /= 16;
        }
    }
    
    cout << decimal << " en hexadecimal es: 0x";
    while (!hexadecimal.empty()) {
        cout << hexadecimal.top();
        hexadecimal.pop();
    }
    cout << endl;
    
    return 0;
}