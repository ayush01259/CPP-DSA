#include<iostream>
using namespace std;
int main () {

    bool isAdult ;
    int age;
    cout << "Enter age ";
    cin>> age;
    if(age>=18){
        isAdult = true;
    }else{
        isAdult = false;
    }
    
    isAdult = age>= 18? true:false;
    cout<<isAdult <<endl;
    int a = 143;
    int b = 45;
    int largest = a>b ? true:false;
    cout<< largest <<endl;
    return 0;
}