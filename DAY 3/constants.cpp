#include<iostream>
using namespace std;
int main() {
    const int num = 25;
    int num2 = 35;
    num2 = 54;
    //const have to initialise value inthe same line, it can't be declared later
    cout<<num;
    return 0;
}

//const occupy space in memory while macro doesnt occupy space in memory 

//anything after boolean is 1 except for 0 its 0 like cout<<(bool)3 then its 1 bcz its true value and true means and cout<<(bool)0 means 0