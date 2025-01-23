#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    //taking two extra arrays and initialising it with zero 
    vector<int> row(n,0);
    vector<int> col(n,0);
    // travelling to find zeroes and marking it 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    //again traversing to make initial array zero 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i] == 1 || col[j] == 1) matrix[i][j] = 0;
        }
    }
    //printing matrix 
    for(auto it:matrix){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}