#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int n){
    int st = 0, end = n-1;
    while (st<end){
        if(str[st++]!= str[end--]){
            cout<<"Not a valid palindrome\n";
            return false;
        }
    }
    cout<<"A vaid palindrome\n";
    return true;
}

int main(){

    char word[] = "MoppoM";
    isPalindrome(word, strlen(word));
    return 0;
}