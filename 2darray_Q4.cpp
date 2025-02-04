//Write a transpose of matrix
#include <iostream>
using namespace std;
int main() {
    int matrix[3][3], i, j;
    cout << "provide array elements";
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    } 
    int transpose[3][3];      
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}