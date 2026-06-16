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
        *mileage = *original.mileage;
    }

    // destructor
    ~Car(){
        cout<<"deleting object...\n";
//  would delete statically created memory but for dynamically created memory we have to delete it own
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
        //this time dynamically created memory would be deleted too
    }
};
int main(){
    
    Car c1("Toyota LC","Black");
    
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    return 0;
}