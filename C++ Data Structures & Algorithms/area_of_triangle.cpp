// Write a program to find area of triangle(a=h*b*.5)a = area h = height b = base
#include<iostream>
using namespace std;

int main(){
    float a,h,b;
    cout<<"\n enter the value of height: ";
    cin>>h;
    cout<<"\n enter the value of breadth: ";
    cin>>b;
    a=h*b*0.5;
    cout<<"\n the area of triangle is: " <<a;
    return 0;
}