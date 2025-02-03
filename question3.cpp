//Question 3
#include<iostream>
using namespace std;
int main(){
    int a,b,op;
    cout<<"enter value of a and b";
    cin>>a;
    cin>>b;
    cout<<"select the operator";
    cout<<"press 1 for add\n";
    cout<<"press 2 for sub\n";
    cout<<"press 3 for mul\n";
    cout<<"press 4 for div\n";
    cin>>op;
    switch(op){
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
    }
    return 0;
}