#include<iostream>
using namespace std;

void bintonum(int binnum){
    int n = binnum;
    int decnum = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n%10;
        decnum += lastdig* pow;
        pow = pow*2;


        n = n/10;

    }
    cout<<decnum<<endl;
}

int main(){

    bintonum(10101);


    return 0;
}