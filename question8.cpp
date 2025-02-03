//Question 8
#include <iostream>
#include <string>
using namespace std;
int main() {
    string fullName;
    int age;
    cout << "Enter your full name: ";
    getline(cin, fullName); 
    cout << "Enter your age in years: ";
    cin >> age;
    int daysLived = age * 365;
    cout << "Hello, " << fullName << "! You have lived approximately " << daysLived << " days.\n";
    return 0;
}