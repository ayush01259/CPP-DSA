#include<iostream>
#include<string>
using namespace std;

void print(int n){

    if(n==0){
        return;
    }

    cout<<n<<" ";
    print(n-1);
}

void sum(int n){
   int currint = 1;
   if(currint > n){
    return;
   }
   cout<<n<<" ";
   print(n+1);
   
   
}

int main(){
    print(5);
    sum(5);
    return 0;
}