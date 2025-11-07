#include<iostream>
using namespace std;
class car{
public:
     string model;
     string company;
     long double price;
     void display(){
        cout<<"\n company:"<<company<<"\n model:"<<model<<"\n price:"<<price<<endl;
    }
};
int main(){
    car c1,c2,c3;
    c1.company="toyato";
    c1.model =  "inova";
    c1.price = 200000;
    c2.company="honda";
    c2.model = "city";
    c2.price = 120000;
    c3.company="hyndai";
    c3.model="i 20";
    c3.price= 800000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}