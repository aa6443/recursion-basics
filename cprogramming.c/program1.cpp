#include <iostream>
using namespace std;

int main(){

    int n,key;
    cout<<"enter the total number of element :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<arr[i]<<"item is present in the array"<<endl;
            cout<<"the array index is "<<i<<endl;
        }
    }
    return 0;
}