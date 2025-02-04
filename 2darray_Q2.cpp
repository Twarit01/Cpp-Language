// Calculate and print sum of each column
#include <iostream>
using namespace std;
int main(){
    int arr[3][3], i, j;
    cout << "provide array elements";
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<"Sum of columns"<<j+1<<"="<<sum<<endl;
    }
    return 0;
} 