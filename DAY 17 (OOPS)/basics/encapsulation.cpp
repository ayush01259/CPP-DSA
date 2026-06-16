// we are learning about constructors and encapsulation here btw
#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
    
    public:
    Car(){
        cout<<"Constructors without parameters"<<endl;
    }
    Car(string name, string color){
        cout<<"Constructor with parameters"<<endl;
        this->color = color;
        this->name = name; //both are same here btw 
    }
    void start(){
        cout<<"The car has been started....\n";
    }
    void stop(){
        cout<<"The car has been stopped...\n";
    }

    //Getter
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

};

int main(){
    Car c0; // without parameter constructor
    Car C1("Fortuner","Black"); // parameterised constructor
    cout<<"The name of your car is "<<C1.getName()<<" and the color of your car is "<<C1.getColor()<<endl;
    return 0;
}