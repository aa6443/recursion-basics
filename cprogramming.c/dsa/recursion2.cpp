//recursive approach for 2^n
#include<iostream>
using namespace std;

int power(int n){
    //base condition-mandatory to use return at the end 
    if(n==0){
        return 1;
    }

    //recursive relation 
    return 2* power(n-1);
}


int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    //calling the recursive function 
    int ans = power(n);
    cout<<ans;

    return 0;
}