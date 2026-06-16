//deep and shallow copy concepts

#include<iostream>
using namespace std;
class Car{
    public: 
    string name;
    string color;
    int *mileage;
    Car (string name, string color){
        this->name = name; // static allocaiton
        this->color = color;
        mileage = new int; // Dynamic allocation
        *mileage = 12;
    }
    Car (Car &original){
        cout<<"Copying original to new...\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        // would make it deep copy as it was shallow copy back then 
        *mileage = *original.mileage;
    }
};
int main(){
    
    Car c1("Toyota LC","Black");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    // in shallow copy changing mileage of c2 would have affect the mileage of c1 but after we makeit deep copy any changes to c2 doesnt affect the c1
    return 0;
}