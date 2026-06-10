#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string str = "Hellow Aiyush@@";

    cout<<str.length()<<endl;

    cout<<str.at(4)<<endl;

    cout<<str.substr(1,6)<<endl;
    int idx = str.find("Ayush");
    cout<<str.find("Aiyush")<<endl;
    cout<<idx<<endl; // it would give -1 becuase it doesnt exist and is in a variable either give any garbage value

    return 0;
}