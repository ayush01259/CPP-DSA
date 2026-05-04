#include<iostream>
#include<climits>
using namespace std;

void trappedWater(int *height, int n){
     int leftMax[20000], rightmax[20000];
     leftMax[0] = height[0];
     rightmax[n-1] = height[n-1]; 

     

     for(int i =1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        
     }

     for(int i= n-2; i>=0; i--){
        rightmax[i] = max(rightmax[i+1], height[i+1]);
        
     }

     int waterTrapped  = 0;
     for(int i =0; i<n; i++){
        int currwater = min(leftMax[i], rightmax[i]) - height[i];
        if (currwater>0){
            waterTrapped += currwater;
        }
     }
     
     cout<<"Water trapped = "<< waterTrapped<<endl;
}

int main(){
   int height[7] = {4,2,0,6,3,2,5};
   int n = sizeof(height)/ sizeof(int);

    trappedWater(height, n);



    return 0;
}