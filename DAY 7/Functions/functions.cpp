#include<iostream>
using namespace std;
//we can do this too just like that cal a function earlier then use it in the main and give the input after the main
void kchv();
void callfunc(){
    cout<<"Function is being called \n"<<endl;
}
void ansfunct(){
    callfunc();
    cout<<"THIS FUNCTION CONTAINS NOTHING NOW\n";
}

int main(){ 
    ansfunct();
    kchv();
    return 0;
}
void kchv(){
    cout<<"\nNOTHING TO SAY NIGGA \n";
}