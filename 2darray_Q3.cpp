//Print elements of primary and secondary elements
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
    cout<<"primary Diagonal";
    for(int i=0,j=0;i<3,j<3;i++,j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
    cout<<"Secondary Diagonal";
    for(int i=0;i<3;i++){
            cout<<arr[i][2-i]<<"\t";
    }
    cout<<endl;
    return 0;
        
    }

