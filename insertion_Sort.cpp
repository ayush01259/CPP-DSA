#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void instertionSort(int arr[], int n){
    for(int i =1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]> curr){
            // while (prev<=0 && arr[prev]<curr) for descending order 
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr, n);
}

int main(){
    int arr[5] = {5,4,1,3,2};
    instertionSort(arr,5);
    return 0;
}