#include <iostream>
#include <string>
using namespace std;
class B{
    private:
    int roll_no;
    string name;
    int perc;
    public:
    B(){
        cout<<"Default Constructor"<<endl;
        roll_no=1;
        name="Unknown";
        perc=75;
    }
    B(string n, int r, float p){
        cout << "you are in parameterized constructor" << endl;
        name = n;
        roll_no = r;
        perc = p;
    }
    ~B(){
        cout << "Destructor called for " << name << endl;
    }
    private: 
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Perc: " << perc << endl;
    }
};
int main(){
    B s;
    s.display();
    B s1("Hello",12,80.5);
    s1.display();
    return 0;
}