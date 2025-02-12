//test case 1
#include <iostream>
using namespace std;
int x=5; //global variable
void update (){
    int x=5;//local variable for function
    x++;
    cout<<x<<endl;
}
int main (){
    update();//calling fnc variable
    cout<<x<<endl;//calling global variable
    update();//calling fnc variable
}