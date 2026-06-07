#include<iostream>
using namespace std;

int diagonalSum(int mat[][3], int n){

    int sum = 0;

    //its time complexity is 0(N^2)
    // for(int i = 0; i<n; i++){// for rows
    //     for(int j=0; j<n; j++){ // for columns
    //         if(i == j){
    //             sum+=mat[i][j]; // primary diagonal 
    //         }else if(j == n-i-1){
    //             su{m+= mat[i][j]; // secondary diagonal using else if here because it would never recheck again 
    //         }

    //     }
    // } 

    // for 0(N) time complexity
    for(int i = 0; i<n; i++){
        sum+=mat[i][i]; // primary diagonal
        if(i != n-i-1){ 
            sum+=mat[i][n-i-1]; // secondary diagonal
        }
    }
    cout << "sum = "<< sum << endl;
    return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix2[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    diagonalSum(matrix2,3);

    return 0;
}