//Question 4
#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << fixed << setprecision(2);  
    cout << "The result of division is: " << num1 / num2 << endl;
    return 0;
}