//program to calculate the sum and avg of n numbers stored in an array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    int sum = 0;
    float average;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}
