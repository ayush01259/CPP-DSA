#include<iostream>
using namespace std;
void fastexp(int x, int n){
    int ans = 1;

    while(n>0){
        int lastbit = n&1;
        if(lastbit){
            ans = ans*x;
        }
        x = x*x;
        n = n>>1;
    }
    cout<<ans<<endl;
}
int main(){
    fastexp(5,4);
    return 0;
}