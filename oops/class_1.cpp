// #include <iostream>
// using namespace std;
// class Animal{
// protected:
//     string name;
//     int age;
// public:
//     Animal(string name,int age):name(name),age(age){}//listing method of constructor

//     void eat(){
//         cout<<name<<"is eating"<<endl;

//     }
//     void sleep(){
//         cout<<name<<"is sleeping"<<endl;
//     }
// };
// int main(){
//     return 0;
// }

#include <iostream>
using namespace std;
// Base class
class Animal {
protected:
string name;
int age;
public:
Animal(string name, int age) : name(name), age(age) {}
void eat() {
cout << name << " is eating." << endl;
}
void sleep() {
cout << name << " is sleeping." << endl;
}
};
// Derived class
class Dog : public Animal {
private:
    string breed;
public:
    Dog(string name, int age, string breed):Animal(name, age), breed(breed) {}
    void bark(){
    cout << name << " (a " << breed << ") is barking." << endl;
}
    void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Breed: " << breed << endl; 
}
class Cat:public Animal{
protected:
    string eyecolor;
public:
    Cat(string name,int age,string eyecolor):Animal(name,age),eyecolor(eyecolor){}
    void display(){
        cout<<"Name"<<name<<endl;
        cout<<"Age"<<age<<endl;
        cout<<"Eyecolor"<<eyecolor<<endl;
    }
}
};
int main() {
Dog dog("Max", 3, "German Shepherd");
dog.display();
dog.eat(); // Inherited from Animal
dog.sleep(); // Inherited from Animal
dog.bark(); // Defined in Dog
return 0;
}