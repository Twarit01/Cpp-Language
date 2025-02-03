#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); 
        n >>= 1;  
    }
    return count;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int manualCount = countSetBits(num);
    int builtinCount = __builtin_popcount(num);
    cout << "Number of 1 bits (manual method): " << manualCount << endl;
    cout << "Number of 1 bits (built-in method): " << builtinCount << endl;
    return 0;
}