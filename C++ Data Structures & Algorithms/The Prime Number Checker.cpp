// Write a C++ program that asks the user for a positive integer and determines if it is a prime number.
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << n << " is a prime number.\n";
    }
    else
    {
        cout << n << " is not a prime number.\n";
    }
    if (isPrime)
    {
        cout << n << " is a prime number.\n";
    }
    else
    {
        cout << n << " is not a prime number.\n";
    }

    return 0;
}
