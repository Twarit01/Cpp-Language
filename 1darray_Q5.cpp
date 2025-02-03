//program to search for a specific number in an array using linear search 
#include <iostream>
using namespace std;
int main() {
    int n,a, i, found = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >>a;
    for (i = 0; i < n; i++) {     
        if (arr[i] == a) {
            found = 1;
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}