#include<iostream>
using namespace  std;

int DecToBinary(int Dec){
   int ans=0 ,pow=1;
    while (Dec>0)
    {
        int rem=Dec%2;
        Dec=Dec/2;
        
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int Dec;
    cout<<"Enter a decimal number:";
    cin>>Dec;

    cout<<"The binary equivalent is:"<< DecToBinary(Dec)<<endl;
    return 0;
}