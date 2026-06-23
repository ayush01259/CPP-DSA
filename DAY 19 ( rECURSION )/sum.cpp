#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int sum(int n){
    if(n == 1){
        return 1;
    }

    return n + sum(n-1);
}
int fibonacci(int n){
    if(n == 0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    cout<<sum(6)<<endl;
    cout<<fibonacci(6)<<endl;
    return 0;
}