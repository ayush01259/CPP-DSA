#include<iostream>
#include<string>
using namespace std;

class Example{
    public:
    static int x ;
};
int Example:: x = 0;

// void counter(){
//    static int count = 0;
//     count++;
//     cout<<"count : "<<count<<endl;

// }

int main(){
    // counter();
    // counter();
    // counter();
    Example Eg1;
    Example Eg2;
    Example Eg3;

    cout<<Eg1.x++<<endl;
    cout<<Eg2.x++<<endl;
    cout<<Eg3.x++<<endl;
    return 0;
}