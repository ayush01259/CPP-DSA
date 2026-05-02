#include<iostream>
using namespace std;
int main() {
    float a, b  ;
    char op;
    cout << "Enter a : " <<endl;
    cin>> a;
    cout<<"Enter b : " << endl;
    cin>>b;
    cout<<"Enter your operator"<<endl;
    cin>>op;

    if(op == '+'){
        cout<< "a + b = " <<(a+b)<<endl;
    } else if ( op == '-'){
        cout<< "a - c = "<<(a-b)<<endl;
    } else if( op == '*'){
        cout<< "a * b = "<< (a * b) << endl;
    } else if(op == '/'){
        cout<< "a / b = "<<(a / b)<< endl;
     } else{
        cout<<"Invalid Operator Nigga!";
    }

    switch (op)
    {
    case '+' : cout<<"a + b = "<<(a+b)<<endl;
        break;
    case '-':   cout<< "a - c = "<<(a-b)<<endl;
        break;
    case '*' :  cout<< "a * b = "<< (a * b) << endl;
        break;
    case '/' :  cout<< "a / b = "<<(a / b)<< endl;
        break;
    default : cout<<"Invalid Opeator N!gga";
    }
    return 0;
}