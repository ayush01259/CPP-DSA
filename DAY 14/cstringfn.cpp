#include<iostream>
#include<cstring>
using namespace std;

int main(){
// strcpy(dest, src) := to copy stirng from src to dest
// strcat(str1, str2) := to concatenate/ join str1 with str2
// strcmp(str1, str2) := compares 2 strings based on values (-ve , 0, +ve)



// copying the string
    char str1[100];
    char str2[100] = "Ayush DSA sikh rha";
    strcpy(str1, str2);
    cout<<str1<<endl;


// concatenating the strings
char str3[] = "Hellow";
char str4[] = " Ayuish";
strcat(str3,  str4);
cout<<str3<<endl;

// comparing two strings
char str5[] = "kabbadi";
char str6[] = "z";
// it has no relation with length it only sees in two strings wherever the first element in the alphabet comes first becomes smaller
cout<<strcmp(str5, str6)<<endl;

    return 0;
}