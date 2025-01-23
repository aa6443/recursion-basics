#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix {{1,1,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    int col0 = 1;
    //marking zeroes 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j!= 0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }

    //lower matrix traversal 
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0 ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
     //checking in the row 0 matrix 
     if(col0 == 0){
        for(int j=1;j<n;j++){
            matrix[0][j] = 0;
        }
     }
     //checking the first col element 
     if(matrix[0][0] == 0 ){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
     }
     //printing the array 
     for(auto it:matrix){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}