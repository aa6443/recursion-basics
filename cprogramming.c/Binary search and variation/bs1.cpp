#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total number of elements in array(n):";
    cin>>n;
    int arr[n];
    cout<<"enter the elements to insert in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in the array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int element;
    cout<<"\nEnter the element to be searched:";
    cin>>element;
    int start=arr[0];
    int end=arr[n-1];
    while(start<end){
        int mid= start + (int)((end-start)/2) ;
    if(element==arr[mid])
    return mid;
    else if(element<arr[mid])
    end=mid-1;
    else
    start=mid+1;
    cout<<"Element found at index:"<<element<<endl;
    }
    return -1;
    
    

    return 0;
}