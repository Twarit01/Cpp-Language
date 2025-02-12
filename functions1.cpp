// one way with declaration of fnc no need to be in order
// #include <iostream>
// using namespace std;
// void print(int);
// void update (){
//     int x=5;
//     x++;
//     print(x);
// }
// void print(int a){
//     cout<<a<<endl;
// }
// int main (){
//     update();
// }

// without declaration and its need to be in order
#include <iostream>
using namespace std;
void print(int a){
    cout<<a<<endl;
}
void update (){
    int x=5;
    x++;
    print(x);
}
int main(){
    update();
    return 0;
}