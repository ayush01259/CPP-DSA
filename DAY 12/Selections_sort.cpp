#include<iostream>
using namespace std;

void print(int arr[], int n){
    for ( int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){

    for(int i =0; i<n; i++){
        int minIdx =i;
        for(int j= i+1; j<n; j++){
            if (arr[j]<arr[minIdx]){
                // it gives in ascending order and if we want in descending order then we have to use > instead of <
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    print(arr, n);
}

int main(){
    int arr[5] = {5,4,1,3,2};
    selectionSort(arr,5);
    return 0;
}