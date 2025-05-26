#include <iostream>
#include <string>
using namespace std;
class A{
public:
    int roll_no;
    string name;
    int perc;
    A(){
        cout<<"Default Constructor"<<endl;
        roll_no=1;
        name="Unknown";
        perc=75;
    }
    A(string n, int r, float p){
        cout << "you are in parameterized constructor" << endl;
        name = n;
        roll_no = r;
        perc = p;
    }
    ~A(){
        cout << "Destructor called for " << name << endl;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Perc: " << perc << endl;
    }
};
int main(){
    A s;
    s.display();
    A s1("Hello",12,80.5);
    s1.display();
    return 0;
}