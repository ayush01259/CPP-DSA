#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,5,6,78,98,7,8};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];
    int min = arr[0];
    for(int i =0; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
            cout<<"Assinging new max to " <<arr[i] << endl;
        }
        if(arr[i]<min){
            min = arr[i];
            cout<<"Assigning new min to "<<arr[i]<<endl;
        }
    }
    cout<<"MAX = "<< max<< endl;
    cout<<"MIN = "<<min << endl;
}