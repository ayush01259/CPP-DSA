#include<iostream>
using namespace std;

int countsetbits(int num){
    int count = 0;

    while(num > 0){
        int lastdig = num & 1;
        count += lastdig;

        num = num >>1;
    }
    cout<<count<<endl;
    return count;
}

int main(){
    countsetbits(8);
    countsetbits(13);
    countsetbits(15);
    return 0;
}