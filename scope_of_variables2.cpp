//test case 2
#include <iostream>
using namespace std;
int x = 5; //Global variable
void update(){
    x++; //using global variable 
    cout << x << endl;
}
int main(){
    update();
    int x = 1; // local variable for main fnc
    cout << x;// calls local variable because its inside the fnc
}