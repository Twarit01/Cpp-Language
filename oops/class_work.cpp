#include <iostream>
using namespace std;
class D{
public:
    int temp;
    D(){
        cout<<"In class D\n";
    }
};
 class A:virtual public D{
protected:
    int a=10;
public:
    A(){
        cout<<"In class A\n";
    }
    int increment(){
        return a++;
    }
};
 class B:virtual public D{
protected:
    int b=5;
    public:
    B(){
        cout<<"In class B\n";
    }
    int decrement(){
        return b--;
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"In class C\n";
    }
};
int main(){
    C c;
    cout<<c.increment()<<"\n";
    cout<<c.decrement();
    //cout<<c.temp();//ambiguouty
    return 0;
}