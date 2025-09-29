// Write a C++ program that calculates and prints the sum of all the even numbers from 1 to a number N provided by the user.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter the value of n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "\n the sum of all the even number is :" << sum;
    return 0;
}