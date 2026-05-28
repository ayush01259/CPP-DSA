#include<iostream>
using namespace std;

void print(int arr[], int n){
    for ( int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        for (int j =0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                // if its in > then its ascending order and if its in < then its in descending order
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print(arr, n);
}

int main(){
    int arr[5] = {4,5,1,2,3};
    bubblesort(arr, 5);
    return 0;
}