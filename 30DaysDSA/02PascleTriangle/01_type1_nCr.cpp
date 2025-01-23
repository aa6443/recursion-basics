#include <bits/stdc++.h>
using namespace std;

int factorialFinder(int n,int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}

int main(){

    int n,r;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter value of r : ";
    cin>>r;
    cout<<factorialFinder(n,r)<<endl;

    return 0;
}

/*
    TC => O(r)
    SC => O(1)

*/