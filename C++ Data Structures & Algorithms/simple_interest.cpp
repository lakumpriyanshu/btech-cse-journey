//  Write a program to calculate simple interest (i = (p*r*n)/100 )i = Simple interest
//      p = Principal amount r = Rate of interest n = Number of years
#include <iostream>
using namespace std;
int main()
{
    int p, r, n, i;
    cout << "\n enter the value of principal amount:";
    cin >> p;
    cout << "\n enter the value of rate of interest:";
    cin >> r;
    cout << "\n enter the value of number of years:";
    cin >> n;
    i = (p * r * n) / 100;
    cout << "\n simple interrest is:"<<i;

    return 0;
}