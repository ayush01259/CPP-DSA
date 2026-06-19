// friend class or a friend function can access private and protected members of other classes in which it is declared as a friend



#include<iostream>
#include<string>
using namespace std;
class A{
    string secret = "Secret data";
    friend class B;
    friend void revealSecret(A &obj);
};
class B { // to simple to make friends in virtual life btw
    public:
    void showSecret(A & obj){
        cout<<obj.secret<<endl;
    }
};


void revealSecret(A &obj){ // another friend making btw now they can share everything
    cout<<obj.secret<<endl;
}


int main(){
    A a1;
    B b1;
    // b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}