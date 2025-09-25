#include <iostream>
using namespace std;

int main() {
    float a, b; // Use float for decimals

    cout << "Enter number a: ";
    cin >> a;

    cout << "Enter number b: ";
    cin >> b;

    // Print the label first, then the calculation
    cout << "Addition is: " << a + b << "\n";
    cout << "Subtraction is: " << a - b << "\n";
    cout << "Division is: " << a / b << "\n";
    cout << "Multiplication is: " << a * b << "\n";

    return 0;
}