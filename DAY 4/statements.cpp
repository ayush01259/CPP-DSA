// we are learning conditional statements here
#include<iostream>
using namespace std;
int main() {
     int a,b,c;
     cout<< "Enter a : ";
     cin >> a;
     cout << "Enter b : ";
     cin >> b;
     cout<< "Enter C : ";
     cin>> c;
     if ( a>=b && a>=c){
        cout<< "A is the largest number here !";

     } else if (b>=c){
        cout<<"B is the largest number !";
     }
     else{
        cout<<"C is the largest number !";
     }
    return 0;
}