// Question 1
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"Enter the name";
    getline(cin,name);
    cout<<"Enter the age";
    cin>>age;
    cout<<"Name is"<<name<<endl<<"age is"<<age; 
    return 0;
}