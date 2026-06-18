#include<iostream>
#include<string>
using namespace std;
class Print{
public:
    void show(int x){
        cout<<"INT : "<<x<<endl;
    }
    void show(string str){
        cout<<"String : "<<str<<endl;
    }
};
class Complext{
    int real;
    int imaginary;
    public:
    Complext(int r, int i){
        real = r; 
        imaginary = i;
    }
    void showNum(){
        cout<<real <<" + "<<imaginary <<" i \n";
        //operator overloading
        // returnType operator opSymbol(){....}
         
    }
    Complext operator +  (Complext & c2){
        int resReal = this-> real +    c2.real;
        int resImg = this->imaginary + c2.imaginary;
        Complext c3(resReal, resImg);
        // cout<< "res = ";
        // c3.showNum();
        return c3;
    }

    Complext operator - (Complext & c2){
        int realResult = this->real - c2.real;
        int imagires = this->imaginary -c2.imaginary;
        Complext c4 (realResult, imagires);
        return c4;
    }

};
int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("Ayush");
    Complext c1(1,2);
    Complext c2(4,6);

    c1.showNum();
    c2.showNum();

    Complext c3 = c1+c2;
    c3.showNum();

    Complext c4 = c2 - c1;
    c4.showNum();
    return 0;
}