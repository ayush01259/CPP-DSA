#include<iostream>
#include<vector>
using namespace std;
int firstoccur(vector<int> arr, int i , int target){
    if(i == arr.size()){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return firstoccur(arr, i+1, target);
}
int lastoccur(vector<int> arr, int target, int i){
    if(i == arr.size()){
        return -1;
    }
    int idxfound = lastoccur(arr, target, i+1);

    if(idxfound == -1){
        if(arr[i] == target){
            return i;
        }
    }
    return idxfound;
}
int main(){
    vector<int> arr = {1,2,3,3,4,4,5,5};
    cout<<firstoccur(arr, 0, 3)<<endl;
    cout<<lastoccur(arr,3, 0)<<endl;
    return 0;
}