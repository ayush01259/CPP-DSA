#include<iostream>
using namespace std;
// cehcking a number is prime or not
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<=n-1; i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    
    cout<<isPrime(5);
    return 0;
}
