// print the numbers in descending order using recursion 
#include<iostream>
using namespace std;

int count(int n){
    //base condition
    if(n==0){
        return 0;
    }

    //processing 
    cout<<n<<endl;

    //recursive relation 
    int Problem=count(n-1);
    return Problem;
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans = count(n);
    return ans;
}