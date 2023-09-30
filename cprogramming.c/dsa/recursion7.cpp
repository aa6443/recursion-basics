#include <iostream>
using namespace std;

int Sum(int *arr,int n){

    //base case 
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    //recursive relation 
    int remainingPart = Sum(arr+1,n-1);
    return arr[0] + remainingPart;
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum of array is :"<<Sum(arr,5);
    return 0;
}