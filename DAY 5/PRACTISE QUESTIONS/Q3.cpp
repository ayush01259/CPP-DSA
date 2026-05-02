#include<iostream>
using namespace std;
int main(){
    int n = 12345985;
    int rev =    0;
    while(n>0){
        int lasdig = n%10;
        rev = rev * 10 + lasdig;
        n = n/10;
    }

    cout << "reversed n = "<< rev << endl;


    return 0 ;
}