#include<iostream>
using namespace std;
class student{
    int rollno;
    string name;
    int age;
    string course;
    float marks;
public:
    student(){
        rollno= 0;
        name = "unknown";
        age = 0;
        course = "unknown";
        marks = 0;
        cout<<"default constructor called"<<endl;
    }
    void display(){
        cout<<"Rollno:"<<rollno<<"Name:"<<name<<"Age:"<<age<<"course:"<<course<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}