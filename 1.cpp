#include<iostream>
using namespace std;
class laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<<brand <<"processor:"<<processor <<"ram:"<<ram<<"GB"<<endl;
    }
};
int main(){
    laptop l1,l2;
    l1.brand = "DELL";
    l1.processor = "INTEL i5";
    l1.ram = 8;
    l2.brand = "HP";
    l2.processor = "AMD RYZEN 5";
    l2.ram = 16;
    l1.display();
    l2.display();
    return 0;
}

          
         
    