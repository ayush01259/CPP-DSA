#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    virtual void draw() = 0;//pure virtual function or abstract

};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"draw circle\n";
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"Draw square"<<endl;
    }
};

int main(){
    Circle C1;
    C1.draw();

    Square S1;
    S1.draw();

//Shpape s1; it causes errror bcz this is unimplemented pure virtual 
    return 0;
}
