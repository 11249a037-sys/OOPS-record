#include<iostream>
using namespace std;
class account{
    public:
           string name;
           int accno;
           float balance;
           void display(){
                cout<<"name:"<<name;
                cout<<"\n accno:"<<accno;
                cout<<"\nbalance:"<<balance<<endl;
            }
        };
        int main(){
            account a1,a2;
            a1.name="rohith";
            a1.accno= 101;
            a1.balance = 3000.50;
            a2.name="prasanth";
            a2.accno = 101;
            a2.balance = 5000.65;
            a1.display();
            a2.display();
            return 0;
          }