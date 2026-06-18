 polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

there are two types of polymorphism
1). compile time polymorphism
2). Run time polymorphism


1) compile type polymorphism
* function overloading 
    code example here
<!-- class Print{
public:
    void show(int x){
        cout<<"INT : "<<x<<endl;
    }
    void show(string str){
        cout<<"String : "<<str<<endl;
    }
};
int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("Ayush");
    return 0;
} -->
output: -
INT : 25
String : Ayush 
yeh detect kr leta hai input me string hai ya int aur usse automatically clasify v kr deta hai 

* Operator overloading
   code example here :-
    <!-- class Complext{
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
        Complext c1(1,2);
    Complext c2(4,6);

    c1.showNum();
    c2.showNum();

    Complext c3 = c1+c2;
    c3.showNum();

    Complext c4 = c2 - c1;
    c4.showNum();
    return 0;
    } -->

iska yehi kaam hai ki yeh 2 fucntions me operatons kr skta hai aur 2 function aise v rhe to unme operation laga kr dikha skta hai 

2). Run time polymorphism
* function overriding 
    parent and child both contains the same fucntion with defferent implementaiton.
    The parent class fucntion is said to be overridden 

    code example here
        <!-- #include<iostream>
    <!-- #include<string>
    using namespace std;
    class Parent{
        public:
        void show(){
            cout<<"Parent class show"<<endl;
        }
    };
    class Child : public Parent{
        public: 
        void show(){
            cout<<"Child class show"<<endl;
        }
    };
    int main(){
        Child Child1;
        Child1.show();
        return 0;
    } --> 
it gives result on what is called and decided on run time


* virtual function
A virtual function is a member function that you expect to be redefined in derived classes

.) Virtual functions are dynamic in nature.
.) Defined by keyword "virtual" inside a base class adn are always declared with a base class and overridden in child class
.) A virtual function is callded during Runtime