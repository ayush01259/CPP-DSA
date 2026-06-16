//when properties and member function of base class are passed on to derived class. 
//it is used for reusing for multiple classes
#include<iostream>
using namespace std;

class Animal{
public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};

class Fish : public Animal{// by default it would be a private inheritance 
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};
int main(){
    Fish f1;
    f1.fins = 2;
    cout<<f1.fins<<endl;
    // private cant be accessed any where in inheritance
    // protected can be accessed in derived class too
    // protected is pirvate but can be accessed by deriving it
    //protected cant be inherited in main and can be in class inherited
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0;
}
