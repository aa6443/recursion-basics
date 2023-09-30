//reversing an array in data structure
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;         // for total number of test cases 
    cin>>n;
    cout<<endl;
    vector<int> arr(n);       //for variable size of the array
    for(int i=0;i<n;i++)
    cin>>arr[i];                 //inserting the values of the array 

    reverse(arr.begin(),arr.end());          //reversing the array 

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}
