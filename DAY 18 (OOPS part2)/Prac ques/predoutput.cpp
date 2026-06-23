#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"Base\n";
    }
};
class Derived : public Base{
    public:
    void print() override{
        cout<<"derived"<<endl;
    }
};
int main(){
    Base* b = new Derived();
    b->print();
    delete b;
    
    return 0;
}