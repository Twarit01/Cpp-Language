#include <iostream>
using namespace std;
class X{
    // private: //Error without friend function
    //int l,b;
    // public:  //NO error without friend function
    // int l,b;
    private: //No error with friend function
    int l,b; 
    public:
    X(int l,int b):l(l),b(b){};
    friend int area(X ob); //Friend function declaration
};
int area(X ob){  // Friend function definition
    return ob.l*ob.b;
}
int main(){
    X obj(2,3);
    cout<< area(obj); 
    return 0;
}