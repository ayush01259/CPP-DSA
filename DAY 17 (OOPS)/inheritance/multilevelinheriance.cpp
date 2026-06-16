#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eats"<<endl;
    }
    void breath(){
        cout<<"Breathes"<<endl;
    }
};

class Mammal :public Animal{
    public:
    string bloodType;
        Mammal(){
            bloodType = "warm\n";
    }
};

class Dog: public Mammal{
    public:
    void tailwaig(){
        cout<<"A dog wags its tail"<<endl;
    }
};
int main(){
    Dog d1;
    d1.eat();
    d1.breath();
    cout<<d1.bloodType;
    d1.tailwaig();
    return 0;
}