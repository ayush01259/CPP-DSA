#include<iostream>
using namespace std;
int n = 5;
char ch = 'A';
int main(){
    for(int i = 1; i<=n; i++ ){
        for ( int j = 1; j<=i ; j++){
            cout<< ch++ ;
            
        }
        cout<< endl ;
    }



    return 0;
}