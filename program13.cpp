// Program to to find whether the number is positive,Negative or odd
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>0)
        cout<<"The number is positive";
    else if(n<0)
        cout<<"The number is negative";
    else
        cout<<"The number is zero";
    return 0;
}