#include<iostream>
using namespace std;
void factorial(int a){
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact = fact * i;
    }
    cout<<"Factorial of number (" <<a << ") would be "<<fact<<endl;
    
}
int main(){
    factorial(5);

    return 0;
}