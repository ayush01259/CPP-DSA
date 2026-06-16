#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;
    public:
    
    
    void getpercentage(){
        cout<<(cgpa *10)<<"% \n";
    }

    //setter
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getters (return value of the properties)
    string Getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Ayush");
    s1.setCgpa(9.1);

    cout<<s1.Getname()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}