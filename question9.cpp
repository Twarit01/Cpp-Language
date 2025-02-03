//Question 9
#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    char characterInput;
    int integerInput;
    float floatInput;
    cout << "Enter a character: ";
    cin >> characterInput;
    cout << "Enter an integer: ";
    cin >> integerInput;
    cout << "Enter a floating-point number: ";
    cin >> floatInput;
    cout << "\nFormatted Table:\n";
    cout << setw(15) << "Character"<< setw(15) << "Integer"<< setw(20) << "Floating Point" << '\n';
    cout << setw(15) << characterInput<< setw(15) << integerInput << setw(20) << fixed << setprecision(4) << floatInput << '\n';
    return 0;
}