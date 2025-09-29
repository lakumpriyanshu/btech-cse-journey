// Write a C++ program to interchange two numbers.
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\n enter the value of a:";
    cin >> a;
    cout << "\n enter the value of b:";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "----AFTER SWAP----\n ";
    cout << "\n value of a: " << a;
    cout << "\n value of b:" << b;

    return 0;
}