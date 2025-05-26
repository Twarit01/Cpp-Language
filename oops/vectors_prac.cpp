// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     cout<<vec[1];
//     return 0;
// }

#include <iostream>
using namespace std;
class MyHackClass {
private:
    int MyHackVar;

public:
    MyHackClass() : MyHackVar(7) { }

    void operator++() {
        MyHackVar = MyHackVar + MyHackVar * MyHackVar - MyHackVar;
    }

    void MyHackFunc() {
        cout << "Result:: " << MyHackVar << endl;
    }
};

int main() {
    MyHackClass myhackobj;
    ++myhackobj;
    myhackobj.MyHackFunc();
    return 0;
}
