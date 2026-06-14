///getting and setting ith bit
#include<iostream>
using namespace std;

int getithbit(int num, int i){
    int bitmask = 1<<i;

    if(!(num & bitmask)) {
        return 0;
    }else{
        return 1;
    }
}

int main(){
    cout<<getithbit(6,2)<<endl;
    cout<<getithbit(8,3)<<endl;
    cout<<getithbit(9,3)<<endl;
    return 0;
}