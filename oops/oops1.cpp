#include <iostream>
using namespace std;
class student{
public:
    int roll_no;
    string name;
    int marks[5];
    void input(){
        cout<<"Enter the roll number";
        cin>>roll_no;
        cin.ignore();
        cout<<"Enter the name";
        getline(cin,name);
        cout<<"Enter the marks";
        for(int i=0;i<5;i++){
            cout<<"Enter the  "<<i<<"marks"<<endl;
            cin>>marks[i];
        }
    }
    void display(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        for(int i=0;i<5;i++){
            cout<<"Marks are"<<marks[i]<<endl;
        }
    }

};
int main(){
    student s;
    s.input();
    s.display();
    return 0;
}