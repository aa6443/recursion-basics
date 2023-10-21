//factorial of a number using recursion
#include <bits/stdc++.h>

using namespace std;
int factorial(int n){
    //base case - return statement is mandatory 
    if(n==0){
        return 1;
    }
    
    //recurrence relation - return statement is mandatory 
    return n *factorial(n-1) ;
}
int main()
{
    int n;
    cin>>n;
    int ans = factorial(n);     //calling the recurrence function 
    cout<<ans;
    return 0;
}
