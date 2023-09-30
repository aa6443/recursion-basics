#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<endl;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //reversing array
    reverse(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}