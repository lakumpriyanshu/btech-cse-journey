#include <iostream>
using namespace std;

int main()
{
    int marks[] = {32, 42, 54, 64, 76};
    int size = 5;
    int smallest = INT_MAX;
    int maximum = INT_MIN;
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
        if (marks[i] > maximum)
        {
            maximum = marks[i];
        }
        sum=sum+marks[i];
    }
    cout << "smallest value=" << smallest << endl;
    cout << "maximum value=" << maximum << endl;
    cout<<"sum of the number is ="<<sum<< endl;
    return 0;
}