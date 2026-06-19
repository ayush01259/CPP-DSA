#include<iostream>
#include<string>
using namespace std;
class Parent{
     public:
     Parent(){
        cout<<"Constructor of parent"<<endl;
     }
     ~Parent(){
        cout<<"Destructor of parent"<<endl;
     }
};

class Child: public Parent {
    public:
    Child(){
        cout<<"Constructor of parent"<<endl;
    }
    ~Child(){
        cout<<"Destructor of child\n";
    }
};

int main(){
    Child ch1;
    return 0;
}