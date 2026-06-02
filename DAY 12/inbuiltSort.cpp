#include<iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int n){
    for(int i =0; i <n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[8] = {1,4,1,3,2,4,3,7};
    //sorting in ascending order
    // sort(arr, arr+8);
    // print(arr, 8);
    // cout<<endl;
    // sorting in ascending order but with particular range of index 2 to 5
    sort(arr+2, arr+5);
    print(arr, 8);
    // sorting in descending order
    sort(arr, arr+8, greater<int>());
    print(arr, 8);
    return 0;
}