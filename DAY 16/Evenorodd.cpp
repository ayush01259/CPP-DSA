#include<iostream>
using namespace std;
void oddOrEven(int num){
    if(!(num & 1)){
        cout<<"Even \n";
    }else{
        cout<<"odd \n";
    }
}
int main(){
    oddOrEven(13);
    return 0;
}