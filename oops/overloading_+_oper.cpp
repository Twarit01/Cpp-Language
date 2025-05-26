#include <iostream>   
using namespace std;
class Complex {
 float real, imag;
public:
 Complex(float r = 0, float i = 0) : real(r), imag(i) {} //Combn of default and parameterized constructor
 // Overloading '+' operator
 Complex operator + (const Complex& obj) { //reference of obj & its values are constant  
 return Complex(real + obj.real, imag + obj.imag);
 }
 void display() {
 cout << real << " + " << imag << "i" << endl;
 }
};
int main() {
 Complex c1(3.5, 2.5), c2(1.5, 4.5);
 Complex c3 = c1 + c2;
 c3.display();
 return 0;
}   





































