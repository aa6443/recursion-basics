#include <iostream>
using namespace std;

void print_array(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done "<<endl;
}
int main(){

    int number[10]={0};
    int n=10;
    print_array(number,n);

    int pokemon[20]={1,2,3,4};
    int k=20;
    print_array(pokemon,k);

}