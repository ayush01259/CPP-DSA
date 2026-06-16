#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    Car(string name, string color){
        this->color = color;
        this->name = name;
    }

    // custom copy constructor
    Car(Car &original){
        cout<<"Copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};
int main(){
    Car c1{"Audi A6","Blue"};
    Car c2(c1); // custom copy call hoga
    cout<<c2.name<<endl;
    cout<<c1.color<<endl;
    return 0;
}