#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << "Fizz\n";
        }
        if (i % 5 == 0)
        {
            cout << "Buzz\n";
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz\n";
        }
        else
        {
            cout << i<<"\n";
        }
    }
    return 0;
}