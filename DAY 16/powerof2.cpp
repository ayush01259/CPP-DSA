#include<iostream>
using namespace std;
bool isPower(int number){
   if(!(number & ( number -1))){
    return true;
   }else{
    return false;
   }
}
int main(){
    cout<<isPower(4)<<endl;
    cout<<isPower(19)<<endl;
    cout<<isPower(28)<<endl;
    return 0;
}