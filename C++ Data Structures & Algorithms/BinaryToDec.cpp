#include <iostream>
using namespace std;
int BinaryToDec(int binary)
{
    int ans = 0, pow = 1;
    while (binary > 0)
    {
        int rem = binary % 10;
        ans += rem * pow;
        binary /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int binary;
    cout << "Enter a Binary number:";
    cin >> binary;
    cout << "the value in decimal number is:" << BinaryToDec(binary) << endl;
    return 0;
}
