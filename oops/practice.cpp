#include <iostream>
using namespace std;
class student{
    int age,num;
    string name;
    int setvalue(){
        this->age=10;
        this->num=989898;
        this->name="Alok";
    }
    public:
    int getage(){
        return this->age;
    }
    int getnum(){
        return this->num;
    }
    string get_name(){
        return this->name;
    }
    student(){
        setvalue();
        cout<<"age and num"<<getage()<<endl;
        cout<<"age and num"<<getnum()<<endl;
        cout<<"name"<<get_name()<<endl;
    }
};
int main(){
    student s1;
    return 0;
}