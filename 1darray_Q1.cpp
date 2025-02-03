//program to read and traverse 1d array
#include <iostream>
using namespace std;
int main(){
    int arr[5],i;
    cout<<"Provide 5 integers"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}