// test case 3
#include <iostream>
using namespace std;
int x = 5;
void update(){
    int x = 5; //local variables hi use honge
    x++;
    cout << x << endl;
}
int main(){
    update();
    update();
}