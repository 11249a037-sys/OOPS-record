#include<iostream>
using namespace std;
class book{
public:
     string tittle;
     string author;
     float price;
     void display(){
        cout<<"\n tittle:"<<tittle<<"\n author:"<<author<<"\n price:"<<price<<endl;
    }
};
int main(){
    book b1,b2;
    b1.tittle="c++programming";
    b1.author =  "bjarene stroustrup";
    b1.price = 750.50;
    b2.tittle="data structures";
    b2.author = "mark allen weiss";
    b2.price = 600.75;
    b1.display();
    b2.display();    
    return 0;
}