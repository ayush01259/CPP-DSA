///Create a user calss with properties: id(private), username(public) and password(private). Its id should be initialized in a paramterised constructor. It should have a getter and setter for passowrd

#include<iostream>
using namespace std;

class User{
    private:
    int id;
    string password;
    public:
    string username;

    User(int id){
        this-> id = id;
    }

    //Getter
    string getpassow(){
        return password;
    }

    //setter
    void setpassword(string Passvale){
        password = Passvale;
    }
};

int main(){
    User user1(101);
    user1.username = "Ayush Dalmia";
    user1.setpassword("Aabrakadabra");
    cout<<"your name is : "<<user1.username<<endl;
    cout<<"Your password is : "<<user1.getpassow()<<endl;

    return 0;
}