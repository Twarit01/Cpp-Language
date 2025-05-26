// #include <iostream>
// using namespace std;
// class Base{
//     public:
//     void display(){
//         cout<<"Display method of base class"<<endl;
//     }
// };
// class Derived:public Base{
//     public:
//     void display(){
//         cout<<"Display method of derived class"<<endl;//provides preference to its own fnc in single class
//     }
//     };
// int main(){
//     // Derived d;
//     // d.display();
//     Base* basePtr;
//     //Base derivedObj;
//     Derived derivedObj;
//     basePtr=&derivedObj;
//     basePtr->display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Base{
//     public:
//     virtual void display(){
//         cout<<"Display method of base class"<<endl;
//     }
// };
// class Derived:public Base{
//     public:
//     void display() override{
//         cout<<"Display method of derived class"<<endl;//provides preference to its own fnc in single class
//     }
//     };
// int main(){
//     // Derived d;
//     // d.display();
//     Base* basePtr;
//     //Base derivedObj;
//     Derived derivedObj;
//     basePtr=&derivedObj;
//     basePtr->display();
//     return 0; //Display method of Derived class
// }

#include <iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Display method of base class"<<endl;
    }
};
class Derived:public Base{
    public:
    void display() override{
        cout<<"Display method of derived class"<<endl;//provides preference to its own fnc in single class
    }
    };
int main(){
    // Derived d;
    // d.display();
    Base* basePtr;
    //Base derivedObj;
    Base derivedObj;
    basePtr=&derivedObj;
    basePtr->display();
    return 0;// Display Method of base class
}