#include<iostream>
#include<string>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show...\n";
    }

    virtual void hello(){
        cout<<"parent hello"<<endl;
    }
};


class Child : public Parent{
    public:
    void show(){
        cout<<"Child class show...\n";
    }
    void hello(){
        cout<<"child hello\n";
    }
};
int main(){

    Child Child1;
    Parent *ptr;
    ptr = &Child1; // run time binding possible due to inheritance
    ptr->hello(); // virtual function
    return 0;
}