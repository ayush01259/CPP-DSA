#include<iostream>
using namespace std;
int main(){
int numsum = 0 ;
int n = 123456789;
    while (n>0)
    {
        int nextdig = n%10;
        if(nextdig%2!=0){
            numsum = numsum + nextdig;
        }
        n = n/10;
    }
    cout<<numsum;
 return 0   ;
}