#include<iostream>
#include<cstring>
using namespace std;
 
void reverse(char word[], int n){
    int st = 0, end = n-1;
    while(st < end){
        swap(word[st], word[end]);
        st ++ ; end --;
        // we can eneter the st++ and end-- in the bracket too like
        // swap(word[st++], word[end--])
    }
}

int main(){
    char word[] = "AYUSH";
    reverse(word, strlen(word));
    cout << "Reverse = "<< word << endl;
    return 0;
}

// it get passed by refernce so its a pointer containing the properties of arrays as well as some properties of string