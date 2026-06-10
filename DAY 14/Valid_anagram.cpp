#include<iostream>
#include<cstring>
using namespace std;
// here in two string both have same characters arranged differently and if both are same then we call it anagram

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout<<"not applicable for a anagram";
        return false;
    }

    int count[26] = {0};
    for(int i = 0; i<str1.length(); i++){
        int idx = str1[i]-'a';
        
        // we can write like this too
        //count[str1[i]-'a']++;
        count[idx]++;
    }

    for(int i =0; i<str2.length(); i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            // we can directly write that int idx - str2[i]-'a' to 
            // if(coutn[str2[i]-'a'] == 0)
            cout<<"Not valid anagram\n";
            return false;
        }
        count[idx]++;
    }


    cout<<"Is a valid anagram"<<endl;    
    return true;

}
int main(){

    string str1 = "anagjam";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}