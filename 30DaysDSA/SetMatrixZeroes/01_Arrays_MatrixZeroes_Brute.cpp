#include <bits/stdc++.h>
using namespace std;
void markRow(int i,int n,int m,vector<vector<int>>& matrix){
    for(int j=0;j<m;j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
void markCol(int j,int n,int m,vector<vector<int>>& matrix){
    for(int i=0;i<n;i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> matrixZeroes(int n,int m,vector<vector<int>>& matrix){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0 ){
                markRow(i,n,m,matrix);
                markCol(j,n,m,matrix);
            }
        }
    }
    //now marking back all the -1 with zeroes 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = matrixZeroes(n,m,matrix);
    cout<<"the Initial matrix is \n";
    for(auto it: ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    cout<<"The zero matrix is \n";
    for(auto it: ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }

    return 0;
}