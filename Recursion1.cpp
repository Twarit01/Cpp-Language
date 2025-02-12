// //Write a program to find sum of N natural numbers using recursion
// #include <iostream>
// using namespace std;
// int sumOfNaturalNumbers(int n) {
//     if (n == 1)  
//         return 1;
//     return n + sumOfNaturalNumbers(n - 1); 
// }
// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     if (n <= 0) {
//         cout << "Please enter a positive integer!" << endl;
//     } else {
//         int result = sumOfNaturalNumbers(n);
//         cout << "Sum of first " << n << " natural numbers is: " << result << endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n=5;
    cout<<fact(n);
    return 0;
}