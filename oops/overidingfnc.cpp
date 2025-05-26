#include <iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"Display method of base class"<<endl;
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"Display method of derived class"<<endl;//provides preference to its own fnc in single class
    }
    };
int main(){
    Derived d;
    d.display();
    return 0;
}