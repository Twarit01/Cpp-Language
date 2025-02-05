#include <iostream>
using namespace std;
int maxnum(int x,int y){
    if(x>y){
        cout<<"Maximum number is  "<<x;
    }
    else{
        cout<<"Maximum number is  "<<y;
    }
}
int main(){
    int a,b,ans;
    cout<<"Enter the both numbers";
    cin>>a>>b;
    ans=maxnum(a,b);
    return 0;
}