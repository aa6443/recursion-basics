#include<iostream>
using namespace std;
void reachHome(int src,int dest){
    //printing the values 
    cout<<"src: "<<src<<" dest: "<<dest<<endl;
    //base case 
    if(src==dest){
        cout<<"Pahuch gye ghar "<<endl;
        return ;
    }

    // /processing
    
    //recursive call
    // reachHome(src++,dest); Not to use this because 
    // src++ is post increment operator -it increments the value but returns the original value 

    // reachHome(++src,dest); //this is correct because ++src is pre increment operator -it increments the value and returns the incremented value
    reachHome(++src,dest);
}
int main(){
    int src=1;
    int dest=10;
    reachHome(src,dest);
    return 0;
}