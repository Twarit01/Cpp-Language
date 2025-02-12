#include <iostream>
using namespace std;
void name (string fname){
    cout << fname;
}
void name (string fname,string lname){
    cout << fname<<lname;
}
int main(){
    name("dennis");
}