#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case -mandatory 
    if(n==0)
    return 1;
    
    //recurrence relation 
    return n*factorial(n-1);
    
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
    return 0;

}