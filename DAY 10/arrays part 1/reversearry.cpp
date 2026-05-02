// doing with extra space 
// #include<iostream>
// using namespace std;
// void printarr(int *arr, int n){
//     for(int  i = 0; i<n; i++){
//         cout<< arr[i] << ",";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/ sizeof(int);

//     int copyarr[n];
//     for(int i = 0; i<n; i++){
//         int j = n-i-1;
//         copyarr[i] = arr[j];
//     }
    
//     for(int i = 0; i<n; i++){
//         arr[i] = copyarr[i];
//     }

//     printarr(arr, n);

//     return 0;
// }



// now doing without any extra space
#include<iostream>
using namespace std;

void printarr( int *arr, int n ){
    for( int i = 0; i<n; i++){
        cout<<arr[i]<<",";
}
cout<<endl;
}

int main(){
int arr[] = {4,55,64,21,74,83};
int n = sizeof(arr)/sizeof(int);

int start = 0, end = n-1;

while (start<end)
{

//    int temp = arr[start];
//    arr[start] = arr[end];
//    arr[end ] = temp;
// we can do this too
swap(arr[start], arr[end]);
   start++;
   end--;
}

printarr(arr, n);

    return 0 ;
}