// Write a C++ program that calculates the factorial of a number N provided by the user.
#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;
    cout << "\n enter the value of N:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << "\n factorial of N number is:" << factorial;
    return 0;
}