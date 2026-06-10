#include<iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n){
    for (int i = 0; i<n ; i++){
        char ch = word[i];
        if(ch >='A' && ch<='Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        }
    }
}


void tolower(char woord[], int n){
    for( int i = 0; i<n ; i++){
        char ch = woord[i];
        if (ch >= 'a' && ch<='Z'){
            continue;
        }else{
            woord[i] = ch - 'A' + 'a';
        }
    }
}


int main(){
    char woord[] = "ASDGFHJKG";
    char word[] = "cjrdyyhj";
    toUpper(word, strlen(word));
    tolower(woord, strlen(woord));
    cout << word << endl;
    cout << woord << endl;
    return 0;
}