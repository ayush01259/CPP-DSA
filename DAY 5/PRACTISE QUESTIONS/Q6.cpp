#include<iostream>
using namespace std;
int main(){
    int n ;
    do
    {
        cout<<"Enter your number:  " <<endl;
        cin>>n;
        if (n%10==0)
        {
            cout<<"YOUR LOOP ENDED WITH NUMBER "<<n <<endl;
             break;
        }
        cout<<"You entered "<<n <<endl;
    } while (true);
    


    return 0;
}