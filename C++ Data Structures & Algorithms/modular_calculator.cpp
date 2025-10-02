#include <iostream>
using namespace std;

float sum(float a, float b)
{
    return (a + b) ;
}
float sub(float a, float b)
{
    return (a - b);
}
float mul(float a, float b)
{
    return (a * b);
}
float div(float a, float b)
{
    return (a / b);
}

int main()
{
    float a, b;
    cout << "enter the value of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;
    cout << "\n addition:"<< sum(a,b);
    cout << "\n subtraction:"<< sub(a,b);
    cout << "\n multiplication:"<< mul(a,b);
    cout << "\n division:"<< div(a,b);
    return 0;
}