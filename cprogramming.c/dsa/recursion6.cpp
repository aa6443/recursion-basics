#include<iostream>
using namespace std;

int isSorted(int arr[],int n){

    //base case
    if(n==0 or n==1){
        return true ;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    //recursive call 
    else{
        bool ans=isSorted(arr+1,n-1);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    if(isSorted(arr,n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    
    return 0;
}