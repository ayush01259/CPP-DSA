#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    for(int i =0; i<5; i++){
        vec.push_back(i);
    }
    cout<<"size of vector = "<<vec.size()<<endl;
    cout<<"capacity of vector = "<<vec.capacity()<<endl;
   
    return 0;
}