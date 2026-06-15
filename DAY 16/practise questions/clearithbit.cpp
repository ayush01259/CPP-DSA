#include<iostream>
using namespace std;

int clearIBit(int number, int i){
    int bitmask = ~(0)<<i;
    number = number & bitmask;
    cout<<number<<endl;
}
int main(){
    clearIBit(15,3);
    return 0;
}