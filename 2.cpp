#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float marks;
    void display(){
        cout<<"name: "<<name<<"\n rollno: "<<rollno<<"\n marks: "<<marks<<endl;
    }
};
int main(){
    student s1,s2;
    s1.name="rohith";
    s1.rollno=11249037;
    s1.marks= 85;
    s2.name="manobhiram";
    s2.rollno=11249046;
    s2.marks=99;
    
    s1.display();
    s2.display();
    
    return 0;
}